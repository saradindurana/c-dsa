#include<iostream>
#include<math.h>
using namespace std;
void fibonacci(int num){
    int t1=0;
    int t2=1;
    int nextTerm;
    for(int i=0;i<num;i++){
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}

    int main(){
        int n;
        cin>>n;
        fibonacci(n);
        return 0;
    }