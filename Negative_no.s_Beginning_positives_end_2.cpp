////Program to move all negative numbers to beginning and positive to end using an extra array.
#include<stdio.h>
int main(){
	//Initializing identifier
	int n;
	//This will tell the size of array
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	//Initializing arrays
	int a[n],b[n];
	printf("Enter the elements of array:\n");
	//This will input elements in array
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This will help in moving the negative elements to beginning
	int index=0;
	//This will copy negatives
	for(int i=0;i<n;i++){
		if(a[i]<0){
			b[index++]=a[i];
		}
	}
	//This will copy positives
	for(int i=0;i<n;i++){
		if(a[i]>=0){
			b[index++]=a[i];
		}
	}
	//This will print the sorted array
	printf("Array after moving negatives to beginning:\n");
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}