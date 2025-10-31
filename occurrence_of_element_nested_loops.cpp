//Count the numbers of occurrences of an element using nested loops (for all elements)
#include<stdio.h>
int main(){
	//Initializing identifier
	int n;
	//This will input the size of array
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	//Initializing array
	int a[n];
	//This will input the elements of array
	printf("Enter the %d elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//This will count the occurrence of each elements
	printf("Element : Count\n");
	for(int i=0;i<n;i++){
		int count=1;
		int already_counted=0;
		//This will help skip the duplicate numbers
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				already_counted=1;
				break;
			}
		}
		if(already_counted){
			continue;
		}
		//This will count the ouccurrence of elements
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count++;
			}
		}
		//This will print occurrence of each element
		printf("%d : %d\n",a[i],count);
	}
}
