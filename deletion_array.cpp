
#include<stdio.h>
int main(){
	int i;
	int n;
	int arr[20];
	int pos;
	printf("enter n");
	scanf("%d",&n);
	printf("enter ele in array");
	for(i = 0; i < n; i++)
	scanf("%d",&arr[i]);
	for(i = 0;i < n;i++)
	printf("%d\t",arr[i]);
	printf("enter pos");
	scanf("%d",&pos);
	for(i = pos-1; i < n;i++)
		arr[i]=arr[i+1];
	n=n-1;
	printf("array after deleting an elemnt an ele\n");
for(i = 0; i<n ; i++)
printf("%d\t",arr[i]);
return 0;	
}
