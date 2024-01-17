#include <stdio.h>

int main() {
    char str[100];
    int i;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    printf("Individual characters in reverse order:\n");
    for (int i = 0; str[i] != '\0'; i++) {
       
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c\n", str[j]);
    }

    return 0;
}
