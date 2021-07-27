/*
Given a directed graph, find the number of nodes from which all nodes are reachable.

Input Format

The first line of the input contains two integers, the number of nodes n and edges e in the graph respectively. The next e lines contain two integers u and v each, denoting that there is an edge from u to v.

Constraints

1<=n, e<=105
1<=u, v<=n

Output Format

Output a single integer, denoting the number of strongly connected components in the graph respectively.

Sample Input 0

3 2
1 2
1 3
Sample Output 0

1
Explanation 0

Both 2 and 3 are reachable from 1.
*/
#include <bits/stdc++.h>
using namespace std;

int WHITE=0;
int GREY=1;
int BLACK=2;
int INF=-1;

vector<int>adj[100005];
vector<int>adj2[100005];
vector<int>rev[100005];
vector<int>topOrder;
vector<int>l;
int dis[100005];
int col[100005];
int flag;
void dfs(int u,vector<int>adj[]){
    col[u]=GREY;
    int v;
    for(int i=0;i<adj[u].size();i++){
        v=adj[u][i];
        if(col[v]==WHITE){
            dfs(v,adj);
        }
    }
    col[u]=BLACK;
    topOrder.push_back(u);
    if(flag){
        l.push_back(u);
    }
}

void bfs(int src){
    dis[src]=0;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<adj2[u].size();i++){
            int v=adj2[u][i];
            if(dis[v] == INF){
                dis[v] = dis[u]+1;
                q.push(v);
            }
        }
    }
}

int connectedComponents(int n){
    for(int i=1;i<=n;i++){
        dis[i]=INF;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(dis[i]==INF){
            bfs(i);
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n,e;
    cin >>n>>e;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        rev[v].push_back(u);
        adj2[u].push_back(v);
        adj2[v].push_back(u);
    }
    int c=connectedComponents(n);
    if(c>1)
        cout<<"0\n";
    else{
        for(int i=1; i<=n; i++){
            if(col[i] == WHITE){
                dfs(i, adj);
            }
        }
        reverse(topOrder.begin(),topOrder.end());
        memset(col,WHITE,sizeof(col));
        flag=1;
        dfs(topOrder[0], rev);
        cout<<l.size()<<endl;
    }
}