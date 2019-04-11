#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			printf("不是素数");
			return 0; 
		}
	}
	printf("是素数");
	return 0;	
} 
