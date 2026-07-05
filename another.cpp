#include<iostream>
#include<bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    int a,b,c,x,y,z,p,q,r;
    cin>>a>>b>>c>>x>>y>>z; 
    p=0,q=0,r=0;
    int f,e;
    e=0,f=0;
    if(x>a)
        e+=2*(x-a),p=1;
    else
        f+=(a-x);
    if(y>b)
        e+=2*(y-b),q=1;
    else
        f+=(b-y);
    if(z>c)
        e+=2*(z-c),r=1;
    else
        f+=(c-z);

    if(f>e)
        cout<<"Yes"<<endl;
    else if(f==e)
    {
        if((p+q+r)==2)
            cout<<"Yes"<<endl;
        else
        {
            if(p)
            {
                if((b-y)%2==0)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
            else if (q)
            {
                if((c-z)%2==0)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
            else
            {
                if((b-y)%2==0)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
        }
            
    }
    else
        cout<<"No"<<endl;
    return 0;
}