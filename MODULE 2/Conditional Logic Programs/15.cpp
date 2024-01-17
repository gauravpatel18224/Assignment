#include <stdio.h>

int main() {
    int mathMarks, phyMarks, chemMarks;
    int totalMarks, totalMathsPhysics;

    // Input marks obtained in Physics
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &phyMarks);

    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemMarks);

    
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &mathMarks);

    totalMarks = mathMarks + phyMarks + chemMarks;

    totalMathsPhysics = mathMarks + phyMarks;

    if ((mathMarks >= 65 && phyMarks >= 55 && chemMarks >= 50 && totalMarks >= 190) ||
        (totalMathsPhysics >= 140)) {
        printf("The candidate is eligible for admission.\n");
    } else {
        printf("The candidate is not eligible for admission.\n");
    }

    return 0;
}
