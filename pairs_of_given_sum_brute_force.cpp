//Program to find pairs with a given sum using Brute force
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,sum,i,j;
	//This will input size of array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing array
	int a[n];
	//This will input the elements of array
	printf("Enter %d elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This will input the given sum
	printf("Enter the sum value:\n");
	scanf("%d",&sum);
	//This code block will check for pairs for given sum
	printf("Pairs with sum %d are:\n",sum);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==sum){
				printf("(%d,%d)\n",a[i],a[j]);
			}
		}
	}
}