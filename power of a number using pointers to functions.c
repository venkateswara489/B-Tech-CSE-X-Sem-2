#include <stdio.h>
int power(int a, int b){
    int i,result=1;
    for(i=0;i<b;i++){
        result*=a;
    }
    return result;
}

int main()
{
    int a,b;
    printf("enter base and exponent :");
    scanf(" %d%d",&a,&b);
    int(*ptr)(int, int)=power;
    printf("result=%d",ptr(a,b));

    return 0;
}

