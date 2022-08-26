#include <bits/stdc++.h>

using namespace std;
int main(){
    int limit,temp=0,maximum;
    cin >> limit;
    if(limit>1){
        for(int i=1; i<=limit; i++){
            int num=i;
            int counter=0;
            while(num>=1){
                if(num%2==0){
                    num= (num/2);
                    counter++;
                } else{
                    break;
                }
            }
            if(counter > temp){
                maximum= i;
                temp=counter;
            }
        }
        cout << maximum;
    } else {
        cout << "1";
    }
    return 0;
}