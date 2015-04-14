//
//  fctrl2.cpp
//  
//
//  Created by Gaurav Gulzar on 27/10/14.
//
//

#include <iostream>
using namespace std;

void calculate(int n){
    int res[200];
    for(int i=0; i<200; i++)
        res[i] = -1;
    int temp = n,j=0;
    while(temp > 0){
        res[j] = temp%10;
        temp = temp/10;
        j++;
    }
    --n;
    while(n > 1){
        int carry = 0, t, d,i;
        for(i=0; res[i] != -1; i++){
            t = res[i] * n + carry;
            d = t%10;
            carry = t/10;
            res[i] = d;
        }
        while(carry > 0){
            res[i++] = carry%10;
            carry /= 10;
        }
        --n;
    }
    
    for(int i = 199; i>=0; i--){
        if(res[i] != -1)
            cout << res[i];
    }
    cout << "\n";
}

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        calculate(n);
    }
}