#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char hash[100];

    fp = popen("git log --pretty=format:%H", "r");

    if (fp == NULL) {
        printf("Failed to run git command.\n");
        return 1;
    }

    printf("Formatted Git Commit Hash:\n\n");

    while (fgets(hash, sizeof(hash), fp)) {

        hash[strcspn(hash, "\n")] = 0;

        int len = strlen(hash);

        if (len >= 14) {
            printf("%.7s...%.7s\n", hash, hash + len - 7);
        }
    }

    pclose(fp);

    return 0;
}