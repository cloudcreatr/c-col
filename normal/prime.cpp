#include <stdio.h>

bool primeCheck(int a);

int main()
{
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        if (primeCheck(i))
        {
            printf("%d\n", i);
        }
    }
}

bool primeCheck(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}




























