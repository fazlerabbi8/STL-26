#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> u_set;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        u_set.insert(x);
    }

    u_set.emplace(10);
    u_set.emplace(5);
    u_set.emplace(2);

    auto it = u_set.find(2);
    // auto it = u_set.find(3);
    if(it != u_set.end())
    {
        cout << "Element Found" << *it << "\n";
    }
    else
    {
        cout << "Element is not found" << "\n";
    }


    for(auto x : u_set)
    {
        cout << x << "\n";
    }
    return 0;
}