#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int ar[5];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum = sum+ ar[i];
    }
    printf("%d\n", sum);

    return 0;
}