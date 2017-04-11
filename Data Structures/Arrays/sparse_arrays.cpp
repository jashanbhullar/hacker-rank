#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,i,count = 0;
    cin>>n;
    vector<string> v(n);
    
    for(i = 0; i < n; i++){
        cin>>v[i];
    }
    
    cin>>q;
    string s;
    
    for(i = 0; i < q; i++){
        cin>>s;
        for(int j = 0; j < n; j++){
            if(s == v[j]){
                count++;
            }
        }
        cout<<count<<"\n";
        count = 0;
    }
    
    
    return 0;
}

