#include <stdio.h>
int swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}

int main()
{
    int a,b,*p,*q ;
    p=&a;
    q=&b;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    swap(p,q);
    printf(" tne swapped values : %d %d",a,b);

    return 0;
}

