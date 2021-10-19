#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;
main(){
vector<int> coin={1,2,5,10,20,50,100,200,500,2000};
int amt=100;
while(amt > 0){
    auto it=upper_bound(coin.begin(),coin.end(),amt);
    amt -= *(it-1);
    cout<<*(it-1)<<endl;

}
}

