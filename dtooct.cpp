#include<iostream>
#include<math.h>
#include<vector>
    using namespace std;


int main(){
    int m;
    cin>>m;
    int count=1;
    int oct=0,rem;
    while(m!=0){
        rem=m%8;
        oct=oct+count*rem;
        count=count*10;
        m=m/8;
    }
cout<<oct;
return 0;

}