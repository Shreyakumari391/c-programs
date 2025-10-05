#include <stdio.h>

int main() {
    int n, i;
    float marks, total = 0, percentage;
    char grade;

    // Input number of subjects
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // Input marks for each subject
    for (i = 1; i <= n; i++) {
        printf("Enter marks for subject %d: ", i);
        scanf("%f", &marks);
        total += marks;
    }

    // Calculate percentage
    percentage = total / n;

    // Determine grade
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    // Output result
    printf("\nTotal Marks: %.2f", total);
    printf("\nPercentage : %.2f%%", percentage);
    printf("\nGrade      : %c\n", grade);

    return 0;
}