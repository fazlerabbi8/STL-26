#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.insert(i);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\n";

    int n = 7;
    if (s.find(7) != s.end())
    {
        cout << n << " " << "is present in set." << "\n";
    }

    // s.erase(++s.begin());
    s.erase(next(s.begin(), 2)); // Alternative to erase

    // Alternative to erase
    // if (s.size() >= 2) {
    //     auto it = s.begin();
    //     advance(it, 2); // move to 2nd element
    //     s.erase(it);
    // }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << "\n";

    cout << "size of the set: " << s.size() << "\n";

    s.clear();
    
    if (s.empty() == true)
    {
        cout << "set is empty." << "\n";
    }
    else
    {
        cout << "set is not empty." << "\n";
    }
    return 0;
}