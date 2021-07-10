#include<iostream>
#include<map>

using namespace std;


string kangaroo(int x1, int v1, int x2, int v2) {
    if (x1==x2){
        return "YES";
    }else if(v2==v1){
        return "NO";
    }

    float t = (x2-x1)/(v1-v2);


    if (t>=0){


        int big;
        if(x1>x2) big = 1;
        else big = 2;
        
        for(int i=x1,j=x2;i!=j;i+=v1,j+=v2){
            if (big==1 && j>i) return "NO";
            if (big==2 && i>j) return "NO";
        }

        return "YES";

    }else{
        return "NO";
    }
}


int main(){

    cout<<kangaroo(21,6,47,3);

    


    return 0;
}