//15.Convert school’s name in abbreviated form
#include <stdio.h>
#include <ctype.h> // For toupper function

int main() {
    
    char schoolName[100]; 
    char abbreviation[10];

    
    printf("Enter the school's name: ");
    fgets(schoolName, sizeof(schoolName), stdin);

    
    int i, j = 0;
    for (i = 0; schoolName[i] != '\0'; i++) {
        if (i == 0 || (isspace(schoolName[i - 1]) && isalpha(schoolName[i]))) {
            abbreviation[j++] = toupper(schoolName[i]);
        }
    }
    abbreviation[j] = '\0'; 
  
    printf("Abbreviated form: %s\n", abbreviation);

    return 0;
}
