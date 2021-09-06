#include<bits/stdc++.h>
using namespace std;
void binarysearch(int arr[],int size, int key){
    int s=0;
    int e=size;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            cout<<"Found at index:"<<mid;
            break;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
            else if(key<arr[mid]){
            e=mid-1;
        }
    }

}
    int main(){
        
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
    
        binarysearch(arr,size,key);
        return 0;
    }