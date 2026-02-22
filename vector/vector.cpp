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
    cout << arr.size() << "\n";
    cout << arr[arr.size() - 1] << "\n";
    
    arr.pop_back();

    arr.insert(arr.begin(), 7);

    arr.erase(arr.begin());

    if(arr.empty()){
        cout << "vector is empty." << "\n";
    }else{
        cout << "vector is not empty." << "\n";
    }
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}