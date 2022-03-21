#include<algorithm>
int maxThree(int a, int b, int c){
    int num[3];
    num[0]=a;
    num[1]=b;
    num[2]=c;
    sort(num,num+3);
    
    return num[2];
    
}