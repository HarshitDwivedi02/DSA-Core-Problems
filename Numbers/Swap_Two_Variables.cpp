//// Swapping two variable using an extra variable

#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int a;
//     int b;
//     int temp;

//     cin >> a >> b;
    
//     temp = a;
//     a = b;
//     b = temp; 

//     cout << a << b << endl;
//     return 0;
// }



//// Swapping two variable without using an extra variable

int main(){
    int a;
    int b;
    
    cin >> a >> b;
    a = a+b;
    b = a-b;
    a = a-b;

    cout << a << b << endl;

}