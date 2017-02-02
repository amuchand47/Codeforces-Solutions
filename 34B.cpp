#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<0)
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int ans=0;
    //for(int i=0;i<n;)
    for(int i=0;i<v.size()&&i<m;i++)
    {
        ans=ans+abs(v[i]);
    }
    cout<<ans;
    return 0;
}
