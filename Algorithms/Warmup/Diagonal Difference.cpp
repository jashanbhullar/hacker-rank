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
    int n,s,t;
    cin >> n;
    int a[n][n];
    for(int i = 0;i < n;i++){
       for(int j = 0;j < n;j++){
          cin >> a[i][j];
       }
    }
    s=a[0][0]+a[1][1]+a[2][2];
    t=a[2][0]+a[1][1]+a[0][2];
    cout<<abs(s-t);
    return 0;
}
