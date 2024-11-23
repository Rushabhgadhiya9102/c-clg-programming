// write a program to generate and print the first 15 terms of the fibonacci series using a simple for loop.

#include <stdio.h>

int main(){
	
	int num, result, i;
	int first=0;
	int second=1;
	
	printf("enter the number: ");
	scanf("%d",&num);
	
	printf("%d %d ",first,second);
	
	for(i=1; i<=num; i++){
		
		result= first+second;
		printf("%d ",result);
		first=second;
		second=result;
	}
}