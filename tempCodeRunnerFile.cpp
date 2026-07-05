#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin>>t;
    map<long long int, long long int> mp;
    int n,m,p,k,l,res;
    while(t--)
    {
        mp.clear();
        k=-1;
        l=0;
        res=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            mp[p]++;
        }
        for (auto it : mp) 
        {
        //cout << it.first << " occurs " << it.second << " times\n";
        if(k!=-1)
        {
            l+=it.second;
            cout<<l<<" "<<k<<" "<<it.first<<endl;

            if(it.first-k<=m)
                l++;
            else
            {
                res = max(res,l);
                l=0;
            }

        }
        k=it.first;
        }
        cout<<n-res<<endl;

    }

    return 0;
}