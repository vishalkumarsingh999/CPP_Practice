#include<iostream>
#include<map>
#include<algorithm>
#include<cstring>
#include<sstream>
#include<vector>
#include<iomanip>
using namespace std;
main()
{
    string s;
    getline(cin,s);
    cout<<endl<<s.c_str();
    stringstream ss(s);
    vector<int> vec;
    int s1;
    while(ss>>s1)
        vec.push_back(s1);
    for(auto i:vec)
        cout<<endl<<(i);

    cout<<endl<<setbase(16)<<"0X"<<58;
}
