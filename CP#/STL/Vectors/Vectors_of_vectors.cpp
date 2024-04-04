#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
    cout << "size:" << v.size() << endl;
    for(int i = 0 ;i<v.size() ; ++i){
        cout << v[i] <<" ";
    }
    cout << endl;
}

int main(){
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i = 0 ;i< N ;++i){
        int n ;
        cin>>n;
        vector<int> temp ; //this is temporary vector where we store value
        for(int j = 0 ; j<n ; ++j){
            int x;
            cin>>x;
            // v[i].push_back(x); this is use when we use 30th line code instead of 19th line code
            temp.push_back(x);
        }
        v.push_back(temp); //v store a vector ,here temp is vector
    }

    v[0].push_back(10); //add ten in the v[0]
    // v.push_back(vector<int>()); this  is empty vector we push back  we also use this in place of temp
    
    for(int i = 0; i<v.size() ; ++i){
        printvec(v[i]);
    }
    cout << v[0][1];
}