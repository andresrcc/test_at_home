#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

void insert(vector<pair<int,int>> BST, int node, int to_insert)
{
    if(node == -1) { 
        BST.push_back(make_pair(to_insert,make_pair(-1,-1))); 
        return;
    }
    
    if(to_insert >= BST[node].first)
        insert(BST,BST[node].second.second,to_insert);
    else
        insert(BST, BST[node].second.first, to_insert);
}

int main()
{
    vector<pair<int,int>> BST;
    
    int V; //number of nodes
    cout << "Introduce number of nodes: " << endl;
    cin >> V;
    
    //(i,i,i) parents DATA value, childrens LOCATION
    BST.assign(V, pair<int,pair<int,int>>());
    int left,right, data;
    
    for(int i = 0; i < V; i++)
    {
        cout << "value" << endl;
        cin >> data;
        cout << "left and right children": << endl;
        
        cin >> left; cin >> right;
        BST[i].push_back(make_pair(data,(make_pair(left,right)));
    }
    
    for(auto neighbor : Tree[0])
        cout << "Edge: " << neighbor.first << "weight: " << neighbor.second << endl;
        
    insert(AdjList,0);
}
