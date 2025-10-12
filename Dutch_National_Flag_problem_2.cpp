//Program to Sort an array of 0s,1s and 2s(Dutch National Flag) using Dutch National Flag Algorithm
#include<stdio.h>
int main(){
	//Initializing identifiers.
	int n;
	//This will tell the size of the array.
	printf("Enter the size of array: ");
	scanf("%d",&n);
	//This will input the elements of array.
	int a[n];
	printf("Enter the elements of array only 0,1 & 2:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This will check whether array is valid or not
	for(int i=0;i<n;i++){
		if(a[i]!=1 && a[i]!=2 && a[i]!=0){
			printf("Invalid Array! Only enter 0,1 & 2");
			return 0;//This will exit the program
		}
	}
	//This will initialize the identifiers
	int low=0,mid=0,high=n-1;
	int temp;
	//Dutch National Flag Algorithm
	while(mid<=high){
		if (a[mid] == 0){
            temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
        }else if (a[mid] == 1){
            mid++;
        }else{
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
	}
	//This will print the sorted array
	printf("Sorted array:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

