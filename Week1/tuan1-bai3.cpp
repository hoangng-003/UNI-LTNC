#include<iostream>
using namespace std;

int main(){
    int n=3;
    
    for (int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout << " ";
        }
        for(int k=2*i-1;k>0;k--){
            cout << "*";
        }
        
        cout <<endl;
    }
    
    return 0;
}