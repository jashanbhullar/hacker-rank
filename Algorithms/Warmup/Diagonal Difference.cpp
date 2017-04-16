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
    int n,s=0,t=0;
    cin >> n;
    int a[n][n];
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
          cin >> a[i][j];
          if(i==j)
          s+=a[i][j];
          if((i+j)==(n-1))
          t+=a[i][j];
       }
    }

    cout<<abs(s-t);
    return 0;
}
