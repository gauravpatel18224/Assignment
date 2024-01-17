#include <stdio.h>
#include <ctype.h>


int isVowel(char ch) {
    ch = toupper(ch); 
    return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            if (isVowel(str[i])) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

  
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
