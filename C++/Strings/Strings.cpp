/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
   string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size();
  cout<<"\n"<<a<<b;
    char c;
    c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<"\n"<<a<<" "<<b;
    return 0;
}
