#include <stdio.h>
int main(){
	int i,n,ele;
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
			printf("ele at pos %d",i);
			break;
			
		}
		
	}
	return 0;
	
}

