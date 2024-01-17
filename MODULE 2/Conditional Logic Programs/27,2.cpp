#include <stdio.h>

int main() {
    char character;
    char tolower;

   
    printf("Enter a character: ");
    scanf(" %c", &character);

    char lowercaseChar = tolower(character);

    switch (lowercaseChar) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", character);
            break;
        default:
            printf("%c is a consonant.\n", character);
    }

    return 0;
}
