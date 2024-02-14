#include<stdio.h>
int main(){
	int n,i,a[100],s,low,high,middle;
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
	low=0;
	high=n-1;
	middle=(low+high)/2;
	while(low<=high){
		if(a[middle]==s){
			printf("element %d is found in place %d",s,middle+1);
			break;
		}
		if(a[middle]<s){
			low=middle+1;
			middle=(low+high)/2;
		}
		if(a[middle]>s){
			high=middle-1;
			middle=(low+high)/2;
		}
	}
	if(low>high){
		printf("the element is not found");
	}
	return 0;
}
