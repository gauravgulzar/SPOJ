//
//  gnyr09f.cpp
//  
//
//  Created by Gaurav Gulzar on 09/04/15.
//
//

#include <iostream>
using namespace std;

int adjbc(int n, int k){
    int t[n+1][k+1];
    //cout << "test" << "\n";
    for(int i=0; i<=2; ++i){
        for(int j=0; j<k+1;++j){
            if(i == 0) t[i][j] = 0;
            else if(i==1){
                if(j==0) t[i][j] = 2;
                else t[i][j] = 0;
            }
            else{
                if(j==0) t[i][j]=3;
                else if(j==1) t[i][j]=1;
                else t[i][j]=0;
            }
        }
    }
    for(int i=3; i<n+1; ++i){
        for(int j=0; j<k+1; ++j){
            if(j>=i){ t[i][j] = 0; continue; }
            if(j==0){
                if(i==1) t[i][j] = 2;
                else if(i==2) t[i][j]=3;
                else t[i][j] = t[i-1][j]+t[i-2][j];
            }
            else
                t[i][j] = t[i-1][j]+t[i-2][j]+t[i-1][j-1]-t[i-2][j-1];
        }
    }
    /*for(int i=0; i<n+1; ++i){
        for(int j=0; j<k+1; ++j)
                cout << t[i][j] << "  ";
        cout << "\n";
    }*/
    return t[n][k];
}
int main(){
    int p,sn,n,k;
    cin >> p;
    while(p--){
        cin >> sn >> n >> k;
        //adjbc(n,k);
        cout << sn << " " << adjbc(n,k) << "\n";
    }
    return 0;
}
