#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  long n{},count{},temp{};
  cin >> n;
   for(int i =2; i<=n/2; i++){
     if(n%i == 0 || n%i==1){
       temp = i*i;
     }
     else{
       if(n%temp == 0)continue;
       else count++;
     }
   }
  cout<< count-1;
}
