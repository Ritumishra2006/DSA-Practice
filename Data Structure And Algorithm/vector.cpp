#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
using namespace std ;

int main() {
    // vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(5);
    // vec.push_back(4);
    // vec.push_back(7);
    // vec.emplace_back(10);
    // vec.pop_back();
    // vec.erase(vec.begin()+2);
    // vec.clear();
    // vec.insert(vec.begin()+2, 100);

    // for(int val : vec) {
        // cout << val << " ";
    // }
    // cout << endl;
    // cout << "val at idx 3" << vec[3] << "or" << vec.at(3) << endl;
    // cout << "front" << vec.front() << endl;
    // cout << "back" << vec.back() << endl;
    // cout << "vec.begin :" << *(vec.begin()) << endl;
    // cout << "vec.end :" << *(vec.end()) << endl;

//    cout << vec.capacity() << endl;
//    cout << vec.size() << endl;
    // return 0;
   
    // // iterator
    // // 
    // vector<int> vec = {1,2,3,4,5};
    
    // // vector<int>::iterator it;
    // // vector<int>::reverse_iterator it;
    // // for(it = vec.begin(); it != vec.end(); it++)
    // for(auto it = vec.rbegin(); it != vec.rend(); it++)
    //  {
     
    //     cout << *(it) << " ";
    // }
    // cout << endl;

    // list

    // list<int>l ;
    // l.push_back(9);
    // l.push_back(8);
    // l.push_front(10);
    // l.push_front(13);

    //  for(int val : l) {
        // cout << val << " ";
    //  }
    //  cout << endl; 


    // deque

    // vector<pair<int, int>> vec = {{1,2}, {2, 3}, {5, 7}};
    //  vec.push_back({8, 9});
    //  for(auto p : vec) {
        // cout << p.first << " " << p.second << endl;
    //  }
    // 



    // stack

    // stack<int> s;

    // s.push(2);
    // s.push(3);
    // s.push(8);
    // s.push(5);
    
    // stack<int> s2;
    // s2.swap(s);

    // while(!s.empty()) {
        // cout << s.top() << " " << endl;;
        // s.pop();
    // }
    // 

    // cout << "s.size:" << s.size() << endl;
    // cout << "s2.size :" << s2.size() << endl;

    // queue

    // queue<int> q;

    // q.push(1);
    // q.push(2);
    // q.push(4);
    // q.push(6);

    // while(!q.empty()) {
        // cout << q.front() << " ";
        // q.pop();
    // }
    // cout << endl;

    // MAp

    map<string, int> m;

    m["tv"] = 100;
    m["sofa"] = 900;
    m["table"] = 1000;
    m["bed"] = 1090;
    m["laptop"] = 3100;

    m.insert({"swing", 2399});
   
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}