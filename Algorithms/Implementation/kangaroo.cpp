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
    int x1,v1,x2,v2,i,j,p,q;
    cin>>x1>>v1>>x2>>v2;
    p=x1;
    q=x2;
    if(x2>x1&&v2>v1)
        cout<<"NO";
    else
        {
    for(i=1;i<10000;i++)
        {
        p+=v1;
        q+=v2;
        if(p==q)
            {
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
    }
    return 0;
}
