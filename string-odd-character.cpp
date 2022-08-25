#include <bits/stdc++.h>

using namespace std;
int main(){
    string stringOne;
    string stringTwo= " ";
    cin >> stringOne;
    string mergedString= stringTwo + stringOne;
    string stringConcatenated="";
    for(int i=1; i< mergedString.size(); i++){
        if(i%2!=0){
            stringConcatenated= stringConcatenated + mergedString[i];

        }
    }
    cout << stringConcatenated;
    return 0;


}