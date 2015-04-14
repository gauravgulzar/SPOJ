//
//  julka.cpp
//  
//
//  Created by Gaurav Gulzar on 20/02/15.
//
//

#include <iostream>
using namespace std;

int x[100],xi=-1,res[100],ri=-1;
void add(int *n,int *a, int ni, int ai){
    int t,carry=0,aic=ai;
    while(ni>=0 && ai>=0){
        t = n[ni--]+a[ai--]+carry;
        x[++xi] = t%10;
        carry = t/10;
    }
    while(ni>=0){
        t = n[ni--]+carry;
        x[++xi] = t%10;
        carry = t/10;
    }
    while(ai>=0){
        t = a[ai--]+carry;
        x[++xi] = t%10;
        carry = t/10;
    }
    if(carry)
        x[++xi] = carry;
    ai=aic;
}

void div(){
    int xic = xi, carry=0,t,flag=1;
    while(xic >= 0){
        t = carry*10 + x[xic--];
        res[++ri] = t/2;
        if(t/2==0 && flag)
            --xi;
        if(t/2 != 0)
            flag=0;
        carry = t%2;
    }
}

void sub(int *a, int ai){
    int b=0,ric=ri;
    while(ri>=0 && ai>=0){
        res[ri]=res[ri]-b-a[ai];
        if(res[ri] < 0){
            res[ri] += 10;
            b=1;
        }
        else
            b=0;
        --ri;--ai;
    }
    while(b){
        res[ri] -=1;
        if(res[ri] < 0) res[ri] = 9;
        else b = 0;
        --ri;
    }
    ri = ric;
}

void print(int *a, int n){
    int i=0;
    while(!a[i]) ++i;
    for(; i<=n; i++)
        cout << a[i];
    cout << "\n";
}

int main(){
    int t=10;
    int n[100],a[100],ni=-1,ai=-1,aic;
    while(t--){
        char c='\0';ni=-1,ai=-1,xi=-1,ri=-1;
        while((c=getchar()) != '\n' && c != '\0')
            n[++ni] = c-'0';
        c='\0';
        while((c=getchar()) != '\n' && c != '\0')
            a[++ai] = c-'0';
        
        add(n,a,ni,ai);
        div();
        print(res,ri);
        sub(a,ai);
        print(res,ri);
    }
}
