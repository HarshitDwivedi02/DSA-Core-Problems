#include<bits/stdc++.h>
#include<vector>
using namespace std;

int sortArr(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}

int main(){
    vector<int> arr1 = {2,5,8,3,1};
    vector<int> arr2 = {55,21,34,99,47};

    cout<<" The smallest element is" << sortArr(arr1) << endl;
}