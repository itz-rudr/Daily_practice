//Program to find union and intersection of two arrays
#include<stdio.h>
int main(){
	//Initializing identifier for size of arrays
	int n1,n2;
	//This will input the size of arrays
	printf("Enter the size of two arrays:\n");
	scanf("%d%d",&n1,&n2);
	//Initializing arrays
	int a[n1],b[n2];
	//This will input the elements in array 1
	printf("Enter the elements of 1st array:\n");
	for(int i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	//This will input the elements in array 2
	printf("Enter the elements of 2nd array:\n");
	for(int i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	//Initializing arrays for Union & Intersection
	int unionArr[n1*n2],intersectionArr[n1*n2];
	//Initializing identifiers for pointers
	int uIndex=0,iIndex=0;
	int flag,j;
	//This will add elements of 1st array in Union array
	for(int i=0;i<n1;i++){
		unionArr[uIndex++]=a[i];
	}
	//This will check elements for Union and Intersection
	for(int i=0;i<n2;i++){
		flag=0;
		//This will check if elements of 2nd array are in Union or not
		for(j=0;j<n1;j++){
			if(b[i]==a[j]){
				flag=1;
				//This will fill Intersection array
				intersectionArr[iIndex++]=b[i];
				break;
			}
		}
		if(flag==0){
			//This will fill union array
			unionArr[uIndex++]=b[i];
		}
	}
	//This will print Union of array
	printf("Union of arrays:\n");
	for(int i=0;i<uIndex;i++){
		printf("%d ",unionArr[i]);
	}
	//This will print Intersection of array
	printf("\nIntersection of arrays:\n");
	for(int i=0;i<iIndex;i++){
		printf("%d ",intersectionArr[i]);
	}
}
