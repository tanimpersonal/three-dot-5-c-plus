#include <bits/stdc++.h>

using namespace std;
int main(){
    int totalSticks, useSticks;
    cin >> totalSticks >> useSticks;
    int totalSticksArray[totalSticks];
    for(int i=0; i<totalSticks; i++){
        cin >> totalSticksArray[i];
    }
    sort(totalSticksArray, totalSticksArray+totalSticks);
    int length=0;
    int i=totalSticks-1;
    while(i>=0){
        length= length + totalSticksArray[i];
        i--;
    }
    cout << length;
    return 0;
}