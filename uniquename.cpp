#include<bits/stdc++.h>
using namespace std;
int main(){

    string name;
    bool flag=true;
    getline(cin,name);
    for(int i=0;i<name.size()/2;i++){
        if(name[i]!=name[name.size()-1-i]){
            cout<<"ohh fuck"<<endl;
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"pallindrome as fuck";
    }
  
}