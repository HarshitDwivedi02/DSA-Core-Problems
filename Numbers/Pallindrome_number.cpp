#include<bits/stdc++.h>
using namespace std;

int main(){
    int rem;
    int reverse =0;
    int num;
    cin>>num;
    int n = num;
    while(num!=0){
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
    }
    // cout << reverse << endl;
    // cout << num << endl;
    if(n== reverse){
        cout << "Pallindromic number" << endl;
    }
    else{
        cout << "Not a pallindromic number" << endl;
    }
    return 0;
}