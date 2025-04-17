#include<stdio.h>
int main()
{
    // declare
    int a[5];

    // declare with initialize
    int b[5] = {1,2,3,4,5};

    // if we set array length and set minimum one value , it would be all value is 0 by default
    int c[10] = {0, };

    int x;
    scanf("%d", &x);

    // already show error, we can't define array with depends on user's value for initialization.
    // int d[x] = {0,};

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
    
    return 0;
}