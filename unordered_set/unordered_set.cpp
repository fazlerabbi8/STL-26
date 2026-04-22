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
    
    for(auto x : u_set)
    {
        cout << x << "\n";
    }
    return 0;
}