vector<int> ar[2001];
int vis[2001];
vector<int> In(2001), Out(2001);

//In-Out timer
int timer = 1;
bool dfs(int node)
{
   vis[node] = 1;
   In[v] = timer++;
   
   for(auto child: ar[node]){
       if(ar[child] == 0){
           dfs(child);
       }
   }
   Out[node] = timer++;
}

bool inOut(int v1, int v2){
    if(In[v2] > In[v1] && Out[v2] < Out[v1]){
        return true;
    }
    else return false;
}
