#include<bits/stdc++.h>
using namespace std;

void print(queue<int> q1){
    queue<int> q2 = q1;
    while(!q2.empty()){
        cout << q2.front() << "\n";
        q2.pop();
    }
}

int main(){
    queue<int> q;
    for(int i = 1; i <= 5; i++){
        q.push(i);
    }

    print(q);

    cout << "size of the queue: " << q.size() << "\n";
    return 0;
}