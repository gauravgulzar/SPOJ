//
//  edist.cpp
//  
//
//  Created by Gaurav Gulzar on 07/04/15.
//
//

#include <iostream>
using namespace std;
#include <string>

int a[2001][2001];

int minm(int a, int b, int c){
    if(a < b){
        if(a < c) return a;
        if(b < c) return b;
        else return c;
    }
    else{
        if(b < c) return b;
        else return c;
    }
}

int edist(string s1, string s2, int m, int n){
    for(int i=0; i<m+1; ++i){
        for(int j=0; j<n+1; ++j){
            if(i == 0) a[i][j] = j;
            else if(j == 0) a[i][j] = i;
            else if(s1[i-1] == s2[j-1]) a[i][j] = minm(a[i][j-1]+1,a[i-1][j]+1, a[i-1][j-1]);
            else a[i][j] = minm(a[i][j-1],a[i-1][j], a[i-1][j-1])+1;
        }
    }
    return a[m][n];
}

int main(){
    string s1,s2;
    int m,n,t;
    cin >> t;
    while(t--){
        cin >> s1 >> s2;
        m = s1.length(); n = s2.length();
        cout << edist(s1,s2,m,n) << "\n";
    }
}