//
//  nsteps.cpp
//  
//
//  Created by Gaurav Gulzar on 18/02/15.
//
//

#include <iostream>
using namespace std;

int main(){
    int t,x,y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if(x < y){
            cout << "No Number\n";
            continue;
        }
        if(!(x%2) && !(y%2) && (y==x || y==x-2))
            cout << x+y << "\n";
        else if(x%2 && y%2 && (y==x || y==x-2))
            cout << x+y-1 << "\n";
        else
            cout << "No Number\n";
    }
}
