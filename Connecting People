/*
The kingdom of Bangala consists of n cities numbered from 1 to n. There are many bidirectional roads connecting one city to another. We say that a cityis connected with another city if and only if there exists a sequence of roads through which a person can travel between the two cities.

For the betterment of his people, Akbar wants each city to be connected with every other city in the kingdom. To do so, he is ready to add a few more roads connecting two cities each if necessary.

As his trusted advisor, you are to help him determine the minimum number of roads that must be constructed in order to make every pair of cities in the country connected with one another.

Input Format

The first line of input contains two integers, n and e, representing the number of nodes and edges respectively. e lines follow, each containing two integers, u and v, representing that there is a road between the cities u and v.

Constraints

1<=n<=105 1<=e<=2*105 1<=u, v<=n

Output Format

Output a single integer, representing the minimum number of roads that must be built.

Sample Input 0

4 2
1 2
3 4
Sample Output 0

1
Explanation 0

Constructing a single road between 2 and 3 will make the entire kingdom connected.
*/
#include<bits/stdc++.h>
using namespace std;

int INF=-1;
int dis[200005],n,e;
queue<int>q;
vector<int>adj[200005];

void bfs(int src){
    dis[src]=0;
    q.push(src);
    while(!q.empty()){
      int u=q.front();
      q.pop();
      for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if(dis[v]==INF){
          dis[v]=dis[u]+1;
          q.push(v);
        }
      }
  }
}

int connectedRoad(int n){
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
  cin>>n>>e;
  int u,v;
  while(e--){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  bfs(1);
  cout<<connectedRoad(n)-1<<endl;
}
