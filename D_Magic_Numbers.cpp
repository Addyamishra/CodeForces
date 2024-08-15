#include <bits/stdc++.h>
using namespace std;
vector<string> arr;
int get(string str,int ind,int smaller,string temp,int m,char d){
if(ind>=str.length()){
  if(stoi(temp)%m==0) {
       arr.push_back(temp);
       return 1;
  }
  return 0;
}
int res=0;
if(ind%2!=0) res+=get(str,ind+1,smaller,temp+string(1,d),m,d);
else{
       if(smaller){
         for(int i=0;i<=9;i++){
              if(i==(d-'0')) continue;
           res+=get(str,ind+1,1,temp+string(1, '0' + i),m,d);
         }
       }
       else{
           int lim=str[ind]-'0';
           for(int i=0;i<lim;i++) {
              if(i==(d-'0')) continue;
              res+=get(str,ind+1,1,temp+string(1, '0' + i),m,d);
           }
           res+=get(str,ind+1,0,temp+string(1, str[ind]),m,d);

       }
}
return res;

}
int main() {
     int m,d;
     cin>>m>>d;
     int s,e;
     cin>>s>>e;
     string str1=to_string(e);
     string str2=to_string(s-1);
      char de='0'+d;
//      int ans1=get(str1,0,0,"",m,de);
     int ans2=get(str2,0,0,"",m,de);
//      cout<<ans1-ans2<<endl;
for(string str:arr) cout<<str<<endl;
       return 0;
}