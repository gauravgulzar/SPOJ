//
//  samer08d.cpp
//  
//
//  Created by Gaurav Gulzar on 13/04/15.
//
//

#include <iostream>
using namespace std;

void lcs(string s1, string s2, int k){
    int m = s1.length();
    int n = s2.length();
    int tab[m+1][n+1],c[m+1][n+1],res=0;
    for(int i=0; i<=m; ++i){
        for(int j=0; j<=n; ++j){
            if(i==0 || j==0) c[i][j] = tab[i][j] = 0;
            else if(s1[i-1] == s2[j-1]){
                c[i][j] = c[i-1][j-1]+1;
                //tab[i][j] = tab[i-1][j-1]+1;
                tab[i][j] = max(tab[i][j-1],tab[i-1][j]);
                if(c[i][j]>=k) {
                    for(int l=k; l<=c[i][j]; ++l)
                        tab[i][j] = max(tab[i][j],tab[i-l][j-l] + l);
                }
                //else tab[i][j] = max(tab[i][j-1],tab[i-1][j]);
            }
            else { tab[i][j] = max(tab[i][j-1],tab[i-1][j]); c[i][j]=0;}
            if(c[i][j]>=k) res = max(res,tab[i][j]);
        }
    }
    cout << res << "\n";
}

int main(){
    string s1,s2; int k;
    while(1){
        cin >> k;
        if(!k) break;
        cin >> s1 >> s2;
        lcs(s1,s2,k);
    }
    return 0;
}