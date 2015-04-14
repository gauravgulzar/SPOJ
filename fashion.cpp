//
//  fashion.cpp
//  
//
//  Created by Gaurav Gulzar on 26/02/15.
//
//

#include <iostream>
using namespace std;

int m[11],w[11],mi,wi;
int calcSum(){
    mi = wi = 10;
    int mt,wt,s=0;
    /*for(int i=0; i<11; i++)
        cout << m[i] << " ";
    cout << "\n";
    for(int i=0; i<11; i++)
        cout << w[i] << " ";
    cout << "\n";
    */
    while(mi>=0 && wi>=0){
        mt = wt = 0;
        while(mi>=0 && !m[mi]) --mi;
        while(wi>=0 && !w[wi]) --wi;
        if(mi >= 0) mt = m[mi]--;
        if(wi >= 0) wt = w[wi]--;
        if(mi>=0 && wi>=0)
            s += mi*wi;
       // cout << mi << " " << wi << "\n";
    }
    return s;
}

int main(){
    int t,n;
    cin >> t;
    for(int i=0; i<11; i++)
        m[i] = w[i] = 0;
    while(t--){
        cin >> n;
        int tmp;
        for(int i=0; i<n; i++){
            cin >> tmp;
            ++m[tmp];
        }
        for(int i=0; i<n; i++){
            cin >> tmp;
            ++w[tmp];
        }
       // cout << "there";
        cout << calcSum() << "\n";
    }
    return 0;
}
