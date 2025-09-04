int cnk(int n,int k){
	if(k==0,n==k){
		return 1;
	}
	return cnk(n-1,k-1)+(n-1,k);
	}
int main()
