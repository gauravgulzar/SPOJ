//
//  chocola.cpp
//  
//
//  Created by Gaurav Gulzar on 20/04/15.
//
//

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

typedef vector<int> vi;
vi x,y;

int cost(int m, int n){
    sort(x.begin(), x.begin()+m, std::greater<int>());
    sort(y.begin(), y.begin()+n, std::greater<int>());
    //for(int l=0; l<m; ++l) cout << x[l] << " "; cout << "\n"; for(int l=0; l<n; ++l) cout << y[l] << " "; cout << "\n";
    int i=0,j=0,v=0,h=0,res=0;
    while(i<m && j<n){
        if(x[i] >= y[j]){
            res += x[i++]*(h+1);
            ++v;
        }
        else{
            res += y[j++]*(v+1);
            ++h;
        }
    }
    while(i<m) res += x[i++]*(h+1);
    while(j<n) res += y[j++]*(v+1);
    return res;
}

int main(){
    int t,m=0,n=0,tmp;
    char blank[100];
    cin >> t;
    while(t--){
        cin.getline(blank,100);
        cin >> m >> n;
        for(int i=0; i<m-1 && cin >> tmp; ++i) x.push_back(tmp);
        for(int i=0; i<n-1 && cin >> tmp; ++i) y.push_back(tmp);
        cout << cost(m-1,n-1) << "\n";
        x.clear(); y.clear();
    }
    return 0;
}
