#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char surname[50];
    int year;
} human;

int main() {
    human arr1[4], arr2[4];
    int i, j;
    human temp;
    
    printf("Enter data for 4:\n");
    for (i = 0; i < 4; i++) {
        printf("Person %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", arr1[i].name);
        printf("Surname: ");
        scanf("%s", arr1[i].surname);
        printf("Birth year: ");
        scanf("%d", &arr1[i].year);
    }
    
    for (i = 0; i < 4; i++) {
        strcpy(arr2[i].name, arr1[i].name);
        strcpy(arr2[i].surname, arr1[i].surname);
        arr2[i].year = arr1[i].year;
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (arr2[j].year > arr2[j + 1].year) {
                strcpy(temp.name, arr2[j].name);
                strcpy(temp.surname, arr2[j].surname);
                temp.year = arr2[j].year;
                
                strcpy(arr2[j].name, arr2[j + 1].name);
                strcpy(arr2[j].surname, arr2[j + 1].surname);
                arr2[j].year = arr2[j + 1].year;
                
                strcpy(arr2[j + 1].name, temp.name);
                strcpy(arr2[j + 1].surname, temp.surname);
                arr2[j + 1].year = temp.year;
            }
        }
    }
    
    printf("\nSorted:\n");
    for (i = 0; i < 4; i++) {
        printf("%s %s, %d\n", arr2[i].name, arr2[i].surname, arr2[i].year);
    }
    
    return 0;
}
