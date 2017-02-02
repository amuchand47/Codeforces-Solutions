#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int a[26]={0};
    for(int i=0;i<str.size();i++)
    {
       a[str[i]-'a']=1;
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]==1)
            c++;
    }
    cout<<c;
   return 0;
}
