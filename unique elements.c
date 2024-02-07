#include<stdio.h>
int main() {
	int a[100],n,i,j,k=0;
	printf("enter the no of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the unique elements are : \n");
	for(i=0;i<n;i++){
	    k=0;
		for(j=0;j<n;j++){
		    if(i!=j){
			if(a[i]==a[j]){
			k++;
			break;
		}
        }
		}
	   if(k==0)
		printf("%d ",a[i]);	
    }
	return 0;
}
