#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        int a;
        cin>>a;
        cout<<n;
    }

    else
    {
    long long int a[n][n];
    long long int ans=0;
    int x,y;
    for(int i=0;i<n;i++)
    {
        long long int c=0,sum=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
                {
                    x=i;
                    y=j;
                }
            if(a[i][j]!=0)
            {
              c++;
              sum=sum+a[i][j];
            }

        }

        if(c==n)
         ans=sum;
    }

    long long int t1=0,t2=0;
    for(int i=0;i<n;i++)
        t1=t1+a[i][y];

    for(int i=0;i<n;i++)
        t2=t2+a[x][i];


    if(ans>t1&&ans>t2)
        cout<<ans-t1;

    if(t1!=t2||(t1>=ans))
        cout<<"-1";


    }return 0;
}
