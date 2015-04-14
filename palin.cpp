//
//  palin.cpp
//  
//
//  Created by Gaurav Gulzar on 27/02/15.
//
//

#include <iostream>
#include <string>
using namespace std;
short int d[1000001];
int n;
void disp(int c){
    if(c==1){
        cout << c;
        d[n-1] = 1;
    }
    for(int i=0; i<n; i++)
        cout << d[i];
    cout << "\n";
}
void odd(){
    int c,i;
    for(i=n/2-1; i>=0; --i){
        if(d[i] < d[n-i-1]){
            c=1; break;
        }
        else if(d[i] > d[n-i-1]){
            c=0; break;
        }
    }
    if(i<0) c=1;
    for(int i=n/2;i>=0;--i){
        d[i]+=c;
        c = d[i]/10;
        d[i] = d[i]%10;
        d[n-i-1] = d[i];
    }
    disp(c);
}

void even(){
    int c,i;
    for(i=n/2-1; i>=0; --i){
        if(d[i] < d[n-i-1]){
            c=1; break;
        }
        else if(d[i] > d[n-i-1]){
            c=0; break;
        }
    }
    if(i<0) c=1;
    for(int i=n/2-1;i>=0;--i){
        d[i]+=c;
        c = d[i]/10;
        d[i] = d[i]%10;
        d[n-i-1] = d[i];
    }
    disp(c);
}

int main(){
    int t,in;
    cin >> t;
    char waste[50];
    fgets(waste,50,stdin);
    char c; string s;
    while(t--){
        n=0; c='\0';in=0;
        cin >> s;
        while((c = s[in++])!='\0')
            d[n++] = c-'0';
        if(n%2)
            odd();
        else
            even();
        //if(t!=0)
          //  cout << "\n";
    }
}
