#include <bits/stdc++.h>

using namespace std;
int main(){
    string odd,even;
    cin >> odd >> even;
    string concatenated="";
    int totalLength= odd.size()+even.size();

    for(int i=0; i<totalLength; i++){
        if(concatenated.size()>=totalLength){
            break;
        }
        concatenated = concatenated + odd[i] + even[i];
    }
    cout << concatenated;
    return 0;
}