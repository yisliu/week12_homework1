#include <iostream>
using namespace std;

int main() {
  int k, n;
  cin>>n>>k;
  int h = n/16;
  int l = n%16;
  if(l>=10){
    cout<<h<<char(l-10+'A');
  }
  else if(l<10){
    cout<<h<<char(l+')')
  }
}