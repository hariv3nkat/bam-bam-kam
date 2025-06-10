#include <iostream>
#include <vector>
using namespace std;
int kthDivisible(int a, int b, int d, int k){
    vector<int> arrays;
    for(int i=a; i<b; i++){
        if(i%d==0){
            arrays.push_back(i);
        }
    }
    cout<<arrays[k];
}
void tournament(int crazys){
    

}

int main(){
    vector<int> gays(5);
    int a,b;
    long long great, bang;
    great=1;
    bang=0;
    cin>>a>>b;
    bool flagg=false;
    
    for(int e=a+1;e<=62;e++){
        for(int count=0;count<e;count++){
            great*=2;
        }
        bang=great;
        while(bang>=10){
            bang/=10;
        }
        if(bang==b){
            flagg=true;
            cout<<e;
            break;
        }else{
            great=1;
        }
        
    }
    if(flagg==false){
        cout<<0;
    }
    
    
    
    return 0;
}