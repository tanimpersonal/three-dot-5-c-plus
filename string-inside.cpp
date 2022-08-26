#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    cin >> s;
    int k=0;
    for(int i=1; i< strlen(s)-1; i++){

        k++;
    }
    cout << s[0] << k << s[strlen(s)-1];
    return 0;
}