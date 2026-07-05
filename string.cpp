#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t,r;
    cin>>n>>t;
    string st,s1;
    cin>>st;
    int m;
    m=n/2;
    r=1;
    int flag=0;
    if(n%2==0)
    {
        for (int i=m; i<n;i++)
        {
            if(st[i]==st[0])
            {
                flag=0;
                for(int j=1;j<m;j++)
                {
                    if(st[j]!=st[i+j])
                    {
                        flag=1;
                    }
                    else
                    {
                        r++;
                    }
                }
                if(flag==0)
                {
                    s1=st.substr(r,n-1);
                    //cout<<"i am "<<s1<<endl;
                    cout<<st;
                    for(int k=0;k<t-1;k++)
                    cout<<s1;
                    cout<<endl;
                    return 0;
                }
                else
                    r=1;
            }
        }
    }
    else
    {
        for (int i=m+1;i<n;i++)
        {
            if(st[i]==st[0])
            {
                flag=0;
                for(int j=1;j<m;j++)
                {
                    if(st[j]!=st[i+j])
                    {
                        flag=1;
                    }
                    else
                    {
                        r++;
                    }
                }
                if(flag==0)
                {
                    s1=st.substr(r,n-1);
                    //cout<<"i am "<<s1<<endl;
                    cout<<st;
                    for(int k=0;k<t-1;k++)
                    cout<<s1;
                    cout<<endl;
                    return 0;
                }
                else
                    r=1;
            }
        }
    }
    //cout<<"i am "<<s1<<endl;
    for(int i=0;i<t;i++)
    cout<<st;
    cout<<endl;

    return 0;
}