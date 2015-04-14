//
//  ngm2.cpp
//  
//
//  Created by Gaurav Gulzar on 16/03/15.
//
//

#include <iostream>
#include <string.h>
using namespace std;

template <class T> T gcd(T a, T b){ return b?gcd<T>(b,a%b):a;}
template <class T> T lcm(T a, T b){ return a*(b/gcd<T>(a,b)); }

int main(){
    long int n,k,nc,kc;
    cin >> n >> k;
    nc = n;
    long long int a[k];
    for(int i=0; i<k; ++i) cin >> a[i];
    kc = (1<<k);
    for(int i=1; i<kc; ++i){
        long long int l=1,ne=0;
        for(int j=0; j<k; ++j){
            if(i & (1<<j)){
                ne++;
                l = lcm(l,a[j]);
            }
        }
        if(ne & 1) nc -= n/l;
        else nc += n/l;
    }
    cout << nc << "\n";
}
