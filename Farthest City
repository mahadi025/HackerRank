/*The kingdom of Bangala consists of n cities, with King Akbar as its ruler. The cities are numbered from 1 to n respectively. There are roads connecting the cities, and it is ensured that it is always possible to move from one city to another. Akbar wants to declare the city numbered 1 as the capital of Bangala. However, he first wants to determine how far the farthest city from the capital will be. You can consider each road to have a distance of 1.

Input Format

The first line of input contains two integers, n and e, representing the number of nodes and edges respectively. e lines follow, each containing two integers, u and v, representing that there is a road between the cities u and v.

Constraints

1<=n<=105 1<=e<=2*105 1<=u, v<=n

Output Format

Output a single integer, representing the distance of the farthest city from the city numbered 1.

Sample Input 0

4 4
1 2
2 3
3 1
3 4
Sample Output 0

2*/

#include<bits/stdc++.h>
using namespace std;

int INF=-1;
int dis[100005],n,e;
queue<int>q;
vector<int>adj[100005];

void bfs(int src){
    for(int i=0;i<=n;i++){
      dis[i]=INF;
    }
    dis[src]=0;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++){
          int v=adj[u][i];
          if(dis[v]==INF){
            q.push(v);
            dis[v]=dis[u]+1;
          }
        }
    }
}

int main(){
  cin>>n>>e;
  int u,v,maximum=-1,path;
  while(e--){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  bfs(1);
  for(int i=0;i<=n;i++){
    path=max(dis[i],dis[i+1]);
    if(path>maximum){
      maximum=path;
    }
  }
  cout<<maximum<<endl;
}
