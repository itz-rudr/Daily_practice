//Cyclically rotate array by one using reversal logic 
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,temp;
	//Using this will enter the size of array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing array
	int a[n];
	//Using this will input elements of array
	printf("Enter the %d elements of array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//Using this we will first reverse the entire array
	for(int i=0,j=n-1;i<j;i++,j--){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	//Using this we will reverse the reamining part of array(from index 1 to n-1)
	for(int i=1,j=n-1;i<j;i++,j--){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	//Using this we will print the new array
	printf("Array after cyclic rotation:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}