#include <bits/stdc++.h>

using namespace std;
int main(){
    int totalHouse,coordinate[100];
    cin >> totalHouse;
    for(int i=0; i<totalHouse; i++){
        cin >> coordinate[i];
    }
    sort(coordinate, coordinate+totalHouse);
    int minimumDistance= coordinate[totalHouse-1] - coordinate[0];
    cout << minimumDistance;
    return 0;
}