#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include<algorithm>
int dx[4]={-1,+1,0,0};
int dy[4]={0,0,-1,+1};
long long max_vol=0;
int n,m;
void dfs(vector<vector<int>>&grid,int i,int j,long long &vol){
	if(i<0||j<0||i>=n||j>=m||grid[i][j]==0)	return;
	
    vol+=grid[i][j];
    grid[i][j]=0;
	for(int k=0;k<4;k++){
		int newx=i+dx[k];
		int newy=j+dy[k];
		dfs(grid,newx,newy,vol);
	}
	


}
int main(){
	int no_tt=0;
	cin>>no_tt;
	
	while(no_tt--){
		cin>>n>>m;
        max_vol=0;
		vector<vector<int>>grid(n,vector<int>(m,0));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>grid[i][j];
			}
		}
		// grid created till here
		// have to taverse to grid directly and find sum of all directly connected components calc volume
		// had to compare mXM VOLUME with all components volume	
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(grid[i][j]>0){
                    long long volume=0;
					dfs(grid,i,j,volume);
				    max_vol=max(volume,max_vol);
			    }

			}
		}
		cout<<max_vol<<endl;		
		
	}
	
   
	return 0;
}


