#include<bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int,int>> v){
    cout << "size:" << v.size() << endl;
    for(int i = 0 ;i<v.size() ; ++i){
        cout << v[i].first << " "<< v[i].second << endl;
    }
}

int main(){
    vector<pair<int,int>> v ;
    printvec(v);
    int n ;
    cin>>n;
    for(int i =0 ; i<n ;++i){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y}); //make a pair using {x,y}; also use make_pair(x,y)
    }
    printvec(v);
}