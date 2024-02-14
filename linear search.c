#include<stdio.h>
int main(){
	int n,i,a[100],s;
	printf("enter the number of elements : ");
	scanf("%d",&n);
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the elements are :\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	printf("enter the number to search : ");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(a[i]==s){
		printf("the number %d is found at place : %d",s,i+1);
		break;
	   }
    }
    if(i==n){
    	printf("the element is not found");
	}
	return 0;
}
