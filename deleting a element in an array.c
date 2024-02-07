#include<stdio.h>
int main(){
	int a[100],i,j,n,t;
	printf("enter the number of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the elements are :");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	printf("enter the place :");
	scanf("%d",&j);
			for(i=j-1;i<n;i++){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	printf("elements after deletion :");
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	return 0;
}
