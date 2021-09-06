#include<bits/stdc++.h>
    using namespace std;
    void swap(int ar[], int a,int b){
        int temp=ar[a];
        ar[a]=ar[b];
        ar[b]=temp;
    }
    int  main(){
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

        for(int i=0;i<size;i++)
            for(int j=i+1;j<size;j++){
                if(arr[j]<=arr[i]){
                    swap(arr,i,j);

                }
            }
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";

    }