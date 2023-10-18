#include <iostream>
using namespace std;

int main(){
    int prime = 0;
    while(true){
        for(int i=2; i<=11; i++){
            if(prime==5){
            break;
            }
            int cnt = 0;
            for(int j=2; j<i; j++){
                if(i==2){
                    cout<<2<<endl;
                    continue;
                }
                if(i%j==0){
                    cnt=cnt+1;
                }
            }
            if(cnt==0){
                cout<<i<<endl;
                prime+=1;
            }
        }
    }
}