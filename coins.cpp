//
//  coins.cpp
//  
//
//  Created by Gaurav Gulzar on 02/03/15.
//
//

#include <iostream>
using namespace std;
#include <map>
map<long long,long long> m;

long long maxd(long long n){
    if(n == 0) return 0;
    if(m[n] != 0) return m[n];
    return m[n] = max(n,maxd(n/2)+maxd(n/3)+maxd(n/4));
}

int main(){
    long long n;
    m.clear();
    while(cin>>n)
        cout << maxd(n) << "\n";
    return 0;
}
