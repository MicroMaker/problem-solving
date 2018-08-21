#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

struct myqueue{
    int head, tail;
    int q[10010];
    void init() {
        head = 0;
        tail = 0;
    }

    void push(int x) {
        q[tail++] = x;
    }

    void pop() {
        head++;
    }

    bool empty() {
        return head >= tail;
    }

    int size() {
        return tail - head;
    }

    int front() {
        return q[head];
    }

};
int main () {

    queue <node> q;
    for (int i = 1; i <= 10; i++) q.push(i);
    while (!q.empty()) {
        cout << q.front() << endl;
        q.pop();
        cout <<"size = " << q.size() << endl;
    }

    return 0;
}
