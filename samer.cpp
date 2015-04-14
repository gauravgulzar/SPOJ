//
//  samer.cpp
//  
//
//  Created by Gaurav Gulzar on 18/02/15.
//
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n){
        cout << n * (n+1) * (2*n+1) / 6 << "\n";
        cin >> n;
    }
}