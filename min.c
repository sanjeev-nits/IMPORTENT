#include<stdio.h>
int minimam(int*,int);

void main()
{
    int a[5]={15,7,9,6,8},n=5;

    int *ptr=a;

    int m=minimam(ptr,n);

    printf("The minimam value is  %d",m);
}

int minimam(int *ptr,int n)
{
    int min=*ptr;
    for(int i=1;i<n;i++)
    {
        if(*(ptr+i)<min)
        min=*(ptr+i);

    }
    return min;
}