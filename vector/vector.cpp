#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    for (int i = 0; i < 10; i++)
    {
        arr.push_back(i);
    }

    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n\n";
    cout << "------------------";
    cout << "\n\n";
    cout << arr.front() << "\n";
    cout << arr.back() << "\n";

    return 0;
}