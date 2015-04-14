//
//  ap2.cpp
//  
//
//  Created by Gaurav Gulzar on 11/03/15.
//
//

#include <iostream>
using namespace std;

void fun(long long ta, long long tb, long long s){
    long long n = (2*s)/(ta+tb);
    long long d = (tb-ta)/(n-5);
    long long a=ta-2*d;
    cout << n << "\n";
    while(n--){
        cout << a << " ";
        a += d;
    }
    cout << "\n";
}

int main(){
    int t;
    long long ta,tb,s;
    cin >> t;
    while(t--){
        cin >> ta >> tb >> s;
        fun(ta,tb,s);
    }
}
