#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[n];
    }
    
    for(int i=0;i<n;i++){
        cin >> b[n];
    }
    
    int count=0;
    
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            count++;
        }
    }
    
    if(count!=0){
        cout << "NO";
    }else{
        cout << "YES";
    }
}