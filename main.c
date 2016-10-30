#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[48];
    char names[2048][sizeof(name)];
    int count = 0;
    FILE * file;

    // Try and open the file for reading, or exit with error

    file = fopen("txt/ships.txt", "r");
    if (file == NULL){
        perror("Could not open file");
        exit(1);
    }

    // Read each line and put them in an array of names

    while (fgets(name, sizeof(name), file)) {
        strcpy(names[count], name);
        count++;
    }

    fclose(file);

    // Sort the names alphabetically

    int i, j, k;
    char temp[sizeof(name)];

    for (i = 0; i < count - 1 ; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Print the sorted names

    for (k = 0; k < count; k++) {
        printf("%s", names[k]);
    }
}