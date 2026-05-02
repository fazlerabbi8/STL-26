#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> myStack;
    int n;

    cout << "Enter Number of Elements: ";
    cin >> n;

    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        myStack.push(x);
    }

    cout << "Size of the Stack: " << myStack.size() << "\n";

    // check empty or not
    if(myStack.empty())
    {
        cout << "Stack is empty" << "\n";
    }
    else
    {
        cout << "Stack is not empty." << "\n";
    }

    // create a string stack
    stack<string> st;
    st.emplace("Rabbi");
    st.emplace("Ali");
    st.emplace("Abrar");
    // print stack
    while (!myStack.empty())
    {
        cout << myStack.top() << " " << "\n";
        myStack.pop();
    }
}