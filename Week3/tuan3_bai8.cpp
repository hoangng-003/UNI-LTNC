#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int sLength = s.length();
    
    for(int i=0;i<sLength;i++){
        if(s[i]=='Z' && s[i+1]=='u' && s[i+2]=='e' && s[i+3]=='s'){
            swap(s[i+1],s[i+2]);
        }
    }
    
    cout << s;
}