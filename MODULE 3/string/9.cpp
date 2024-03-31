#include <stdio.h>


int findMaxLength(char str[]) {
    int maxLength = 0, currentLength = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            
            currentLength++;
        } else {
            
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
           
            currentLength = 0;
        }
    }

  
    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    return maxLength;
}

int main() {
    char str[100];

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int maxLength = findMaxLength(str);

  
    printf("Maximum number of characters in a word: %d\n", maxLength);

    return 0;
}
