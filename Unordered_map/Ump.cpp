#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 2, 3, 3, 3};

    // unordered_map<int, int> freq;

    // for (int x : a)
    // {
    //     freq[x]++;
    // }

    // for (auto it : freq)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // if (freq.find(3) == freq.end())
    // {
    //     cout << "Key is not present." << "\n";
    // }
    // else
    // {
    //     cout << "Key is present." << "\n";
    // }

    unordered_map<string, int>
        umap, myBooks = {{"Java", 2}, {"C++", 2}};

    pair<string, double> myShop("python", 2.0);

    umap.insert(myShop);
    umap.insert(myBooks.begin(), myBooks.end());

    // for (auto &x : umap)
    // {
    //     cout << x.first << "->" << x.second << "\n";
    // }

    // finding element
    // string input;
    // getline(cin, input);

    // auto got = umap.find(input);
    // if (got == umap.end())
    // {
    //     cout << "Not Found";
    // }
    // else
    // {
    //     cout << "Found";
    // }

    umap.erase("Java");
    for (auto &x : umap)
    {
        cout << x.first << "->" << x.second << "\n";
    }
}