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

    int T;
    cin>>T;

    for(int t=1;t<=T;t++){
        int f;
        long long int total=0;
        cin>>f;
        for(int i=0;i<f;i++){
            long long int area, animal, env;
            cin>>area>>animal>>env;
            total += area*env;
        }
        cout<<total<<endl;
    }

    return 0;
}
