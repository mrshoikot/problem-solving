#include<iostream>
#include<cstdio>

using namespace std;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int T;
    cin>>T;

    for(int t=1;t<=T;t++){
        
        int n,now,old,s=0,l=0;
        cin>>n;

        for(int i=0;i<n;i++){
            if(i==0){
                cin>>now;
            }else{
                old = now;
                cin>>now;
                if(old>now){
                    l++;
                }else if(old<now){
                    s++;
                }
            }
        }

        cout<<"Case "<<t<<": "<<s<<" "<<l<<endl;


    }

    return 0;
}
