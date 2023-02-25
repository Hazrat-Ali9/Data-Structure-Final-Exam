#include <bits/stdc++.h>
# define  flag set<int>
#define checkmate return 0
#define nl "\n"

using namespace std;

int main()
{
    int n, m;

     flag set1, set2, union_set;


    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        set1.insert(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        set2.insert(x);
    }


    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(union_set, union_set.begin()));

    for (auto i : union_set)
    {
        cout << i << " ";
    }


    checkmate;
}
