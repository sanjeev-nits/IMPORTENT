#include<stdio.h>
int swap(int *,int *);

void main()
{
int a=4,b=5;

printf("before swap a=%d and b=%d",a,b);
swap(&a,&b);

printf("\nafter swap a=%d and b=%d",a,b);


}

int swap(int *a,int *b){
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;

}