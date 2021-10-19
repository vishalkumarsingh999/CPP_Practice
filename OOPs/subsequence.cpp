#include<iostream>
#include<string>
main()
{
    std::string mstr,sstr;
    std::cout<<"\nEnter main string: ";
    std::cin>>mstr;
    std::cout<<"\nEnter 2nd string: ";
    std::cin>>sstr;
    int i,j;
    for(i=0,j=0;i<mstr.length() && j<sstr.length();i++)
    {
        if(mstr[i] == sstr[j])
            j++;
    }
    if(sstr.length() == j)
        std::cout<<std::endl<<sstr<<" is subsequence of "<<mstr<<". ";
    else
        std::cout<<std::endl<<sstr<<" is not sub sequence of "<<mstr<<". ";
    std::cout<<"\n\n\n\n\n"  ;
    std::cin>>mstr;

}
