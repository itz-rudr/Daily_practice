//Program to find Maximum Subarray Sum using Kadane's Algorithm
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,currentSum,maxSum;
	//Using this we will enter the size of array
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	//initialzing array
	int a[n];
	//using this we will enter the elements of array
	printf("Enter the %d elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//Declaring maxsum and currentsum
	maxSum=a[0];
	currentSum=0;
	//Using this code block we will identify the maximum subarray sum
	for(int i=0;i<n;i++){
	currentSum+=a[i];
		if(currentSum>maxSum){
			maxSum=currentSum;
		}
		if(currentSum<0){
		currentSum=0;
		}	
	}
	//This will print the Maximun subarray sum
	printf("Maximum subarray sum = %d",maxSum);
}