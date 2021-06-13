#include<iostream>
#include<cstdio>

using namespace std;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int N,M;
    cin>>N>>M;

    int A[1000000];

    for(int t=0;t<N;t++){
        cin>>A[t];
    }

    int s;

    for(int i=0;i<M;i++){
        cin>>s;

        int set = 0;

        for(int t=0;t<=N;t++){
            if(A[t] >= s){
                if(i==0){
                    cout<<t+1;
                }else{
                    cout<<" "<<t+1;
                }
                A[t] -= s;
                set = 1;
                break;
            }
        }

        if (set == 0){
            if(i==0){
                cout<<0;
            }else{
                cout<<" "<<0;
            }
        }

    }

    return 0;
}
