#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v,v1,v2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++)
    {
        int y;
        cin>>y;
        v1.push_back(y);
    }
    sort(v1.begin(),v1.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v1[i])
            {
                cout<<v[i]<<endl;
                 break;
            }
    }

    for(int i=0;i<n-2;i++)
    {
        int z;
        cin>>z;
        v2.push_back(z);
    }

    sort(v2.begin(),v2.end());

    for(int i=0;i<n-1;i++)
    {
        if(v1[i]!=v2[i])
            {
                cout<<v1[i]<<endl;
               break;
            }
    }
    return 0;
}
