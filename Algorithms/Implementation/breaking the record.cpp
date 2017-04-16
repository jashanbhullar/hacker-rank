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
    int n,counthigh=0,countlow=0;
    cin>>n;
    int score[n],high[n],low[n];
    for(int i=0;i<n;i++)
        {
        cin>>score[i];
    }
    high[0]=low[0]=score[0];
    for(int i=1;i<n;i++)
        {
        if(score[i]>high[i-1])
            {
            high[i]=score[i];
            counthigh++;
        }
        else
            high[i]=high[i-1];
        if(score[i]<low[i-1])
            {
            low[i]=score[i];
            countlow++;
        }
        else
            low[i]=low[i-1];
    }
    cout<<counthigh<<" "<<countlow;
    return 0;
}
