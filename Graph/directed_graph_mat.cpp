#include<bits/stdc++.h>
using namespace std;

//adjacency matrix
//directed  graph

int main ()
{
 
    int vertex, edges;
    cin>>vertex>>edges;

    vector<vector<bool> >adjMat(vertex,vector<bool>(vertex,0));

    int u,v;
    for(int i=0; i<edges;i++)
    {
        cin>>u>>v;
        adjMat[u][v]=1;
    }


    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }

   
    return 0;
}