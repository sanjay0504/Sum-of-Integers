#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    int sum = a + b;

    printf("%d + %d = %d", a,b,sum);

    return 0;
}
