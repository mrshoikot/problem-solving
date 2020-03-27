#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

// 0.18s

int count=0;

int CycleCount(int n){
    ::count++;
    if(n==1){
        int res = ::count;
        ::count = 0;
        return res;
    }else{
        if(n%2 != 0){
            return CycleCount(3*n+1);
        }else{
            return CycleCount(n/2);
        }
    }
}

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int a,b;

    while(cin>>a>>b){
        int max=0,x,y;

        if(a>b){
            y=a;x=b;
        }else{
            y=b;x=a;
        }

        for(int i = x;i<=y;i++){
            int thiscc = CycleCount(i);
            if(thiscc>max){
                max = thiscc;
            }
        }
        cout<<a<<" "<<b<<" "<<max<<endl;
    }

    return 0;
}
