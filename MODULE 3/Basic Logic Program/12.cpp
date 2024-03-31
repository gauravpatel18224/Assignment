//12.Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?
#include <stdio.h>

int main() {

    int numStudents;
    int applesPerStudent = 5;
    int totalApples;

	   
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

        totalApples = numStudents * applesPerStudent;

    
    printf("Total apples required: %d\n", totalApples);

    return 0;
}
