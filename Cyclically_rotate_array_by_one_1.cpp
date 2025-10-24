//Cyclically rotate array by one using temporary variable
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
	//Using temporary variable to store the last element
	temp=a[n-1];
	//using this code block to shift the elements of array
	for(int i=n;i>0;i--){
		a[i]=a[i-1];
	}
	/*Using this we will fill the first element 
	cyclically rotating the array*/
	a[0]=temp;
	//Using this we will print the new array
	printf("Array after cyclic rotation:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}