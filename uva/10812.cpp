#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>

using namespace std;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    long long int n;
    cin>>n;

    for(long long int i=0;i<n;i++){
        long long int a,b;
        cin>>a>>b;
        long long int x = (a+b)/2;
        long long int y = (a-b)/2;

        if(y<0 || ((a+b)%2!=0) || ((a-b)%2!=0)){
            cout<<"impossible"<<endl;
        }else{
            if(x>y){
                cout<<x<<" "<<y<<endl;
            }else{
                cout<<y<<" "<<x<<endl;
            }
        }
    }

    return 0;
}
