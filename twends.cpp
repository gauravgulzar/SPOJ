//
//  twends.cpp
//  
//
//  Created by Gaurav Gulzar on 14/04/15.
//
//

#include <iostream>
using namespace std;
#define I1(a,j,i) a[j]>=a[i]?i:j
//#define I2(a,j,i) I1(a,j,i)==j?i-1:j+1
#include <vector>
long int p1[1005][1005];
int fun(vector<int> a, int n){
    for(int i=0; i<n; ++i){
        for(int j=n-1; j>=0; --j){
            if(j>i) p1[j][i]=0;
            else if((i-j+1)%2){
                if(a[j] == a[i]) p1[j][i] = p1[j+1][i];
                else
                    p1[j][i] = a[j]>a[i]?p1[j+1][i]:p1[j][i-1];
            }
            else if(i-j+1 == 2) p1[j][i] = max(a[i],a[j]);
            else{
                p1[j][i] = max(a[j]+p1[j+1][i],a[i]+p1[j][i-1]);
            }
        }
    }
   /* for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j)cout << p1[i][j] << "  ";
        cout << "\n";
    }*/
    return p1[0][n-1];
}

int main(){
    int n,s,i=0,t;
    vector<int> a;
    while(1){
        cin >> n;
        if(!n) break;
        ++i;
        s=0;
        for(int i=0; i<n; ++i) {
            cin >> t;
            a.push_back(t);
            s+= a[i];
        }
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n",i,2*fun(a,n)-s);
        a.clear();
        //cout << fun(a,n) << "\n";
    }
    return 0;
}
