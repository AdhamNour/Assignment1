#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);
    char snum[5];
    sprintf(&snum, "%d", num);
    printf("%d", strlen(snum));
    
    return 0;
}
