//
//  elis.cpp
//  
//
//  Created by Gaurav Gulzar on 10/04/15.
//
//

#include <iostream>
using namespace std;
#include <cstring>

int main(){
    short int n;
    cin >> n;
    short a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    int t[n];
    for(int i=0; i<n; ++i) t[i] =1;
    for(int i=1; i<n; ++i){
        for(int j=i-1; j>=0; --j)
            if((a[j] < a[i]) && (t[j]+1 > t[i]) ) t[i] = t[j]+1;
    }
    int ans=t[0];
    for(int i=1; i<n; ++i) if(t[i] > ans) ans = t[i];
    cout << ans << "\n";
}
