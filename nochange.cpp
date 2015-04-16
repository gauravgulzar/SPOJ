//
//  nochange.cpp
//  
//
//  Created by Gaurav Gulzar on 15/04/15.
//
//

#include <iostream>
using namespace std;
#include <cstring>
int main(){
    int n, a[10],k;
    cin >> n >> k;
    for(int i=0; i<k; ++i)
        cin >>a[i];
    for(int i=1; i<k; ++i) a[i] = a[i]+a[i-1];
    bool sum[n+1];
    memset(sum,0,sizeof(bool)*(n+1));
    sum[0]=1;
    for(int i=1; i<=n; ++i)
        for(int j=0; j<k; ++j) if(i-a[j]>=0 && !sum[i]) sum[i]=sum[i-a[j]];
    //for(int i=0; i<n+1; ++i) cout << sum[i] << " ";
    if(sum[n]) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
