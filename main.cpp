#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x, y;
    cin>>x;
    vector<int> array(x);
    for(int count=0;count<x;count++){
        cin>>y;
        array.push_back(y);
    }
    
 

    return 0;
}