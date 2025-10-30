//Program to rearrange array in alternating positive & negative items using inplace rearrangement
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,i,temp,pos,neg;
	//This will input the size of array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing arrays
	int a[n];
	//This will input the elements of array
	printf("Enter the %d elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This code block will separate the negatives & positives
	i=-1;
	for(int j=0;j<n;j++){
		if(a[j]<0){
			i++;
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	//This will rearrange the elements in alternate pattern
	pos=i+1;
	neg=0;
	while(pos<n&&neg<pos&&a[neg]<0){
		temp=a[neg];
		a[neg]=a[pos];
		a[pos]=temp;
		pos++;
		neg+=2;
	}
	//This will print the output
	printf("Rearranged array:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}