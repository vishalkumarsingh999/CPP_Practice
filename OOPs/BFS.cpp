#include<iostream>
#include<list>
using namespace std;
main()
{
    list<int> q;
    int adj[4][4]={{0,1,1,0},{1,0,0,1},{1,0,0,0},{0,1,0,0}};
    for(auto i:adj){
        cout<<*i<<*(i+1)<<*(i+2)<<*(i+3)<<endl;
    }
    int visited[4]={0};
    q.push_back(0);
    for(auto i:q)
    {
        for(int j=0;j<4;j++)
        {
            if(adj[i][j]==1 )
            {
                q.push_back(j);
            }
        }
        //if(visited[i]!=1){
         cout<<q.front();
         visited[q.front()]=1;//}
        q.pop_front();

    }

}
