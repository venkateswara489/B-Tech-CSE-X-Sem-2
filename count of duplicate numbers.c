#include<stdio.h>
int main() {
	int a[100],n,i,j,k=0;
	printf("enter the no of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
			k++;
			break;
		}
		}
		
    }
	printf("the count of number of duplicate numbers are : %d",k);  
	return 0;
}
