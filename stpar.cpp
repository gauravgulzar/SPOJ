//
//  stpar.cpp
//  
//
//  Created by Gaurav Gulzar on 11/03/15.
//
//

#include <iostream>
using namespace std;
#include <queue>
#include <stack>
//queue<int> q;
//stack<int> s;

void check(queue<int> &q,stack<int> &s){
    int minc=1;
    while(!q.empty()){
        if(minc==q.front()){
            ++minc; q.pop();
        }
        else if(!s.empty() && minc==s.top()){
            ++minc;
            s.pop();
        }
        else{
            if(s.empty() || (q.front() < s.top())){
                s.push(q.front());q.pop();
            }
            else break;
        }
        
    }
    while(!s.empty() && minc == s.top()){
        s.pop();
        ++minc;
    }
    if(s.empty())
        cout << "yes\n";
    else cout << "no\n";
}

int main(){
    int n,t;
    queue<int> q;
    stack<int> s;
    cin >> n;
    while(n!=0){
        for(int i=0; i<n; i++){
            cin >> t;
            q.push(t);
        }
        check(q,s);
        cin >> n;
        queue<int>().swap(q);
        stack<int>().swap(s);
    }
    return 0;
}