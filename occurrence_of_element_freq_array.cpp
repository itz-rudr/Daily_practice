//Count the numbers of occurrences of an element using frequency array
#include<stdio.h>
int main(){
	//Initializing identifiers
	int n,find;
	//This will input the size of array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing arrays
	int a[n];
	int freq[101]={0};// assuming range <= 100
	//This will input the elements of array
	printf("Enter the %d elements of array(range 0-100):\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This will tell we have to find occurrence of which number
	printf("Enter the element of which occurrence we need to find:\n");
	scanf("%d",&find);
	//This will find the occurrence of find identifier
	for(int i=0;i<n;i++){
		freq[a[i]]++;
	}
	//This will print the output
	printf("%d occurs %d times",find,freq[find]);
}
