	#include<stdio.h>
	int main(){
	int a[100],n,i,sum = 0;
	printf("enter the no of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the elements are :\n");
	for(i=0;i<n;i++)
	printf("%d \n",a[i]);
	for(i=0;i<n;i++){
	 sum+=a[i];	
	}
	printf("the sum of elements : %d",sum);
}
