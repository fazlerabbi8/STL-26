#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin >> n;

    multiset<int> ms;
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cin >> x;
    //     ms.insert(x);
    // }
    ms.insert(5);
    ms.insert(3);
    ms.insert(3);
    ms.insert(7);
    ms.insert(3);

    // auto it = ms.find(7);

    // if (it != ms.end())
    // {
    //     cout << *it;
    // }
    // cout << "\n";

    cout << ms.count(7) << "\n";

    for (auto x : ms)
    {
        cout << x << " ";
    }
}