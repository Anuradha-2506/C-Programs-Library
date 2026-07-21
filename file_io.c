#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("sample.txt", "w");

    if(fp == NULL) {
        printf("File cannot be opened.");
        return 1;
    }

    fprintf(fp, "Hello! This is a File I/O example.");

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}