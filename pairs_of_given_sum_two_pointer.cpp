//Program to find pairs with a given sum using Two pointer method
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,sum,i,j,temp;
	//This will input size of array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing array
	int a[n];
	//This will input the elements of array
	printf("Enter %d elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This will input the given sum
	printf("Enter the sum value:\n");
	scanf("%d",&sum);
	//This will sort the array using bubble sort
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//This code block will use the two pointer logic to check for pairs for given sum
	i=0;
	j=n-1;
	//This will print pairs of elements for given sum
	printf("Pairs with sum %d are:\n",sum);
	while(i<j){
		if(a[i]+a[j]==sum){
			printf("(%d,%d)\n",a[i],a[j]);
			i++;
			j--;
		}else if(a[i]+a[j]<sum){
			i++;
		}else{
			j--;
		}
	}
}