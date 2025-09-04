#include<stdio.h>
int fibonacci(int n){
if(n==0)
	return 0;
else if(n==1)
return 1;
else
{
int n =	fibonacci(n-1) + fibonacci(n-2);
}
return n;	
}
int main(){
	int n;
	printf("Enter n");
	scanf("%d",&n);
	int series = fibonacci(n);
	return series;
}
