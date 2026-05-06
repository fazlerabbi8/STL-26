#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> nums {2, 3};

    nums.push_back(4);
    nums.push_back(7);
    nums.push_back(8);

    // print deque
    for(auto x: nums)
    {
        cout << x << " ";
    }
}