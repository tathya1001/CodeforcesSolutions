#include<stdio.h>

int main()
{ 
    int a,b;
    scanf("%d %d", &a, &b);
    int prime=0;
    for (int j = a+1; j < b+1 ; j++)
    {
        int factors=0;
        for (int i = 2; i < j; i++)
        {
            if(j%i==0)
            {
                factors++;
            }
        }
        if (factors==0)
        {
            prime++;
        }
    }
    int fac=0;
    for (int i = 2; i < b; i++)
    {
        if(b%i==0)
        {
            fac++;
        }
    }
    if (fac==0)
    {
        if (prime==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}