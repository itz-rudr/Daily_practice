//Program to find pairs with a given sum using Counting/Hashing Method
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,sum,max=0,complement;
	//This will input size of array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing array
	int a[n];
	//This will input the elements of array and change the value of max
	printf("Enter %d elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	//This will input the given sum
	printf("Enter the sum value:\n");
	scanf("%d",&sum);
	//This code block will check for pairs for given sum
	//Initializing hash array
	int hash[max+1];
	for(int i=0;i<n;i++){
		hash[i]=0;
	}
	//This will print pairs of elements of given sum
	printf("Pairs with sum %d are:\n",sum);
	for(int i=0;i<n;i++){
		complement=sum-a[i];
		if(complement>=0&&hash[complement]>0){
			printf("(%d,%d)\n",a[i],complement);
		}
		hash[a[i]]++;
	}
}