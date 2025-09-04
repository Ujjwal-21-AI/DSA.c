#include <stdio.h>
int main(){
	int i,n,ele,found;
	int arr[20];
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter ele in array");
	for(i = 0;i < n;i++)
	scanf("%d",&arr[i]);
	for(i = 0;i < n;i++)
	printf("%d\t",arr[i]);
	printf("enter element to check");
	scanf("%d",&ele);
	for(i = 0;i < n;i++){
		if(arr[i]==ele){
		found = 1;
			break;
			
		}
		
	}
	if(found==1)
	printf("found at %d",i+1);
	else
	printf("Not found");
	return 0;
	
}

