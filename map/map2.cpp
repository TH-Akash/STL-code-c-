#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;

    }
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

}
