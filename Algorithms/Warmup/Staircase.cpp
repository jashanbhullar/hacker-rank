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
    for(int a=0;a<n;a++){
        for(int s=n-1;s>a;s--)
            cout<<" ";
            for(int b=0;b<=a;b++){
                cout<<"#";
    }
    cout<<"\n";
    }
    return 0;
}
