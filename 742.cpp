#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector <int> a;
    for(int i=0;i<n;i++)
    {
        int r;
        cin>>r;
        a.push_back(r);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l=a[i]^a[j];
            //cout<<l<<" ";
            if(l==x)
                c++;
        }
    }
    cout<<c;
    return 0;

}
