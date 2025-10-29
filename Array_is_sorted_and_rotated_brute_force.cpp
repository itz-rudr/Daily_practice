//Program to check if array is sorted and rotated using brute force
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,isRotated,match,temp;
	//This will input the size of array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing arrays 
	int a[n],sorted[n];
	//This will input the elements of array
	printf("Enter the %d elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sorted[i]=a[i];
	}
	//This will sort the array using bubble sort
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(sorted[j]>sorted[j+1]){
				temp=sorted[j];
				sorted[j]=sorted[j+1];
				sorted[j+1]=temp;
			}
		}
	}
	//This will check whether the array is rotated or not 
	isRotated=0;
	for(int r=1;r<n;r++){
		match=1;
		for(int i=0;i<n;i++){
			if(a[i]!=sorted[(i+r)%n]){
				match=0;
				break;
			}
		}
		if(match){
			isRotated=1;
			break;
		}
	}
	if(isRotated){
		printf("Array is sorted and rotated.\n");
	}else{
		printf("Array is not sorted and rotated.");
	}
}