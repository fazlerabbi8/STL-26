#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    for(int i = 0; i < 10; i++){
        s.insert(i);
    }

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

    cout << "\n";

    int n = 7;
    if(s.find(7) != s.end()){
        cout << n << " " << "is present in set." << "\n";
    }

    

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

    return 0;
}