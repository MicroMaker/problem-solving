#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] = {2, -2, 1, -1, 2, -2, 1, -1};
int flag[310][310];

struct node
{
    int x, y, step;
    node() {
    }

    //构造函数
    node(int _x, int _y, int _step) {
        x = _x;
        y = _y;
        step = _step;
    }
};

int bfs(int sx, int sy, int tx, int ty, int n)
{
    if(sx == tx && sy == ty) {
        return 0;
    }
    queue <node> q;
    q.push(node(sx, sy, 0));
    flag[sx][sy] = 1;
    while(!q.empty()) {
        node fr = q.front(); q.pop();
        int x = fr.x;
        int y = fr.y;
        int step = fr.step;
        for(int i = 0; i < 8; i++) {
            int nowx = x + dx[i];
            int nowy = y + dy[i];
            if(nowx < 0 || nowx >= n || nowy < 0 || nowy >= n) {
                continue;
            }
            if(flag[nowx][nowy] == 1) {
                continue;
            }
            if(nowx == tx && nowy == ty) {
                return step + 1;
            }
            flag[nowx][nowy] = 1;
            q.push(node(nowx, nowy, step + 1));
        }
    }
}
int main()
{
    int t, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            flag[i][j] = 0;
        }
    }
    int sx, sy, tx, ty;
    scanf("%d%d%d%d", &sx, &sy, &tx, &ty);
    int ret = bfs(sx, sy, tx, ty, n);
    printf("%d\n", ret);
    return 0;
}


