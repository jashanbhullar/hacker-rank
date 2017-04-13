/*
* Contributer : github.com/tanmayag8958
* Email : tanmayag8958@gmail.com
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,s,t,m,n,i,ca=0,co=0,d;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int p[m],q[n];
    for(i=0;i<m;i++)
        cin>>p[i];
    for(i=0;i<n;i++)
        cin>>q[i];
    for(i=0;i<m;i++)
        {
        d=p[i]+a;
         if( d>=s && d<=t )
            ca++;
    }
    for(i=0;i<n;i++)
        {
        d=q[i]+b;
        if( d>=s && d<=t )
            co++;
    }
    cout<<ca<<endl;
    cout<<co;
    return 0;
}
