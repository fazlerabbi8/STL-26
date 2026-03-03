#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p;
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second << "\n";
    

    auto [number, text] = p;
    cout << "Number: " << number << "\n";
    cout << "Number: " << text << "\n";
    return 0;
}