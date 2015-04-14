//
//  ololo.cpp
//  
//
//  Created by Gaurav Gulzar on 24/03/15.
//
//

#include <iostream>
using namespace std;

typedef long long int ll;
int main(){
    ll n,a=0,t;
    cin >> n;
    for(ll i=0; i<n; ++i){
        cin >> t;
        a = a^t;
    }
    cout << a << "\n";
}
