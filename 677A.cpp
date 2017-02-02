#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int c=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x>h)
            c=c+2;
        else
            c=c+1;
    }
    cout<<c;
    return 0;
}
