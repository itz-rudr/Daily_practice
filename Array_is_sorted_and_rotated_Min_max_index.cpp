//Program to check whether a array is sorted and rotated using Min/Max position logic
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,minIndex,flag;
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
	//This will find the minimum element of array
	minIndex=0;
	for(int i=0;i<n;i++){
		if(a[i]<a[minIndex]){
			minIndex=i;
		}
	}
	//Declaring flag
	flag=1;
	//This will check whether the elements before minIndex are sorted or not
	if(minIndex>0){
		for(int i=0;i<minIndex-1;i++){
			if(a[i]>a[i+1]){
				flag=0;
				break;
			}
		}
	}
	//This will check whether the elements after minIndex are sorted or not
	for(int i=minIndex;i<n-1;i++){
		if(a[i]>a[i+1]){
			flag=0;
			break;
		}
	}
	if(a[n-1]>a[0]){
		flag=0;
	}
	//this will print the output
	if(flag){
		printf("Array is sorted and rotated.");
	}else{
		printf("Array is not sorted and rotated.");
	}
}