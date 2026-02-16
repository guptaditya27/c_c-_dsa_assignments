#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<utility>


using namespace std;
#define ll long long
vector<string>g(1001);
bool vis[1001][1001];
pair<ll,ll>par[1001][1001],s,d;
ll n,m;
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
char dir[4]={'U','R','D','L'};

bool is_valid(ll x,ll y){return x>=0&&x<n&&y>=0&&y<m&&g[x][y]!='#'&&!vis[x][y];}

bool bfs(ll sx,ll sy){
    queue<pair<ll,ll>>q;
    q.push({sx,sy});
    vis[sx][sy]=1;
    par[sx][sy]={-1,-1};
    while(!q.empty()){
        auto x=q.front().first;
        auto y=q.front().second;
        q.pop();
        if(g[x][y]=='B')return 1;
        for(int i=0;i<4;i++){
            ll nx=x+dx[i],ny=y+dy[i];
            if(is_valid(nx,ny)){
                vis[nx][ny]=1;
                par[nx][ny]={x,y};
                q.push({nx,ny});
            }
        }
    }
    return 0;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>g[i];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        if(g[i][j]=='A')s={i,j};
        if(g[i][j]=='B')d={i,j};
    }
    if(bfs(s.first,s.second)){
        vector<char>path;
        pair<ll,ll>cur=d;
        while(cur!=s){
            ll px=par[cur.first][cur.second].first;
            ll py=par[cur.first][cur.second].second;
            if(cur.first==px+1&&cur.second==py)path.push_back('D');
            else if(cur.first==px-1&&cur.second==py)path.push_back('U');
            else if(cur.first==px&&cur.second==py+1)path.push_back('R');
            else if(cur.first==px&&cur.second==py-1)path.push_back('L');
            cur={px,py};
        }
        reverse(path.begin(),path.end());
        cout<<"YES\n"<<path.size()<<"\n";
        for(char c:path)cout<<c;
    }else cout<<"NO\n";
}