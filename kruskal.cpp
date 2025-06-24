#include<bits/stdc++.h>
using namespace std;
class Graph{
int V;
vector<vector<int> >edges;
int mstCost;
public:
Graph(int V) {
this->V = V;
this->mstCost = 0;
}
int getMstCost() {
return mstCost;
}
void addEdge(int source, int destination, int weight) {
edges.push_back({weight,source,destination});
}

void displayEdges() {
for (auto edge:edges) {
cout << "Source: " << edge[0] << " ";
cout << "destination: " << edge[1] << " ";
cout << "weight: " << edge[2] << endl;
}
}
int findSet(int e, int* parent) {
if (parent[e] == -1)
return e;
return findSet(parent[e], parent);
}
void unionSet(int x, int y, int* parent) {
int s1 = findSet(x,parent);
int s2 = findSet(y,parent);
if (s1!=s2)
parent[s2] = s1;
}
void kruskal() {
int *parent = new int[V];
for (int i=0; i<V; i++) parent[i] = -1;
sort(edges.begin(), edges.end());
for (auto edge:edges) {
int w = edge[0];
int u = edge[1];
int v = edge[2];
int s1 = findSet(u, parent);
int s2 = findSet(v, parent);
if (s1 == s2)
continue;
else {
cout << u << " -> " << v << ": " << w << endl;
mstCost+=w;
unionSet(s1,s2,parent);
}
}
delete [] parent;
}
};
int main() {
Graph g(4);
g.addEdge(0,1,2);

g.addEdge(1,2,3);
g.addEdge(2,3,4);
g.addEdge(3,0,1);
g.displayEdges();
g.kruskal();
cout << "Minimum cost: " << g.getMstCost() << endl;
return 0;
}
