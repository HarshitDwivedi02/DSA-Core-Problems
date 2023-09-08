#include <iostream>
using namespace std;


// without using a function or recurssion
// int main(){
//     int n;
//     cin >> n;

//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     cout << fact << endl;
// }


// Using Recurssion

int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    cin >> n;

    cout << "factorial is " << factorial(n) <<  endl;
}
