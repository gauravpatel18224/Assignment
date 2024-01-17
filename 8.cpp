#include <stdio.h>

int main() {
    float height;

    
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);


    if (height < 150) {
        printf("The person is Short.\n");
    } else if (height >= 150 && height < 175) {
        printf("The person is Average Height.\n");
    } else {
        printf("The person is Tall.\n");
    }

    return 0;
}
