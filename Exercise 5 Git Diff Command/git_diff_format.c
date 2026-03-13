#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp;
    char line[1024];
    char oldHash[64], newHash[64];

    fp = popen("git diff", "r");

    if (fp == NULL) {
        printf("Failed to run git diff command.\n");
        return 1;
    }

    printf("Exercise 5: Git Diff Command\n\n");

    while (fgets(line, sizeof(line), fp)) {

        if (sscanf(line, "index %7[^.]..%7s", oldHash, newHash) == 2) {

            printf("%s...%s\n", oldHash, newHash);
        }
    }

    pclose(fp);

    return 0;
}