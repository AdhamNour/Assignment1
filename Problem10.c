#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x = 0, y = 0;
    char sign;
    printf("Enter X:");
    scanf("%d", &x);
    printf("Enter sign:");
    scanf("%c", &sign);
    scanf("%c", &sign);
    if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
    {
        printf("Invalid sign");
        return 0;
    }
    printf("Enter Y:");
    scanf("%d", &y);
    switch (sign)
    {
    case '+':
        printf("%d", x + y);
        break;
    case '-':
        printf("%d", x - y);
        break;
    case '*':
        printf("%d", x * y);
        break;
    case '/':
        printf("%f", (float)x / y);
        break;

    default:
        break;
    }
    return 0;
}
