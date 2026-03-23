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
    ms.insert(2);
    ms.insert(7);
    ms.insert(3);

    // auto it = ms.find(7);

    // if (it != ms.end())
    // {
    //     cout << *it;
    // }
    // cout << "\n";

    // cout << ms.count(7) << "\n";

    // erase all 3
    // ms.erase(3);

    // erase just one
    // ms.erase(ms.find(3));

    auto l = ms.lower_bound(3);
    auto u = ms.upper_bound(3);

    cout << "lower_bound(3) = " << *l << "\n";  
    cout << "upper_bound(3) = " << *u << "\n";

    for (auto x : ms)
    {
        cout << x << " ";
    }
}