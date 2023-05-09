#include <stdio.h>
#include <string.h>

int main() {
    int i, j, num;
    char temp[100];
    
    printf("Enter the number of names: ");
    scanf("%d", &num);
    
    char names[num][100];
    
    // get names from user
    printf("Enter %d names: \n", num);
    for (i = 0; i < num; i++) {
        scanf("%s", names[i]);
    }
    
    // sort the names using bubble sort algorithm
    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - i - 1; j++) {
            if (strcmp(names[j], names[j+1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
    
    // display the sorted names
    printf("Sorted names:\n");
    for (i = 0; i < num; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}
