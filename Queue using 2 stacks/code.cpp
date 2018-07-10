#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> e,d;
        int curfront = -1;
        void push(int x) 
        {
            while(!d.stack::empty())
            {
                e.stack::push(d.stack::top());
                d.stack::pop();
            }
            d.stack::push(x);           
        }

        void pop() 
        {
            while(!e.stack::empty())
            {
                d.stack::push(e.stack::top());
                e.stack::pop();
            }
            d.stack::pop();          
        }

        int front() 
        {
            while(!e.stack::empty())
            {
                d.stack::push(e.stack::top());
                e.stack::pop();
            }
            return(d.stack::top());
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}