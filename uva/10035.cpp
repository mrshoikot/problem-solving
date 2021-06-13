#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int diff(int a,int b){
    return a>b ? a-b : b-a;
}

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int a,b,res,c;

    while(1){
        cin>>a>>b;
        if(a==0 && b==0){break;}
        res = 0,c=0;
        while(a>0 || b>0){
            int temp = a%10 + b%10 + c;
            if(temp>9){
                res++;
                c=1;
            }else{
                c=0;
            }
            a /= 10;
            b /= 10;
        }
        if(res == 0){
            cout<<"No carry operation."<<endl;
        }else if(res==1){
            cout<<"1 carry operation."<<endl;
        }else{
            cout<<res<<" carry operations."<<endl;
        }
    }

    return 0;
}
