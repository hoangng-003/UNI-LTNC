#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    
    int i=0;
    while(i<n){
        cin >> num[i];
        i++;
    }
    
    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){
            if(num[b]==num[a]){
                num[b] = 0;
            }
        }
    }
    
    for(int j=0;j<n;j++){
        if(num[j]!=0){
            cout << num[j] << " ";
        }
    }
}