//Program to find Leaders in an array using temporary array
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,index,max_from_right;
	//This will input the size of a array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing arrays
	int a[n],leaders[n];
	//This will input the elements of array
	printf("Enter the %d elements of array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//Declaring index
	index=0;
	//Declaring max from right
	max_from_right=a[n-1];
	//This code block will check for leaders in an array
	/*Leardes --> An element is called a leader if it is greater than or equal
	to all the elements to its right.*/
	leaders[index++]=max_from_right;
	for(int i=n-2;i>=0;i--){
		if(a[i]>=max_from_right){
			max_from_right=a[i];
			leaders[index++]=a[i];
		}
	}
	//This will print leaders of a array
	printf("Leaders in array:\n");
	for(int i=index-1;i>=0;i--){
		printf("%d ",leaders[i]);
	}
}