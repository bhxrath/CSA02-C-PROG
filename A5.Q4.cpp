#include <stdio.h>
#include <string.h>

int main() {
    char filename[256];
    char search_string[256];

    printf("Enter file name: ");
    scanf("%s", filename);

    printf("Enter search string: ");
    scanf("%s", search_string);

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    char line[256];

    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, search_string) != NULL) {
            printf("%s", line);
        }
    }

    fclose(file);

    return 0;
}
