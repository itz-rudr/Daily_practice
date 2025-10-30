//Program to rearrange array in alternating positive & negative items using Index checks
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,p,q,i,j,k;
	//This will input the size of array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing arrays
	int a[n],pos[n],neg[n],result[n];
	//This will input the elements of array
	printf("Enter the %d elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//Declaring indexes
	p=0,q=0;
	//This code block will separate the negatives & positives
	for(int i=0;i<n;i++){
		if(a[i]>=0){
			pos[p++]=a[i];
		}else{
			neg[q++]=a[i];
		}
	}
	//Declaring indexes to fill array
	i=0,j=0,k=0;
	//This will fill the array in alternating order
	while(i<p&&j<q){
		result[k++]=pos[i++];
		result[k++]=neg[j++];
	}
	//This will help fill array if some positives are left
	while(i<p){
		result[k++]=pos[i++];
	}
	//This will help fill array if some negatives are left 
	while(j<q){
		result[k++]=neg[j++];
	}
	//This will print the rearranged array
	printf("Rearranged array:\n");
	for(int x=0;x<n;x++){
		printf("%d ",result[x]);
	}
}