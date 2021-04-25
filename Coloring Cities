/*
In the state of Rajasthan, each city is built with buildings of a particular colour, e.g. Jaipur has pink building, Jodhpur is the blue city, Jaisalmer is the Golden city and so on.

Inspired by this, King Akbar wants to paint the cities of Bangala with different colours. However, the engineers at Bangala informed him that there are two colours available in Bangala, red and black. The cost of painting a city red is Tk. 200, and the cost of painting a city black is Tk. 500. There are many roads in Bangala that connect one city with another. If two cities are adjacent, (i.e. if they have a road connecting them), King Akbar wants the two cities to have different colours. It is guaranteed that the road network of Bangala is such that it is always possible to colour the cities in this way.

Now, as the King's trusted advisor, you are tasked with finding the minimum cost required to colour the cities in the way King Akbar demands.

Input Format

The first line of input contains two integers, n and e, representing the number of nodes and edges respectively. e lines follow, each containing two integers, u and v, representing that there is a road between the cities u and v.

Constraints

1<=n<=105 1<=e<=2*105 1<=u, v<=n

Output Format

Output a single integer, representing the minimum task to accomplish the task.

Sample Input 0

4 4
1 2
1 3
2 4
3 4
Sample Output 0

1400*/

#include<bits/stdc++.h>
using namespace std;

int RED =1;
int BLACK =2;
int INF=-1;
int dis[100005],n,e;
queue<int>q;
vector<int>adj[100005];
int col[100005];
int op1=0,op2=0,cost;

void bfs(int src){
  for(int i=1;i<=n;i++){
    col[i]=0;
  }
  col[src]=BLACK;
  op1+=200;
  op2+=500;
  q.push(src);
  int u,v;
  while(!q.empty()){
    u=q.front();
    q.pop();
    for(int i=0;i<adj[u].size();i++){
      v=adj[u][i];
        if(col[v]==0){
          if(col[u]==RED){
            col[v]=BLACK;
            op1+=200;
            op2+=500;
          }
          else{
            col[v]=RED;
            op1+=500;
            op2+=200;
          }
           q.push(v);
        }
    }
  }
  if(op1>op2){
    cout<<op2<<endl;
  }
  else{
    cout<<op1<<endl;
  }
}

int main(){
  cin>>n>>e;
  int u,v;
  for(int i=0;i<e;i++){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  bfs(1);
}
