#include <stdio.h>

int main() {
    int a[100],i,n,sum=0;
    int *p;
    p=a;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     for(i=0;i<n;i++){
         sum=sum+*p;
         *p++;
     }
     printf("the sum of all elements is %d",sum);
    return 0;
}
