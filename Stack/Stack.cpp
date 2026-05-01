#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> myStack;
    int n;

    cout << "Enter Number of Elements: ";
    cin>> n;

    cout << "Enter Elements: ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        myStack.push(x);
    }

    // print stack
    while(!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
}