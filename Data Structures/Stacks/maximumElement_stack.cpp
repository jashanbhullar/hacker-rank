#include <cmath>
#include <cstdio>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
       
    int n; cin>>n;
      stack<int> s;

      int value;
    while(n--){
        int type;
       cin>>type;
      if(type ==1){
            cin>>value;
            if (s.empty()) {
                s.push(value);
            }
            else {
                s.push(max(value, s.top()));
            }
      }else if(type==2 ){
          if (!s.empty()) {
                s.pop();
            }
      }else if(type== 3){
            
            cout<<s.top()<<"\n";
      }
            
    }
    return 0;
}
