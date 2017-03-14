#include <vector>
#include <utility>

using namespace std;

/*
Adj list is a vector<vector<pair<int,int>>>
typedef vector<ii>vii;
vector of vector of pairs

Each pair contains the index of the 
neighbouring vertex and the weight of the edge

*/

//knowing the size is important! Initializing an adjacency list:

vector<vector<pair<int,int>>> AdjList;
int V;
cin >> V
AdjList.assign(V, vector<pair<int,int>>);
int total_neighbors;
int id, weight;
for(int i = 0; i < V; i++)
{
  cin >> total_neighbors;
  for(int j = 0; j < total_neighbots;j++)
  {
    cin >> id >> weight;
    AdjList[i].push_back(pair<int,int>(id-1,weight)); //some index adjustment remember its zero based.
  }
}
//To iterate through the neighbors of a vertex:
for(auto j : AdjList[0])
  cout << "Edge: " << j->first << "weight: " << j->second;
  



/*
 Edge list 
 vector<pair<int,pair<int,int>>> 
 vector of pair of triplets
 weight of edge and index of source and end vertices
 
 A way to store it is priority_queue<pair<int, pair<int,int>> -> instant dijkstra O_O 
*/

priority_queue<pair<int,pair<int,int>>> EdgeList;

//to get edges sorted by weight
int E, a, b; //number of edges
cin >> E;
for(int i = 0; i < E;i++)
{
  cin >> a >> b >> weight
  EdgeList.push(make_pair(-weight, pair<int,int>(a,b)); //trick to reverse sort order since by default priority queue is max heap
}

//get edges sorted by weight (smallest -> largest)
for(int i = 0; i < E; i++){
  pair<int, pair<int,int>> edge = EdgeList.top(); EdgeList.pop();
  cout << "weight: << -edge.first; //negate the weight again to print it properly
  cout << " source: " << edge.econd.first << " end: " << edge.second.second);
}