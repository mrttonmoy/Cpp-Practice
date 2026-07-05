#include <iostream>
#include<string>
#include <map>
using namespace std;

int main() {
    int t;
    cin>>t;
    map<char, int> mp;
    string st;
    int n,m,p,k,l,res,ev,od;
    while(t--)
    {
        mp.clear();
        k=0;
        l=0;
        ev=0;
        od=0;
        res=0;
        cin>>n>>m;
        cin>>st;
        for(int i=0;i<n;i++)
        {
            mp[st[i]]++;
        }
        for (auto it : mp) 
        {    
            if(it.second%2==1)
            {
                l++; 
                //od+=it.second;
            }
            else
            {
                res++;
                //ev+=it.second;
            }

        }
        if(m==0)
        {
            if(l<2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(m<=l)
            {
                if(l-m>1)
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
            }
            else
            {

                cout<<"YES"<<endl;
            }
            
        }
    }

    return 0;
}