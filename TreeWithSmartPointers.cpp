#include <iostream>
#include <memory>

using namespace std;

struct Node
{
  int data;
  shared_ptr<Node> left;
  shared_ptr<Node> right;
  
  Node(int value) : data(value){}
};

int main()
{
  shared_ptr<Node> root = make_shared<Node>(4);
  root->left = make_shared<Node>(2);
  root->right = make_shared<Node>(5);
}
