#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char *str) {
    int length = strlen(str);
    for ( i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

void concatenateStrings(char *str1, char *str2) {
    strcat(str1, str2);
}

int isPalindrome(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

void copyString(char *source, char *destination) {
    strcpy(destination, source);
}

int stringLength(char *str) {
    return strlen(str);
}

int countCharacterFrequency(char *str, char ch) {
    int count = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

void countVowelsAndConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
    }
}

void countDigitsAndSpaces(char *str, int *digits, int *spaces) {
    *digits = 0;
    *spaces = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (isdigit(str[i])) {
            (*digits)++;
        } else if (isspace(str[i])) {
            (*spaces)++;
        }
    }
}

int main() {
    char input[100];
    int choice, result, vowels, consonants, digits, spaces;
    char ch;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline character

    printf("Choose an operation:\n");
    printf("1. Reverse a string\n");
    printf("2. Concatenate strings\n");
    printf("3. Check if palindrome\n");
    printf("4. Copy a string\n");
    printf("5. Length of the string\n");
    printf("6. Frequency of character in string\n");
    printf("7. Count number of vowels and consonants\n");
    printf("8. Count number of digits and blank spaces\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            reverseString(input);
            printf("Reversed string: %s\n", input);
            break;
        case 2:
            printf("Enter another string to concatenate: ");
            char secondString[100];
            scanf(" %[^\n]", secondString);
            concatenateStrings(input, secondString);
            printf("Concatenated string: %s\n", input);
            break;
        case 3:
            result = isPalindrome(input);
            if (result)
                printf("The string is a palindrome.\n");
            else
                printf("The string is not a palindrome.\n");
            break;
        case 4:
            copyString(input, secondString);
            printf("Copied string: %s\n", secondString);
            break;
        case 5:
            printf("Length of the string: %d\n", stringLength(input));
            break;
        case 6:
            printf("Enter a character to find its frequency: ");
            scanf(" %c", &ch);
            printf("Frequency of %c: %d\n", ch, countCharacterFrequency(input, ch));
            break;
        case 7:
            countVowelsAndConsonants(input, &vowels, &consonants);
            printf("Number of vowels: %d\n", vowels);
            printf("Number of consonants: %d\n", consonants);
            break;
        case 8:
            countDigitsAndSpaces(input, &digits, &spaces);
            printf("Number of digits: %d\n", digits);
            printf("Number of blank spaces: %d\n", spaces);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
