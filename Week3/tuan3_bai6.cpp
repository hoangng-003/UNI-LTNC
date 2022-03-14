#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    
    int count=0,sLength = s.length();
    for (int i = 1; i < sLength; i++){
        
        if (s[i] != ' ' && s[i-1] == ' ') {
        count++;
        }
    }
    
    cout << count+1;
}