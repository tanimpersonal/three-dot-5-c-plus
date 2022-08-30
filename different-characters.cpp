#include <bits/stdc++.h>

using namespace std;
int main(){
    string letter;
    cin >> letter;
    int match=0;
    for(int i=0; i<letter.size(); i++){
        for(int j=i+1; j<letter.size();j++){
            if(letter[i]==letter[j]){
                match++;
                break;
            }
        }
    }
    if(match>0){
        cout << "no";
    }else if(match==0){
        cout << "yes";
    }
    return 0;
}