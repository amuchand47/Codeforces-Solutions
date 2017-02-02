#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    int a=(d1+d2+d3);
    int b=2*(d1+d2);
    int c=2*(d1+d3);
    int d=2*(d2+d3);

    int ans=min(min(a,b),min(c,d));
    cout<<ans;

    return 0;
}
