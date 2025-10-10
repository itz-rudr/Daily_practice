//Program to reverse an array loop logic
#include<stdio.h>
int main(){
	int a[5];
	printf("Enter the elements of array:\n");
	//This will input elements in array
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	//This block will reverse the array
	printf("Reverse of array is:\n");
	for(int i=4;i>=0;i--){
	printf("%d ",a[i]);	
	}
}