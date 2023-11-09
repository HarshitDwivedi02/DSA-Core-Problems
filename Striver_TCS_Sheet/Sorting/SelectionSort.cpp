#include<iostream>
using namespace std;



int selectionsort(int arr[] ,int n){
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=n;j>0;j--){
            if(arr[i]<arr[j]){
                continue;
            }
            else{
                swap(arr[i],arr[j]);
            }
        }

    }

}


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    



    return 0;

}