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
    int n,k,countf=0,countb=0;
    cin>>n>>k;
    for(int i=1;i<=k;i+=2)
        {
        if(i>=k)
            break;
        else
            countf++;
    }
    for(int i=n;i>=k;i-=2)
        {
        if( i<=k || i==k+1 )
            break;
        else
            countb++;
    }
    if(countf>countb)
    cout<<countb;
    else
        cout<<countf;
    return 0;
}
