//
//  ngm.cpp
//  
//
//  Created by Gaurav Gulzar on 16/03/15.
//
//

#include <iostream>
using namespace std;

int main(){
    unsigned long int n;
    cin >> n;
    if(n%10){
        cout << "1\n";
        cout << n%10 << "\n";
    }
    else
        cout << "2\n";
}
