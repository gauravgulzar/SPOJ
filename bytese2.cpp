//
//  bytese2.cpp
//  
//
//  Created by Gaurav Gulzar on 14/04/15.
//
//

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

typedef pair<int,bool> ib;
typedef vector<ib> vib;

int calc(vib a){
    sort(a.begin(),a.end());
    //for(vib::iterator i = a.begin(); i != a.end(); ++i) cout << i->first << " ";
    int c=0,cmax=-1;
    for(vib::iterator i = a.begin(); i != a.end(); ++i){
        if(i->second) c++;
        else c--;
        cmax = max(cmax,c);
    }
    return cmax;
}

int main(){
    int t,n,i1,i2;
    cin >> t;
    vib a;
    while(t--){
        cin >> n; int j=0;
        for(int i=0; i<n; ++i){
            cin >> i1 >> i2;
            a.push_back(make_pair(i1,1));
            a.push_back(make_pair(i2,0));
        }
        cout << calc(a) << "\n";
        a.clear();
    }
}
