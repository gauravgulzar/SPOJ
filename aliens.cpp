//
//  aliens.cpp
//  
//
//  Created by Gaurav Gulzar on 13/04/15.
//
//

#include <iostream>
using namespace std;

long int inp(){
    long int n=0;
    char ch = getchar_unlocked();
    while(ch<'0' || ch>'9') ch = getchar_unlocked();
    while(ch>='0' && ch<='9'){
        n = n*10+ch-'0';
        ch = getchar_unlocked();
    }
    return n;
}

int main(){
    long int tc,at,bt,a[100001];
    cin >> tc;
    while(tc--){
        at = inp(); bt=inp();
        long int sum=0,s=0,e=0,mst=0,msum=0;
        for(long int i=0; i<at; ++i) a[i] = inp();
        while(e < at){
            sum += a[e];
            while(sum > bt) sum -= a[s++];
            if(mst < e-s+1){
                mst = e-s+1;
                msum = sum;
            }
            else if(mst == e-s+1) msum = min(msum,sum);
            ++e;
        }
        cout << msum << " " << mst << "\n";
    }
}
