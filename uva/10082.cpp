#include<iostream>
#include<string>
#include<cstdio>


using namespace std;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    string str;
    while(getline(cin, str)){

        string order = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

        for(int i=0;i<str.length();i++){

            if(str[i] != '`' && str[i] != 'Q' && str[i] != 'A' && str[i] != 'Z'){
                size_t index = order.find(str[i]);

                if(index != string::npos){
                    str[i] = order[index-1];
                }
            }

        }

        cout<<str<<endl;

    }

    return 0;

}
