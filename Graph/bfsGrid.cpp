#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;

char ar[31][31];
int vis[31][31];
int dis[31][31];
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};
int n;

bool isValid(int x, int y){
    if(x<1 || x>n || y<1 || y>n) return false;
    if(vis[x][y]==1 || ar[x][y] == 'T') return false;
    
    return true;
}
void bfs(int srcX, int srcY){
    vis[srcX][srcY] = 1;
    dis[srcX][srcY] = 0;
    queue< pair<int,int> > v;
    v.push({srcX, srcY});
    
    while(!v.empty()){
        int currX = v.front().first;
        int currY = v.front().second;
        v.pop();
        
        for(int i=0; i<4; i++){
            if(isValid(currX+dx[i], currY+dy[i])){
                int newX = currX+dx[i];
                int newY = currY+dy[i];
                
                vis[newX][newY] = 1;
                dis[newX][newY] = 1+ dis[currX][currY];
                v.push({newX, newY});
            }
        }
    }
}
void solve(int t){
    //code here
    
    cin>>n;
     REP(i, n)
        REP(j,n)
            cin >> ar[i][j];
    
    int srtX, srtY, endX, endY;
    REP(i, n)
        REP(j,n){
           if(ar[i][j] == 'S') srtX = i, srtY = j;
           if(ar[i][j] == 'E') endX = i, endY = j;
        }
    
    bfs(srtX, srtY);
    
    cout << dis[endX][endY] << endl;
}

int main()
{
    int t =1;
    //cin>>t;
    solve(t);
   
	return 0;
}
