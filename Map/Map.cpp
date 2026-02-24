#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mp;
    for (int i = 1; i <= 5; i++){
        mp.insert({i , i * 10});
    }

    for (auto it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << "\t" << it -> second << "\n";
    }

    return 0;
}