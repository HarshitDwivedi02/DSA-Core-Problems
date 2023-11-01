#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];
}


int main(){
    vector<int> arr1 = {2,41,3,55,10};
    vector<int> arr2 = {54,32,21,99,30};

    cout<<"The Largest number is: " << sortArr(arr1) << endl;
    cout <<"The Largest number is: " << sortArr(arr2);
}