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
    int n,count=0;
    cin>>n;
    char step[n];
    cin>>step;
    int sealevel =0;
    for(int i=0;i<n;i++)
        {
        if(step[i]=='U')
            {
               if(sealevel==-1)
                   count++;
               sealevel++;
        }
        else if(step[i]=='D')
            sealevel--;
            
    }
    cout<<count;
    return 0;
}
