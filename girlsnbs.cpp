//
//  girlsnbs.cpp
//  
//
//  Created by Gaurav Gulzar on 11/03/15.
//
//

#include <iostream>
using namespace std;

int diversity(int g, int b){
    if(g == b) return 1;
    int dmin = min(g,b);
    int dmax = max(g,b);
    int t = dmax/(dmin+1);
    if(dmax%(dmin+1))
        t=t+1;
    return t;
}
int main(){
    int g,b;
    cin >> g >> b;
    while(g!=-1 && b!=-1){
        if(g==0 && b==0) cout << 0 << "\n";
        else cout << diversity(g,b) << "\n";
        cin >> g >> b;
    }
}
