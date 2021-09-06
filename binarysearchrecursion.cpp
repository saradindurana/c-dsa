#include<bits/stdc++.h>
using namespace std;
void binarysearch(int arr[],int size, int key,int start,int last, int mid){

    if(key==arr[mid])
    cout<<"Found at index:"<<mid;
    else if(key<arr[mid]){
    last=mid;
    mid=(start+last)/2;    
    binarysearch(arr,size,key,start,last,mid);
    }
    else if(key>arr[mid]){
    start=mid+1;
    mid=(start+last)/2;    
    binarysearch(arr,size,key,start,last,mid);
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
        int start=0;
        int last=size-1;
        int mid=(start+last)/2;
        binarysearch(arr,size,key,start,last,mid);

    }