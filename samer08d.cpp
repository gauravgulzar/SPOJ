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
            if(i==0 || j==0) tab[i][j] = 0;
            else if(s1[i-1] == s2[j-1]){
                //tab[i][j] = tab[i-1][j-1]+1;
                int c=1;
                while(i-c>=0 && j-c >= 0 && s1[i-c]==s2[j-c]) ++c;
                if(c>=k) tab[i][j] = c-1;
                
            }
            else tab[i][j] = max(tab[i][j-1],tab[i-1][j]);
        }
    }
    
    for(int i=0; i<=m; ++i){
        for(int j=0; j<=n; ++j) cout << tab[i][j] << "  ";
        cout << "\n";
    }
    
    cout << tab[m][n] << "\n";
}

int main(){
    string s1,s2; int k;
    cin >> k >> s1 >> s2;
    lcs(s1,s2,k);
    return 0;
}