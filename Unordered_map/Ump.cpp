#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 2, 3, 3, 3};

    unordered_map<int, int> freq;

    for (int x : a)
    {
        freq[x]++;
    }
    
    for (auto it : freq)
    {
        cout << it.first << " " << it.second << endl;
    }
}