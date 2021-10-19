#include<iostream>
#include<vector>
#include<algorithm>
#include<deque>
#include<ctime>
#include<numeric>
main()
{
    int n=20;
    std::vector<int> arr;
    std::deque<int> q0;
    std::deque<int> q1;
    std::deque<int> q2;
    srand(time(0));
    for(auto i=0;i<n;i++)
        arr.push_back(rand()%10);
    sort(arr.begin(),arr.end());
    auto sum=0;
    for(auto i:arr)
    {
        sum+=i;
        if(i%3==0)
            q0.push_back(i);
        else if(i%3==1)
            q1.push_back(i);
        else if (i%3==2)
            q2.push_back(i);
    }
    std::cout<<"Size of Vector: "<<arr.size()<<"\n";
    if(sum%3==1)
    {
        if(!q1.empty())
        {
            q1.pop_front();
        }
        else
        {
            if(!q2.empty())
                q2.pop_front();
            else
                std::cout<<std::endl<<"Not Possible";
            if(!q2.empty())
                q2.pop_front();
            else
                std::cout<<std::endl<<"Not Possible";
        }
    }
    else if(sum%3==2)
    {
        if(!q2.empty())
            q2.pop_front();
        else
        {
            if(!q1.empty())
                q1.pop_front();
            else
                std::cout<<std::endl<<"Not Possible";
            if(!q1.empty())
                q1.pop_front();
            else
                std::cout<<std::endl<<"Not Possible";
        }
    }
    std::vector<int> ans;
    for(auto i:q0)
        ans.push_back(i);
    for(auto i:q1)
        ans.push_back(i);
    for(auto i:q2)
        ans.push_back(i);
    sort(ans.begin(),ans.end(),[](int a,int b)->bool{return a>b;});
    for(auto i:ans)
        std::cout<<i;
    std::cout<<std::endl<<accumulate(ans.begin(),ans.end(),0)<<" is Divisible by 3, as sum of it's digit is divisible by 3\n\n\n";



}
