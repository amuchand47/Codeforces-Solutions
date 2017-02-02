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
           if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
       }

    for(int i=0;i<str.size();i++)
        a[str[i]-'a']++;

    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]>=1)
        ans++;
    }
    if(ans==26)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
