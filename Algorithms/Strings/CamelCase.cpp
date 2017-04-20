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
    string s;
    int count=1;
    cin >> s;
    for(int i=0;i<s.length();i++)
        if(isupper(s[i]))
        ++count;
    cout<<count;
    return 0;
}
