#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int sLength = s.length();
    
    int count=0;
    
    if(s[0]>=0 && s[0] <=9){
        count++;
    }
    
    if(sLength<6 || sLength >15){
        count++;
    }
    
    for(int i=0;i<sLength;i++){
        if((s[i] < 'A' && s[i] > 9) || (s[i]>'Z' && s[i]<'a') || s[i] > 'z' || s[i] < 0 ){
            count++;
        }
    }
    
    if(count==0){
        cout << "Valid username.";
    }else{
        cout << "Invalid username.";
    }
    
    
}