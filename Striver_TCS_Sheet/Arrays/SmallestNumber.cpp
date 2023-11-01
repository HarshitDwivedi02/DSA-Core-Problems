#include<bits/stdc++.h>
using namespace std;

// int sortArr(vector<int>& arr){
//     sort(arr.begin(),arr.end());
//     return arr[0];
    
// }
int SmallestElement(int arr[], int n) {
 
  int min = arr[0];
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}


int main(){
    int arr1[] = {2,41,3,55,10};
    
    int arr2[] = {54,32,21,99,30};
    int n = 5;

    cout<<"The smallest number is: " << SmallestElement(arr1 , n) << endl;
    cout <<"The smallest number is: " << SmallestElement(arr2 , n);
}