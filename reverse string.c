#include <stdio.h>
#include<string.h>
int reverse  (char *str){
    char *start=str;
    char *end=str+strlen(str)-1;
    while(start<end){
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    return 0;
}

int main()
{
    char str[100];
    printf("enter a string :");
    scanf("%s",str);
    reverse(str);
    printf("the reversed string is : %s",str);

    return 0;
}
