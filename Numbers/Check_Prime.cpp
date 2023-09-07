#include<bits/stdc++.h>
using namespace std;


// Using a function 
bool isPrime(int n){
    if(n <=1){
        return false;
    }
    for(int i=2;i<sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;

}

int main(){
    int n;
    cin>>n;
    cout<< isPrime(n) << endl;
   
}



// Without using function 

// int main(){
//     int n;
//     cin>>n;
//     bool isPrime = 1;
//     for(int i=2;i<n;i++){
//         if(n%i == 0){
//             // cout << "Not a prime" << endl;
//             isPrime = 0;
//             break;
//         }
//     }
//     if(isPrime == 0){
//         cout << "Not a prime" << endl;
//     }
//     else{
//         cout << "It is prime" << endl;
//     }
// }

