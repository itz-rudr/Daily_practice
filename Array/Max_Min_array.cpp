//To find the maximum and minimum element in an array
#include<stdio.h>
int main(){
	int a[5];
	printf("Enter the elements of array: \n");
	//this will input elements in array.
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	//this block will give the maximum element from the user-defined array.
	int max=a[0];
	for(int i=0;i<5;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Maximum element of array is: %d\n",max);
	//this block will give minimum element from the user-defined array.
	int min=a[0];
	for(int i=0;i<5;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("Minimum element of array is: %d",min);
}