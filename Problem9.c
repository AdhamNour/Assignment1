#include <stdio.h>
int main(int argc, char const *argv[])
{
    int grade = 0;
    scanf("%d", &grade);
    if (grade < 50)
        printf("Fail");
    else if (grade >= 50 && grade < 65)
        printf("Pass");
    else if (grade >= 65 && grade < 75)
        printf("Good");
    else if (grade >= 75 && grade < 85)
        printf("Very Good");
    else if (grade >= 85 && grade <= 100)
        printf("Excellent");
    else
        printf("Not Supported");
    return 0;
}
