//Program to move all negative numbers to beginning and positive to end using In-Place Partition.
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
	int i=0;
	for(int j=0;j<n;j++){
		//Loop to check the neagtives
		if(a[j]<0){
			//This will swap the values
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			i++;
		}
	}
	//This will print the sorted array
	printf("Array after moving negatives to beginning:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}