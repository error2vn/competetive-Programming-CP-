#include<bits/stdc++.h>
using namespace std;
  void swap(int &a , int &b){
        int temp = a;
        a = b;
        b =temp;

    }

int main(){
    int a;
    int b;
    cin>>a>>b;
    cout << a << " " << b << endl;
    swap(a,b);
    cout << a << " " << b <<  endl;
}