#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,string>> p(n);
        
        for(int i=0;i<n;i++){
            cin>>p[i].first>>p[i].second;
        }
        sort(p.begin(),p.end());
        
        int skill1=INT_MAX;
        int skill2=INT_MAX;
        int fulSkill=INT_MAX;

        for(int i=0;i<n;i++){
            if(p[i].second[0]=='1' && p[i].second[1]=='1'){
                fulSkill=min(fulSkill,p[i].first);
            }
            if(p[i].second[0]=='1'){
                skill1=min(skill1,p[i].first);
            }
            if(p[i].second[1]=='1'){
                skill2=min(skill2,p[i].first);
            }
        }
        int ans=skill1+skill2;
        if(fulSkill!=INT_MAX && ans!=INT_MAX){
            ans=min(ans,fulSkill);
        }
        else if(fulSkill!=INT_MAX){
            ans=fulSkill;
        }
        else if(skill1==INT_MAX || skill2==INT_MAX){
            ans=-1;
        }
        cout<<ans<<endl;
    
}
    return 0;
}