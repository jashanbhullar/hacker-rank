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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int l;
    cin>>l;
    int a[l][4];
    for(int i=0;i<l;i++)
        for(int j=0;j<4;j++)
            cin>>a[i][j];
    for(int i=0;i<l;i++)
        cout<<2*a[i][2]-a[i][0]<<" "<<2*a[i][3]-a[i][1]<<"\n";

        return 0;
}
