#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;

    int l1=str1.size();
    int l2=str2.size();

    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]>='A'&&str1[i]<='Z')
            str1[i]=str1[i]+32;
    }

    for(int i=0;i<str2.size();i++)
    {

        if(str2[i]>='A'&&str2[i]<='Z')
            str2[i]=str2[i]+32;
    }
    cout<<str1<<endl<<str2;
    int big=0;
    int same=0;
    int small=0;

    int l;
    if(l1>=l2)
    l=l2;
    else
    l=l1;

        for(int i=0;i<l;i++)
        {
            if(str2[i]>str1[i])
            big++;
            if(str2[i]==str1[i])
            same++;
            if(str2[i]<str1[i])
            small++;
        }

    if(big==str2.size())
        cout<<"-1";
    if(small==str2.size())
        cout<<"1";
    if(same==str2.size())
        cout<<"0";

   for(int i=0;i<l;i++)
   {
       if(str1[i]<str2[i])

   }
    return 0;
}
