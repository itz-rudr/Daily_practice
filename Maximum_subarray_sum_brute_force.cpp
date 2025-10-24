//Program to find Maximum Subarray Sum using brute force
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
	//Declaring maxsum of array
	maxSum=a[0];
	//Using this code block we will identify the maximum subarray sum
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			//Declaring currentsum
			currentSum=0;
			for(int k=i;k<=j;k++){
				currentSum+=a[k];
			}
			//This will change the value of maxsum
			if(currentSum>maxSum){
				maxSum=currentSum;
			}
		}
	}
	//This will print the Maximun subarray sum
	printf("Maximum subarray sum = %d",maxSum);
}