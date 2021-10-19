#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;
main(){
vector<int> coin={1,5,7,9,11};
int amt=16;
int i=0;
while(amt > 0){
    auto it=upper_bound(coin.begin(),coin.end(),amt);
    amt -= *(it-1);
    cout<<*(it-1)<<endl;
    i++;
}
cout<<endl<<i;
}
