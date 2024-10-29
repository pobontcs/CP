#include<bits/stdc++.h>
using namespace std;

int main()
{
         int n,q;cin>>n>>q;
   string s;cin>>s;
   while(q--){

          int x,l,r;cin>>x>>l>>r;
          
          if (x==2){
            bool flag=0;
            string s2="";
            if(s[l-1]==')'){
              cout<<"No"<<endl;
              continue;
            }
            for(int i=l-1;i<r-1;i++){

                    s2+=s[i];

            }
            if(s[l-1]==')'){
              cout<<"No"<<endl;
              continue;
            }
            if(s2[s2.length()-1]==')')
            {
              cout<<"Yes"<<endl;
              continue;
            }
            else cout<<"No"<<endl;

            
          }
          if (x==1){
            swap(s[l-1],s[r-1]);
          }


}
}