#include<bits/stdc++.h>
using namespace std;
int main(){
   unsigned long long int mspeed,carspeed,t,car,ans=0;
   cin>>t;
   while(t--){
    cin>>car;
    mspeed=INT_MAX;
    while(car--){
    cin>>carspeed;
    if(mspeed>=carspeed)
      {
      ans++;
      mspeed=carspeed;
      }
    }
    cout<<ans<<endl;
    ans=0;
   }
return 0;

}



