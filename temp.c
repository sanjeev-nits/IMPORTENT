#include<stdio.h>
int sum_array(int*,int);

void main()
{
    int a[100],i,n;
    printf("Entre the value of n:");
    scanf("%d",&n);

    printf("entre your array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int *ptr=a;
    int sum;

    sum=sum_array(ptr,n);
    printf("\n The value of sum is =%d",sum);
}
int sum_array(int *ptr,int n)
{
    int sum=0,i;
    for(i=0;i<n;i++){
    sum+=*ptr;
    ptr++;
    }

return sum;


}