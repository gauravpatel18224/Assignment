#include <stdio.h>

int main() {
    char str[100];

 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    printf("Individual characters from the string:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
