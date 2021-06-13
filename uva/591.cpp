#include<iostream>
#include<string>
#include<cstdio>


using namespace std;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    int n, set=0;
    while(1){


        cin>>n;
        int sum=0,h,bks[n],res=0;

        if(n==0){
            break;
        }else{
            set++;
        }

        for(int i=0;i<n;i++){
            cin>>bks[i];
            sum += bks[i];
        }

        h = sum/n;

        for(int i=0;i<n;i++){
            if(bks[i]<h){
                res += h-bks[i];
            }
        }

        cout<<"Set #"<<set<<endl;
        cout<<"The minimum number of moves is "<<res<<"."<<endl;
        cout<<endl;

    }

    return 0;

}
