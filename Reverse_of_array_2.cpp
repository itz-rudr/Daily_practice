//Program to reverse an array Swap logic
#include<stdio.h>
int main(){
	int a[5],temp;
	int n=5;
	printf("Enter the elements of array:\n");
	//This will input elements in array
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	//This block will reverse the array
	for(int i=0;i<n/2;i++){
	//This will swap the values
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("Reverse of array is:\n");
	//This will print the reversed array
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}