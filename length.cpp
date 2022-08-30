#include <bits/stdc++.h>

using namespace std;
int main(){
    int totalSticks, useSticks;
    cin >> totalSticks >> useSticks;
    int totalSticksArray[totalSticks];
    for (int i=0; i<totalSticks; i++){
        cin >> totalSticksArray[i];
    }
    sort(totalSticksArray, totalSticksArray+totalSticks);
    int limit= totalSticks-useSticks;
    int length=0;
    for(int i=totalSticks-1; i>=limit; i--){
        length=length+totalSticksArray[i];
    }
    cout << length;
    return 0;
}