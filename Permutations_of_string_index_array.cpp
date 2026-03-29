//Program to print all permutations of a string using index-array

#include<stdio.h>
int main(){
	int n;
	printf("Enter size of string:\n");
	scanf("%d",&n);
	char str[n+1];
	printf("Enter String:\n");
	scanf("%s",str);
	int idx[n];
	printf("Permutations are:\n");
	for(int i=0;i<n;i++){
		idx[i]=i;
	}
		while(1){
			for(int i=0;i<n;i++){
				printf("%c",str[idx[i]]);
			}
			printf("\n");
		int i=n-2;
		while(i>=0&&idx[i]>idx[i+1]){
			i--;
		}
		if(i<0){
			break;
		}
		int j=n-1;
		while(idx[j]<idx[i]){
			j--;
		}
		int temp=idx[i];
		idx[i]=idx[j];
		idx[j]=temp;
		int left =i+1,right=n-1;
		while(left<right){
			temp=idx[left];
			idx[left]=idx[right];
			idx[right]=temp;
			left++;
			right--;
		}
	}
	return 0;
}