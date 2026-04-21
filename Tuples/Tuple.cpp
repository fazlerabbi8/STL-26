#include <bits/stdc++.h>
using namespace std;

int main()
{
   tuple<string, string, int> student;

   student = make_tuple("Fazle Rabbi", "CSE", 47014);
   cout << get<0>(student) << " " << get<1>(student) << " " << get<2>(student) << "\n";
}