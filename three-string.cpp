#include <bits/stdc++.h>

using namespace std;
int main(){
    string first, second, third;
    cin >> first >> second >> third;
    if(first[first.size()-1]==second[0] && second[second.size()-1]==third[0]){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}