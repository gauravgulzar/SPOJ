//
//  crscntry.cpp
//  
//
//  Created by Gaurav Gulzar on 07/04/15.
//
//

#include <iostream>
using namespace std;

int a[2002][2002];
/*
void show(int *a, int n){
    for(int i=0; i<n; ++i)
        cout << a[i] << " ";
    cout << "\n";
}*/

int lcs(int* s1, int* s2, int m, int n){
    //show(s1,m); show(s2,n);
    for(int i=0; i<=m; ++i){
        for(int j=0; j<=n; ++j){
            if(i==0 || j==0) a[i][j] = 0;
            else{
                if(s1[i-1] == s2[j-1]) a[i][j] = a[i-1][j-1]+1;
                else a[i][j] = max(a[i][j-1],a[i-1][j]);
            }
        }
    }
    //cout << a[m][n] << " ";
    return a[m][n];
}

void input(int *a, int &m){
    int i;
    while(1){
        cin >> i;
        a[m++] = i;
        if(!i) break;
    }
}

int main(){
    int d,l=-1;
    cin >> d;
    int s1[2010], s2[2010], m,n;
    while(d--){
        m=n=0;l=-1;
        input(s1,m);
        input(s2,n);
        while(s2[0]){
            //show(s1,m); show(s2,n);
            l = max(lcs(s1,s2,m-1,n-1),l);
            n=0;
            input(s2,n);
        }
        cout << l << "\n";
    }
}
