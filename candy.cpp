//
//  candy.cpp
//  
//
//  Created by Gaurav Gulzar on 23/02/15.
//
//

#include <iostream>
using namespace std;

int main(){
    int c[10001],n;
    long int sum;
    cin >> n;
    while(n != -1){
        sum=0;
        for(int i=0; i<n; i++)
            cin >> c[i];
        for(int i=0; i<n; i++)
            sum += c[i];
        int cps = sum%n,m=0;
        if(!cps){
            cps = sum/n;
            for(int i=0; i<n; i++)
                if(c[i] < cps) m += cps-c[i];
        }
        else
            m = -1;
        cout << m <<"\n";
        cin >> n;
    }
}
