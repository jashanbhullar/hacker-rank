/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com

* Contributer : github.com/tanmayag8958
* Email : tanmayag8958@gmail.com
*/

#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int s;
    if((n-p)>=p)
        s=(p/2);
    if((n-p)<p)
        s=((n-p)/2);
    return s;
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
