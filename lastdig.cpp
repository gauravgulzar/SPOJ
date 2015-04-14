//
//  lastdig.cpp
//  
//
//  Created by Gaurav Gulzar on 26/02/15.
//
//

#include <iostream>
#include <cmath>
using namespace std;
unsigned long long int b;
int main(){
    int t,a,l;
    cin >> t;
    while(t--){
        cin >> a >> b;
        a=a%10;
        if(b==0){ cout << 1 << "\n"; continue;}
        if(a==0 || a==1 || a==5 || a==6)
            l = a;
        else if(a==4)
            l = b%2 ? 4:6;
        else if(a==9)
            l = b%2 ? 9:1;
        else {
            if((b=b%4)==0){
                if(a==2 || a==8) l = 6;
                else l = 1;
            }
            else l = (int)pow(a,b)%10;
            
        }
        cout << l << "\n";
    }
}
