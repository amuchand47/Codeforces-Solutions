#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k;
    cin>>n>>k;
    ll x;
    vector <ll> v;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    vector <ll> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            ans.push_back(v[j]);
        if(ans.size()>k)
                break;
    }

   // for(int i=0;i<ans.size();i++)
     //   cout<<ans[i]<<" ";
     8cout<<ans[k-1];
    return 0;
}
