/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    k=k%26;
    for(int i=0;i<n;i++)
        {
        if(isupper(s[i])){
            if(k+s[i]>90)
                s[i]=s[i]+k-26;
            else s[i]=s[i]+k;
        }
        if(islower(s[i])){
            if(s[i]+k>122)
                s[i]=s[i]+k-26;
            else s[i]=s[i]+k;
        }
    }
    cout<<s;
    return 0;
}
