#include<bits/stdc++.h>
using namespace std;

// int sortArr(vector<int>& arr){
//     int n = arr.size();
//     sort(arr.begin(),arr.end());
//     return arr[n-1];
// }

int largestelement(int arr[] , int n){
   int maxi = arr[0];
   for(int i=0;i<n;i++){
    if(arr[i]>maxi){
        maxi = arr[i];
    }
   }
   return maxi;
}

int main(){
    int arr1[] = {2,41,3,55,10};
    int arr2[] = {54,32,21,99,30};
    int arr3[] = {33,1,76,67,11};
    int arr4[] = {91,20,44,5,117};
    int n = 5;

    cout<<"The Largest number is: " << largestelement(arr1 , n) << endl;
    cout<<"The Largest number is: " << largestelement(arr2 , n) << endl;
    cout<<"The Largest number is: " << largestelement(arr3, n) << endl;
    cout<<"The Largest number is: " << largestelement(arr4, n) << endl;

}






