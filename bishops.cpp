//
//  bishops.cpp
//  
//
//  Created by Gaurav Gulzar on 17/03/15.
//
//

#include <iostream>
using namespace std;

void sub(int *a,int ai){
    a[ai] = a[ai]-1;
    while(ai>=0 && a[ai]<0){
        a[ai]+=10;
        --a[ai-1];--ai;
    }
}

void mul(int *a, int ai){
    int c=0,t,aic=ai;
    while(ai>=0){
        t = a[ai]*2+c;
        a[ai] = t%10;
        c = t/10;
        --ai;
    }
    int i=0;
    if(c>0) cout << c;
    else while(a[i] == 0) ++i;
    while(i <= aic) cout << a[i++];
    cout << "\n";

}

int main(){
    string s;
    char c='\0';int in=0,n=-1;
    int d[110];
    while(cin>>s){
        if(s.length()==1 && (s[0]=='1' || s[0]=='0')){
            cout << s[0]<<"\n";
            continue;
        }
        while((c = s[in++])!='\0')
            d[++n] = c-'0';
        sub(d,n);
        mul(d,n);
        in=0; n=-1;
    }
}
