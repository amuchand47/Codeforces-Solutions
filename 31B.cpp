#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int c=0,r=0;
    if(str[0]=='@'||str[str.size()-1]=='@')
        c=1;
    else
    {
     for(int i=0;i<str.size();i++)
            if(str[i]=='@')
           r++;

    int i=1;
    while(i<str.size()-1)
    {
        if(str[i]=='@')
        {
            if(str[i-1]!='@' && str[i+1]!='@' && str[i+2]!='@')
                i++;
            else
            {
                 c=1;
                break;
            }
        }
        else
        i++;
    }
    }
    if(c==1||r==0)
        cout<<"No solution";
    else
    {
        int i=0;
    while(i<str.size())
    {
        cout<<str[i];
        if(str[i]=='@' && str[i+1]!='@')
            {
                r--;
                cout<<str[i+1];
                if(r!=0)
                cout<<',';
                i=i+2;
            }
        else
                i++;
    }
    }
    return 0;
}
