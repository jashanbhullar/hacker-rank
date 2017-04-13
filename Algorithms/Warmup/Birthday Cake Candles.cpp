/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,max=0,count=0;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
        if(max<=height[height_i])
           max=height[height_i];
           }
    for(int i=0;i<n;i++)
        if(height[i]==max)
        count++;
    cout<<count;
    return 0;
}
