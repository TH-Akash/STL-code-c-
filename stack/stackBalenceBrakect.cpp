#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>symbol={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
string isBalanced(string s){
    stack<char>st;
    for(char bracket:s){
        if(symbol[bracket]<0){
            st.push(bracket);
        }

    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<isBalanced<<endl;

    }
 }
