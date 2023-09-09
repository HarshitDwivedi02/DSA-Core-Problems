#include<bits/stdc++.h>
using namespace std;

int main(){
    float base;
    cin >> base;
    int exponent;
    cin>> exponent;
    //assign 1 to result otherwise garbage value will take place 
    float result =1;

    while(exponent!=0){
        result = result*base;
        exponent--;
    }
    cout << result << endl;
}



// Can be calculated using pow function
//pow(base , exponent);