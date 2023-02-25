#include <bits/stdc++.h>
#define flag  map<string,int>
#define checkmate return 0
#define nl "\n"

using namespace std;

int main()
{
    int t;
    cin>>t;
    flag mp;
    int i=0;

    for(; i<t; i++)
    {
        string str;

        cin>>str;

        if(mp.count(str)==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<mp[str]<<endl;
        }

        mp[str]=i;


    }

    checkmate;
}
