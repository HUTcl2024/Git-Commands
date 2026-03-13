#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char line[1024];
    char hash[128];

    fp = popen("git blame -l file.txt", "r");

    if (fp == NULL) {
        printf("Failed to run git blame command.\n");
        return 1;
    }

    printf("Exercise 4: Git Blame Command\n\n");

    while (fgets(line, sizeof(line), fp)) {

        if (sscanf(line, "%40s", hash) == 1) {

            int len = strlen(hash);

            if (len >= 14) {
                printf("%.7s...%.7s\n", hash, hash + len - 7);
            }
        }
    }

    pclose(fp);

    return 0;
}