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
    int n,j,av,sum=0,i;
    cin >>n>>j;
    int a[n];
    for( i=0;i<n;i++){
        cin>>a[i];
    if(i!=j)
        sum+=a[i];}
    cin>>av;
    if(av==sum/2)
        cout<<"Bon Appetit";
    else
        cout<<a[j]/2;
      return 0;
}
