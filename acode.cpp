//
//  acode.cpp
//  
//
//  Created by Gaurav Gulzar on 09/03/15.
//
//

#include <iostream>
using namespace std;

unsigned long int fun(string s){
    int l=s.length();
    unsigned long int a[l+1];
    a[l] = 1;
    for(int i=l-1; i>=0; --i){
        s[i]=='0'? a[i]=0:a[i] = a[i+1];
        if(i+1<l && s[i]!='0' && (s[i]-'0')*10+(s[i+1]-'0') <= 26)
            a[i] += a[i+2];
    }
    return a[0];
}

int main(){
    string s;
    while(1){
        cin >> s;
        if(s.length()==1 && s[0] == '0') break;
        cout << fun(s) << "\n";
    }
    return 0;
}
