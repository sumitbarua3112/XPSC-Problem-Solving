#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a,b;
   cin>>a>>b;
   if(a==b)
   {
     cout<<a+b<<endl;
   }
   else{
   int c=max(a,b);
   int ans=c+c-1;
   cout<<ans<<endl;
   }
  return 0;
}

