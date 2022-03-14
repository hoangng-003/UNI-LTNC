#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >>n;
    double input[n+1];
    for (int i=0;i<n;i++){
        cin >> input[i];
    }
    input[n]=0;
    
    double x;
    int index;
    cin >>x;
    for(int i=0;i<n;i++){
        if(input[i]<=x && input[i+1]>= x){
            index=i+1;
            break;
        }
    }
    
    for(int i=n;i>index;i--){
        input[i]=input[i-1];
    }
    input[index]=x;
    
    for(int i=0;i<=n;i++){
        cout << setprecision(2) << fixed << input[i] << " ";
    }
}