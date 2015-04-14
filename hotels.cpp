//
//  hotels.cpp
//  
//
//  Created by Gaurav Gulzar on 12/04/15.
//
//

#include <iostream>
using namespace std;

int main(){
    long int n, m;
    cin >> n >> m;
    long int a[n];
    for(long int i=0; i<n; ++i) cin >> a[i];
    long int s=0,ms=0,l=0,r=0;
    for(r=0; r<n; ++r){
        s = s+a[r];
        while(s>m && l<=r) s = s-a[l++];
        ms = max(ms,s);
    }
    cout << ms << "\n";
}
