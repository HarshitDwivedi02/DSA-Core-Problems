#include<bits/stdc++.h>
#include<vector>
using namespace std;


int sortArr(vector<int>& arr){
     sort(arr.begin(),arr.end());
     return arr[0];
}

int main(){
   vector<int> arr1 = {3,6,9,1,7,2};
   vector<int> arr2 = {91,44,32,67,55};

   cout << "The smallest element is" << sortArr(arr1) << endl;
   cout << "The smallest element is" << sortArr(arr2) << endl;

}
