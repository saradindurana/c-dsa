#include<iostream>
#include<math.h>
using namespace std;


    int main(){
       int decim;
       cin>>decim;
       int rem,i=1;
       char hex[50];
       int c=0;
       while(decim!=0){
           rem=decim%16;
           if(rem<10)
           hex[i++]=rem+48;
           else
           hex[i++]=rem+55;
           decim=decim/16;
           c++;
       }
       for(int i=c;i>0;i--){
           cout<<hex[i];
       }
        return 0;

    }