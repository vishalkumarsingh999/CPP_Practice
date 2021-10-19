#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
main()
{

    std::vector<int> arr{8,2,8,3,8,3,5,2,3,1,7,0,0,7,0,1,1,6,7,4};
    int window_size=3;

    //Approach 1 : Linear Search method
    //with Complixity: O(n*window_size)
    for(std::vector<int>::iterator i=arr.begin();i!=arr.end()-window_size;i++)
    {
        std::cout<<std::setw(2)<<*std::max_element(i,i+window_size);
    }

    //Approach 2: using BST
    //Complixity: O(n*log(window_size))

    for(int i:arr)
        std::cout<<i<<" ";

}
