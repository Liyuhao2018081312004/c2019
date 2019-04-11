#include <bits\stdc++.h>
using namespace std;

void judge(int x)
{
	int x1,x2,x3;
	x1=x/100;
	x2=(x-x1*100)/10;
	x3=x%10;
	if(x1*x1*x1+x2*x2*x2+x3*x3*x3==x)printf("%d ",x);
}

int main()
{
	for(int i=100;i<=999;i++){
		judge(i);
	}
	 return 0;
}
