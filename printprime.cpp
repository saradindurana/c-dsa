#include<iostream>
#include<math.h>
    using namespace std;
    bool isPrime(int num){
        for(int j=2;j<=sqrt(num);j++){
            if(num%j==0){
                return false;
            }
        }
        return true;
    }
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}