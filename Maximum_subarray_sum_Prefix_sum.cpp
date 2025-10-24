//Program to find Maximum Subarray Sum using Prefix sum
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
	//Initializing and declaring prefix array for optimized approach
	int prefix[n];
	prefix[0]=a[0];
	//Using this we will fill the prefix array
	for(int i=1;i<n;i++){
		prefix[i]=prefix[i-1]+a[i];
	}
	//Declaring maxsum of array
	maxSum=a[0];
	//Using this code block we will identify the maximum subarray sum
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			//Declaring currentsum
			currentSum=0;
			//This will have more optimized approach
			if(i==0){
				currentSum=prefix[j];
			}else{
				currentSum=prefix[j]-prefix[i-1];
			}if(currentSum>maxSum){
				maxSum=currentSum;
			}
		}
	}
	//This will print the Maximun subarray sum
	printf("Maximum subarray sum = %d",maxSum);
}