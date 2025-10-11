//To find the 'Kth' max and min element of array
#include<stdio.h>
int main(){
	int a[5],k;
	int n=5;
	printf("Enter the elements of array:\n");
	//This will input elements in array
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	//This will tell which max and min term is required
	printf("Enter the kth term:\n");
	scanf("%d",&k);
	//This will sort the array using bubble sort
	for(int i=0;i<5;i++){
		int temp=0;
		for(int j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted array:\n");
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	//This will print the max and min element of array
	printf("\n%dth maximum number is %d",k,a[n-k]);
	printf("\n%dth minimum number is %d",k,a[k-1]);
}