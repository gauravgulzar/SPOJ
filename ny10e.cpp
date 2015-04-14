//
//  ny10e.cpp
//  
//
//  Created by Gaurav Gulzar on 10/04/15.
//
//

#include <iostream>
using namespace std;

unsigned long long int t[10][65];
unsigned long long int f(int d){
    for(int i=2; i<=d; ++i){
        for(int j=9; j>=0; --j){
            if(j==9) t[j][i] = t[j][i-1];
            else t[j][i] = t[j][i-1] + t[j+1][i];
        }
    }
    return t[0][d];
}

int main(){
    int n,sn,d;
    cin >> n;
    for(int i=9; i>=0; --i){
        t[i][1] = 10-i; t[i][0] = 0;
    }
    while(n--){
        cin >> sn >> d;
        //sn = 1 ;d = 3;
        cout << sn << " "<< f(d) << "\n";
    }
}
