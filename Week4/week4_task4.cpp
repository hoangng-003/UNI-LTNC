long long int factorial(int n){
    // while(n>1){
    //     return n*factorial(n-1);
    // }
    
    long long int sum=1;
    
    for(int i=2;i<=n;i++){
        sum*=i;
    }
    return sum;
}