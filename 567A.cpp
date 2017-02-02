#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    vector <ll> v;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    cout<<abs(v[0]-v[1])<<" ";
    cout<<abs(v[v.size()-1]-v[0])<<endl;

    for(int i=1;i<n;i++)
    {
        ll t=v[i];
        ll min1,min2;
        min1=abs(v[i+1]-t);
        min2=abs(v[i-1]-t);
        if(min1<=min2)
            cout<<min1<<" ";
        else
            cout<<min2<<" ";
        ll max1,max2;
        max1=abs(v[v.size()-1]-t);
        max2=abs(v[0]-t);
        if(max1>=max2)
            cout<<max1;
        else
            cout<<max2;

        cout<<endl;
    }

    return 0;
}
