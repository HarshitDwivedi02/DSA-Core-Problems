#include<bits/stdc++.h>
using namespace std;


int main(){
    int a=0,b=1,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        a=0;
        b=1;
        cout<<b<<"\t";
        for(int j=1;j<i;j++){
            int c = a+b;
            cout<<c<<"\t";
            a=b;
            b=c;
        }
        cout<<endl;
    } 
    return 0;
}

