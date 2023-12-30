#include <bits/stdc++.h>
using namespace std;
#define vertices 7
int graph[vertices][vertices];

void addEdge(int source,int destination,int weight)
{
    graph[source][destination]=weight;
    graph[destination][source]=weight;
}
int main()
{
addEdge(0, 1, 28);
addEdge(1, 2, 16);
addEdge(2, 3, 12);
addEdge(3, 4, 22);
addEdge(4, 5, 25);
addEdge(0, 5, 10);
addEdge(4, 6, 24);
addEdge(1, 6, 14);
addEdge(3, 6, 18);

int numOfEdges=0;
int selected[vertices];
memset(selected,false,sizeof(selected));
selected[0]=true;
int x;
int y;
int cost=0;
while(numOfEdges<vertices-1)
{
    int minn= INT_MAX;//10
    x=0;
    y=0;
    for(int i=0;i<vertices;i++)
    {
        if(selected[i])
        {
            for(int j=0;j<vertices;j++)
            {
                if(!selected[j]&&graph[i][j])
                {
                    if(graph[i][j]<minn)
                    {
                        minn=graph[i][j];
                        x=i;
                        y=j;
                    }
                }
            }
        }
    }
    cout<<x<<"->"<<y<<":"<<graph[x][y]<<endl;
    cost+=graph[x][y];
    selected[y]=true;
    numOfEdges++;
}
  cout<<"Cost of MST :"<<cost<<endl;
  return 0;
}
