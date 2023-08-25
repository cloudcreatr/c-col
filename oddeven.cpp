#include <stdio.h>

void evenCheck(int a);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    evenCheck(a);
}

void evenCheck(int a)
{
    if (a % 2 == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}