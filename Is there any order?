/*
You are tasked with n jobs, with m dependencies among them. A dependency is of the form (u, v), indicating that the u-th job must be completed before starting the v-th job. Find out if it is possible to find an ordering of the jobs in which all the dependencies are satisfied.

Input Format

The input starts with two integers n and m, denoting the number of jobs and dependencies respectively. The jobs are numbered from 1 to n. m lines follow, each containing two space-separated integers (u, v) each, as specified above.

Constraints

1<=n, m<=105
1<=u, v<=n

Output Format

Output "yes" (without the quotes) if a valid ordering of the jobs is possible and "no" otherwise.

Sample Input 0

2 2
1 2
2 1
Sample Output 0

no
Explanation 0

The fact that you must do 2 before 1, and also do 1 before doing 2 makes this problem a paradox. Thus it is impossible

Sample Input 1

3 2
1 2
2 3
Sample Output 1

yes
Explanation 1

Simply perform the tasks 1, 2 and 3 in order.
/*

#include<bits/stdc++.h>
int WHITE =1;
int GREY= 2;
int BlACK= 3;
using namespace std;

vector <int> adj[100005];
int col[1000005];
bool isCycle=false;

void dfs(int u){
  col[u]=GREY;
  for(int i=0;i<adj[u].size();i++){
    int v= adj[u][i];
      if(col[v]==WHITE){
      dfs(v);
    }
    if(col[v]==GREY){
      isCycle= true;
    }
  }
  col[u]=BlACK;
}
int main(){
  int n,e;
  cin>>n>>e;
  for(int i=0; i<e; i++){
    int u, v;
    cin>>u>>v;
      adj[u].push_back(v);
  }
  for(int i=1;i<=n;i++){
      col[i]=WHITE;
  }
    for (int i=1;i<=n;i++){
      if(col[i]==WHITE){
      dfs(i);
    }  
  }
  if(isCycle){ 
    cout<<"no"<<endl;
  }
  else{
      cout<<"yes"<<endl;
  }
}
