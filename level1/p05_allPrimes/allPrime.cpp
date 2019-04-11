#include<bits\stdc++.h>
using namespace std;

int math[1000];

int main()
{
    int a[1001];
    for(int i=0;i<=1000;i++)
        a[i]=1;
    for(int i=2;i<=1000;i++)
    {
        if(a[i])
        {
            printf("%5d",i);
            for(int j=i+1;j<=1000;j++)
            {
                if(j%i==0)   
                    a[j]=0;
            }
        }
    }
    return 0;
}
