#include<bits/stdc++.h>
using namespace std;

bool check(string s, string t){
    if(s==t) return true;
    int i=0,j=0;
    for(;i<s.size();i++){
        if (t[j]==s[i]) j++;
        if (j==t.size()) return true;
    }
    return false;
}

string func(string s,string t){
    if(s==""||t==""||check(s,t)==false) return "";
    return "";
}

int main(void){
    string s = "ASDFGASD",t="ADF";
    cout<< func(s,t);
}