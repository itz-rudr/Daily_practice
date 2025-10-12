//Program to Sort an array of 0s,1s and 2s(Dutch National Flag) using Counting Method(Brute Force)
#include<stdio.h>
int main(){
	//Initializing identifiers.
	int n,count0,count1,count2,index;
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
	//This will initialize the counters.
	count0=0,count1=0,count2=0;
	//This block will count the no.s of 0s,1s and 2s.
	for(int i=0;i<n;i++){
		if(a[i]==0){
			count0++;
		}else if(a[i]==1){
			count1++;
		}else{
			count2++;
		}
	}
	//This will solve/overwrite the array in order of 0 then 1 and then 2
	index=0;
	for(int i=0;i<count0;i++){
		a[index++]=0;
	}
	for(int i=0;i<count1;i++){
		a[index++]=1;
	}
	for(int i=0;i<count2;i++){
		a[index++]=2;
	}
	//This will print the sorted array
	printf("Sorted array:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

