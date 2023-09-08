#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    if(n % 400 == 0){
        cout <<"This is a leap year" << endl;
    }
    else if(n % 100 == 0){
        cout << " Not a leap year " << endl;
    }
    else if(n % 4 == 0){
        cout << "This is a leap year" << endl;
    }
    else{
        cout << " Not a leap year " << endl;
    }
}



// Program using logical operators 
#include <iostream>
using namespace std;

int main() {

  int year;

  cout << "Enter a year: ";
  cin >> year;

  // if year is divisible by 4 AND not divisible by 100
  // OR if year is divisible by 400
  // then it is a leap year
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    cout << year << " is a leap year.";
  }
  else {
    cout << year << " is not a leap year.";
  }

  return 0;
}