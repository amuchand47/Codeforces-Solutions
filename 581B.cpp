#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
       max=*max_element(a+i,a+n);
       if(a[i]<max)
            cout<<max-a[i]+1<<" ";
       else if(a[i]==max)
            cout<<"0"<<" ";
    }
    return 0;
}
