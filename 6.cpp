#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> a;
    vector<int> A;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int o;
        cin>>o;
        a.push_front(o);
    }

    while(!a.empty())
    {
        if(a.front()<= a.back())
        {
            A.push_back(a.front());
            a.pop_front();
        }
        else
        {
            A.push_back(a.back());
            a.pop_back();

        }
    }
    for(int i=0; i<A.size(); i++)
    {
        a.push_back(A[i]);
    }

    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
