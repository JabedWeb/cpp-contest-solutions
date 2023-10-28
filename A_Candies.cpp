

#include <bits/stdc++.h>
using namespace std;
 int main()
{
     int t; cin>>t;
     
        while(t--){
         int n;cin>>n;
         int x;
         for(int i=0,target=0;target<=n;i++)
            {
            
             target=target+pow(2, i);
             x=n/target;
             if(n%target==0 && target!=1)
             {
                 cout<<x<<endl;
                 break;  
            }
             else if(target==n)
             {
                 cout<<n/n<<endl;
                 break;
              
             }
         }  
     }
 }
 