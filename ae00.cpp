//
//  ae00.cpp
//  
//
//  Created by Gaurav Gulzar on 27/02/15.
//
//

#include <iostream>
using namespace std;

int nrec(int n){
    int r=n;
    for(int i=2; i*i<=n; i++)
        r += n/i - i+1;
    return r;
}

int main(){
    int n;
    cin >> n;
    cout << nrec(n);
}
