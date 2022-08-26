#include <bits/stdc++.h>

using namespace std;
int main(){
    string  s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << s;
    int minimum= s[0];
    cout << minimum;
    for(int i=0; i<s.size(); i++){
        if(minimum+1 != s[i]){
            cout << char (minimum + 1);

        }
    }
}