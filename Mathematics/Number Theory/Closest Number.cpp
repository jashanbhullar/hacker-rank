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


int main() {
    int t,a,b,x,c;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>x;
        c=pow(a,b);
        if(c%x<=x/2)
            cout<<c-c%x<<endl;
        else
            cout<<c-c%x+x<<endl;
    }

    return 0;
}
