//Program to print all permutations of a string using brute force
#include<stdio.h>
int main(){
	//Initializing identifier
	int n;
	printf("Enter the size of string:\n");
	scanf("%d",&n);
	//Initializing string
	char str[n];
	//This will input the characters of string
	printf("Enter a string:\n");
	scanf("%s",str);
	//This code will print all the permutations of string
	printf("Permutations are:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//This will check for repetition of character
			if(j==i){
				continue;
			}
			for(int k=0;k<n;k++){
				//This will check for repetition of character
				if(k==i||k==j){
					continue;
				}
				//This will print the output
				printf("%c%c%c\n",str[i],str[j],str[k]);
			}
		}
	}
}