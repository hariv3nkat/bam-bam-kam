#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> gays(5);
    
    for(int i=0;i<5;i++){
        cin>>gays[i];
    }
    cout<<gays[n];
    
    
    return 0;
}