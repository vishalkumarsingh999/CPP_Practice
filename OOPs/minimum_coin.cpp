#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
main(){
vector<int> coin={1,2,5,10,20,50,100,200,500,2000};
int amt=165;
while(amt > 0){
    auto it=lower_bound(coin.begin(),coin.end(),amt);
    cout<<*(it-1)<<"  "<<amt<<endl;
    if( *it == amt)
     {amt -= *it;
     cout<<"err "<<endl;}
    else{
        amt -= *(it-1);
    }
}
}
