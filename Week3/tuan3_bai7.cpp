#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int sLength = s.length();
    
    int num=0,word=0,spec=0;
    
    for(int i=0;i<sLength;i++){
        
            if(s[i] >= 0 && s[i] <= 9 ){
                num++;
            }else if((s[i] >= 'a' && s[i] <= 'z') || (s[i]>='A' && s[i] <= 'Z')){
                word++;
            }else{
                spec++;
            }
        
    }
    
    cout << word << " " << num << " " << spec;
}