#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a[26]={0};
    for(int i=0;i<str.size();i++)
    {
        a[str[i]-'a']=1;
    }

    int ans=0;
    int alb=0;

    for(int i=0;i<26;i++)
        {
        ans=ans+a[i];
        }

        if(n<=26)
        cout<<n-ans;
        else
        cout<<"-1";
    return 0;
}
