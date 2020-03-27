#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

// optimized

int count=0;
int data[1000000] = {0};

int CycleCount(int n){
    ::count++;
    if(n==1){
        int res = ::count;
        ::count = 0;
        return res;
    }
    
    if(n<1000000){
        if(::data[n] != 0){
            int res = ::count+::data[n]-1;
            ::count = 0;
            return res;
        }
    }

    if(n%2 != 0){
        return CycleCount(3*n+1);
    }else{
        return CycleCount(n/2);
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

            if(i<1000000)
                data[i] = thiscc;
                
            if(thiscc>max){
                max = thiscc;
            }
        }
        cout<<a<<" "<<b<<" "<<max<<endl;
    }

    return 0;
}
