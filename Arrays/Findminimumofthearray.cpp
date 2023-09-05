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

    cout<<" The smallest element is " << sortArr(arr1) << endl;
    cout<<" The smallest element is " << sortArr(arr2) << endl;
}

// #include <iostream>
// #include <bits/stdc++.h>
 
// using namespace std;
// int SmallestElement(int arr[], int n) {
 
// //   int min = arr[0];
//   for (int i = 0; i < n; i++) {
//     if (min > arr[i]) {
//       min = arr[i];
//     }
//   }
//   return min;
// }
// int main() {
//   int arr1[] = {2,5,1,3,0};
//   int n = 5;
//   int min = SmallestElement(arr1, n);
//   cout << "The smallest element in the array is: " << min << endl;
 
//   int arr2[] =  {8,10,5,7,9};
//   n = 5;
//   min = SmallestElement(arr2, n);
//   cout << "The smallest element in the array is: " << min;
//   return 0;
// }