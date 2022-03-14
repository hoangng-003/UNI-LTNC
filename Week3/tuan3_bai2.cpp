#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double num[n];
    
    int i=0;
    while(i<n){
        cin >> num[i];
        i++;
    }
    
    for(int a=0;a<n;a++){
        for(int b=a;b<n;b++){
            if(num[b]>num[a]){
                swap(num[b],num[a]);
            }
        }
    }
    
    
    for(int j=0;j<n;j++){
        cout << setprecision(2) << fixed << num[j] << " ";
    }
}