#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout << s[s.size()-1];
    // this above cout print the last character of the string number 
    cout<< (int)s[s.size()-1];
    // this above int print the asciii value of the last digit 
    int last_digit = s[s.size()-1] - '0';
    cout << last_digit;
}