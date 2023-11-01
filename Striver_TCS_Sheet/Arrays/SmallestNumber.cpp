#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[0];
    
}


int main(){
    vector<int> arr1 = {2,41,3,55,10};
    vector<int> arr2 = {54,32,21,99,30};

    cout<<"The smallest number is: " << sortArr(arr1) << endl;
    cout <<"The smallest number is: " << sortArr(arr2);
}