//16.Function to convert country name to abbreviation
#include<stdio.h>
#include <string.h>
#include <ctype.h>


// Function to convert country name to abbreviation
char* getAbbreviation(char* country) {
    if (strcmp(country, "India") == 0) {
        return "IN";
    } else if (strcmp(country, "United Kingdom") == 0) {
        return "UK";
    } else if (strcmp(country, "Canada") == 0) {
        return "CAN";
    } // Add more countries as needed
    else {
        return "Not Available";
    }
}

int main() {
    char countryName[50];

    printf("Enter the country name: ");
    fgets(countryName, sizeof(countryName), stdin);
    countryName[strcspn(countryName, "\n")] = '\0'; // Remove newline character from input

    // Convert to uppercase for case-insensitive comparison
    for (int i = 0; countryName[i]; i++) {
        countryName[i] = toupper(countryName[i]);
    }

    char* abbreviation = getAbbreviation(countryName);

    if (strcmp(abbreviation, "Not Available") == 0) {
        printf("Abbreviation not available for the given country.\n");
    } else {
        printf("The abbreviation for %s is %s.\n", countryName, abbreviation);
    }

    return 0;
}
