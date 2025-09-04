#include<stdio.h>
#include<stdlib.h>
int main(){
	int* ptr;
	int n,i;
	printf("Enter no. of ele");
	scanf("%d",&n);
	printf("Enter the no. of ele:%d",n);
	ptr = (int*)malloc(n*sizeof(int));
	if (ptr == NULL){
		printf("Memory not allocated");
	}
	else{
	printf("Memory allocated");
}
for(i=0;i<n;i++){
	scanf("%d",ptr+i);
}
for(i=0;i<n;i++){
	printf("%d",ptr[i]);
}
}

