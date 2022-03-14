#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    
    int count =0;
    for (int k = 0; k < n/2; k++) {
        if ( array[k] != array[n-1-k] ){
            count++;
        }
    }
    
    if(count !=0){
        cout << "Asymmetric array.";
    }else{
        cout << "Symmetric array.";
    }
}