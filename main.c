#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[48];
    char names[2048][sizeof(name)];
    int count = 0;
    FILE * file;

    file = fopen("txt/ships.txt", "r");
    if (file == NULL){
        perror("Could not open file");
        exit(1);
    }

    while (fgets(name, sizeof(name), file)) {
        printf("%s", name);
        strcpy(names[count], name);
        count++;
    }

    fclose(file);
    exit(0);
}