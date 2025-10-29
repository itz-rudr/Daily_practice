//Program to find Leaders in an array using Brute force
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,j;
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
	for(int i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				break;
			}
		}
		if(j==n){
			printf("%d ",a[i]);
		}
	}
}