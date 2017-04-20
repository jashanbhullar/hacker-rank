#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int i = 0;
    string s;
    cin>>s;
    
    while(i < s.length()){
        if(s[i] == s[i+1]){
            s.erase(i,2);
            i = 0;
        }else{
            i++;
        }
        
    }
    if(s.length() == 0){
        cout<<"Empty String";
    }else{
        cout<<s;
    }
    return 0;
}

