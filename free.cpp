#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	int *ptr1;
	int *ptr;
	n = 5;
	ptr = (int*)malloc(n*sizeof(int));
	ptr1 = (int*)calloc(n,sizeof(int));
	if(ptr==NULL || ptr1==NULL){
		printf("not allocated\n");
		exit(0);
	}
	else{
		printf("Memory allocated %p\n"),ptr;
		free(ptr);
		printf("freed\n");
		printf("memory allocated %p\n",ptr1);
		free(ptr1);
		printf("freed\n ");
		
	}
	
	
	
}
