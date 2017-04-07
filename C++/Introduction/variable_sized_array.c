/*
* Contributer : github.com/tanmayah8958
* Email : tanmayag8958@gmail.com
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,q,k,i,j;
    cin>>n;
    cin>>q;
    vector<vector<int> >a(n);
    for(int p=0;p<n;p++)
        { cin>>k;
         a[p].resize(k);
         for(int r=0;r<k;r++)
             cin>>a[p][r];
       }
    for(int s=0;s<q;s++)
        {
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
    return 0;
}
