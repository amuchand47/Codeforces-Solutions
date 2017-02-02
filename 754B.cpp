#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
            cin>>a[i][j];
    }

    int c=0;
    for(int i=0;i<4;i++)
    {

           int x=a[i][0]+a[i][1]+a[i][2];
           int y=a[i][1]+a[i][2]+a[i][3];
           if(x==286 || y==286)
           {
               c=1;
               break;
           }
    }

    for(int i=0;i<4;i++)
    {

           int x=a[0][i]+a[1][i]+a[2][i];
           int y=a[1][i]+a[2][i]+a[3][i];

           if(x==286 || y==286)
           {
               c=1;
               break;
           }
    }
    int x_1,x_2,x_3,x_4,x_5,x_6,x_7,x_8;
    x_1=a[1][0]+a[2][1]+a[3][2];
    x_2=a[0][1]+a[1][2]+a[2][3];
    x_3=a[0][0]+a[1][1]+a[2][2];
    x_4=a[1][1]+a[2][2]+a[3][3];
    x_5=a[2][0]+a[1][1]+a[0][2];
    x_6=a[3][0]+a[2][1]+a[1][2];
    x_7=a[2][1]+a[1][2]+a[0][3];
    x_8=a[3][1]+a[2][2]+a[1][3];

    if(x_1==286||x_2==286||x_3==286||x_4==286||x_5==286||x_6==286||x_7==286||x_8==286)
        c=1;
    if(c==1)
    cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
