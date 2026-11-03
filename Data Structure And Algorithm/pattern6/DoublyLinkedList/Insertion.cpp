#include<iostream>
using namespace std;
int main() {
  class Node{
    public:
    int data;
    Node *prev;
    Node *next;
    Node (int val){
    data = val;
    prev = NULL;
    next = NULL;
    }
  };
  
  return 0;
}