#include<stdio.h>
int top=-1,stack[100],n;
int isfull(){
	if(top==n-1)
	return 1;
	else
	return 0;
};
int isempty(){
	if(top==-1)
	return 1;
	else
	return 0;
};
void push(){
	if(isfull()==1)
	printf("overflow\n");
	else{
		printf("enter the number :\n");
		top++;
		scanf("%d",&stack[top]);
	}
};
void pop(){
	if(isempty()==1)
	printf("underflow the stack is empty\n");
	else{
		printf("%d",stack[top]);
		top--;
	}
};
void peek(){
	if(isempty()==1)
	printf("underflow the stack is empty\n");
	else
		printf("%d\n",stack[top]);
};
void size(){
	printf("%d",top+1);
}
int main(){
	int i=0;
	printf("enter the number of elements in the stack :");
	scanf("%d",&n);
	printf("Chose one from the below options\n");  
    printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit");
	while(i!=4){  
        printf("\n Enter your option \n");
        scanf("%d",&i);
       switch(i)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                peek();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid option\n");  
            }   
        }
   }
    return 0;
}
