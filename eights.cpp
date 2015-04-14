//
//  eights.cpp
//  
//
//  Created by Gaurav Gulzar on 07/03/15.
//
//

#include <iostream>
using namespace std;

int val[4] = {942,192,442,692};
void printk(unsigned long long k){
    unsigned long long q,i;
    q = (k-1)/4;
    i = k%4;
    //cout << k << q << i << "\n";
    if(q > 0) cout << q;
    cout << val[i] << "\n";
}

int main(){
    unsigned long long k;
    int t;
    cin >> t;
    while(t--){
        cin >> k;
        printk(k);
    }
    return 0;
}


