#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int sLength = s.length();
    
    for(int i=0;i<sLength;i++){
        if(s[i] == ' ' && s[i+1] == ' '){
            for(int j=i+1;j<sLength-1;j++){
                s[j]=s[j+1];
            }
        }
    }
    
    cout << s;
}