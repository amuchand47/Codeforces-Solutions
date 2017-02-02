#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,ans;
    cin>>s>>t;
    ans=s;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==t[i])
            c++;
        else if(t[i]-s[i]>0 && t[i+1]-s[i+1]>0)
            ans[i]=ans[i]+1;
    }

    if(c==s.size()-1 && t[s.size()-1]-s[s.size()-1]==1 )
        cout<<"No such string";
    else
    {
     cout<<ans;
    }
    return 0;
}
