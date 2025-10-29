//Program to find Leaders in an array using Reverse Traversal
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,max_from_right;
	//This will input the size of a array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing array
	int a[n];
	//This will input the elements of array
	printf("Enter the %d elements of array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This code block will check for leaders in an array
	/*Leardes --> An element is called a leader if it is greater than or equal
	to all the elements to its right.*/
	printf("Leaders in array:\n");
	max_from_right=a[n-1];
	printf("%d ",max_from_right);
	for(int i=n-2;i>=0;i--){
		if(a[i]>=max_from_right){
			max_from_right=a[i];
			printf("%d ",a[i]);
		}
	}
}