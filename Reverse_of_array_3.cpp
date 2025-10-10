//Program to reverse an array using extra array
#include<stdio.h>
int main(){
	int a[5],rev[5];
	int n=5;
	printf("Enter the elements of array:\n");
	//This will input elements in array
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	//This block will reverse the array
	for(int i=0;i<n;i++){
	//This will input value of elements in another array the values
		rev[i]=a[n-i-1];
	}
	printf("Reverse of array is:\n");
	//This will print the reversed array
	for(int i=0;i<5;i++){
		printf("%d ",rev[i]);
	}
}