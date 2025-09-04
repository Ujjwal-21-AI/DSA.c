#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	int i;
int arr[20],ele,pos;
printf("Enter n");
scanf("%d",&n);
printf("enter the ele in array\n");
for (i = 0;i<n ; i++)
	scanf("%d",&arr[i]);
for (i = 0 ; i<n ; i++)
	printf("%d\t",arr[i]);
printf("enter pos");
scanf("%d",&pos);
printf("enter element");
scanf("%d",&ele);
for(i = n-1 ; i >= pos-1 ; i--)
	arr[i+1]=arr[i];

arr[pos-1] = ele;
n=n+1;
printf("array after inserting an elemnt an ale\n");
for(i = 0; i<n ; i++)
printf("%d\t",arr[i]);

}

