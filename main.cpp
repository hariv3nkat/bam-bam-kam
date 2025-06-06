#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x, y, z;
    cin>>x;
    vector<int> row1(x);
    vector<int> row2(x);
    int position1, position2;
    for(int count=0;count<x;count++){
        cin>>row1[count];
        
    }
    for(int count=0;count<x;count++){
        cin>>row2[count];
    }
    for(int count=0;count<x;count++){
        if(row2[count]==1){
            position1=count;

        }else if(row2[count]==4){
            position2=count;

        }
    }
    cout<<position1<<" "<<position2;
 

    return 0;
}