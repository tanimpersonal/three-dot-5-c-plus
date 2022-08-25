#include <bits/stdc++.h>
using namespace std;
int main(){
    int availableSand, time;
    cin >> availableSand >> time;
    int remainSand= availableSand- time*1;
    if(remainSand <=0){
        cout << "0";
    }
    if (remainSand > 0){
        cout << remainSand;
    }
    return 0;
}