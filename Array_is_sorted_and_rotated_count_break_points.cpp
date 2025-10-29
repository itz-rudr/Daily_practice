//Program to check whether a array is sorted and rotated using count break points
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,count;
	//This will input the size of array
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	//Initializing array
	int a[n];
	//This will input the elements of array
	printf("Enter the %d elements of array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This will sort the array and count its break points
	//declaring count
	count=0;
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			count++;
		}
	}
	//This will print output by checking the value of count
	if(count==1){
		printf("Array is sorted and rotated.");
	}else{
		printf("Array is not sorted and rotated");
	}
}