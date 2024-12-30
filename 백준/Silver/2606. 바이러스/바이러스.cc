#include <cstdio>
#include <queue>

using namespace std;
int main() {
    int computerNum, connectedCom;
    scanf("%d", &computerNum);
    scanf("%d", &connectedCom);

    bool visited[computerNum];
    for(int i = 0; i < computerNum; i++) {
        visited[i] = false;
    }

    int graph[computerNum][computerNum];
    for(int i = 0; i < computerNum; i++) {
        for(int j = 0; j < computerNum; j++) {
            graph[i][j] = 0;
        }
    }

    int v1, v2;
    for(int i = 0; i < connectedCom; i++) {
        scanf("%d %d", &v1, &v2);
        graph[v1-1][v2-1] = 1;
        graph[v2-1][v1-1] = 1;
    }

    queue<int>que;
    que.push(0);
    visited[0] = true;
    int count = 0;

    while(!que.empty()) {
        int vertex = que.front();
        que.pop();
        count++;
        for(int i = 0; i < computerNum; i++) {
            if(visited[i] == false && graph[vertex][i] == 1) {
                visited[i] = true;
                que.push(i);
            }
        }
    }
    printf("%d\n", count-1);

    return 0;
}