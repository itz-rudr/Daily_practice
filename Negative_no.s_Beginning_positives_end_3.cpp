//Program to move all negative numbers to beginning and positive to end using Sort-based algorithm.
#include<stdio.h>
int main(){
	//Initializing identifier
	int n,temp;
	//This will tell the size of array
	printf("Enter the number of elements in array:\n");
	scanf("%d",&n);
	//Initializing array
	int a[n];
	printf("Enter the elements of array:\n");
	//This will input elements in array
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This will help in moving the negative elements to beginning
	//Using Bubble sort
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			//This will swap the values
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//This will print the sorted array
	printf("Array after moving negatives to beginning:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}