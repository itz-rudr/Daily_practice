//Program to print all permutations of string using swap-based

#include<stdio.h>
int main(){
	int n;
	printf("Enter size:\n");
	scanf("%d",&n);
	char str[n+1],temp;
	printf("Enter string:\n");
	scanf("%s",str);
	printf("permutations are:\n");
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			for(int k=0;k<n;k++){
				printf("%c",str[k]);
			}
		printf("\n");
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		}
	}
	return 0;
}