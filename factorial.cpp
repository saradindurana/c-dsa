#include<iostream>
#include<math.h>
    using namespace std;
    void fact(int n){
        int fact=1;
        for(int i=n;i>0;i--){
            fact=fact*i;
        }
        cout<<fact;
    }

int main(){
    int m;
    cin>>m;
    fact(m);
    return 0;

}