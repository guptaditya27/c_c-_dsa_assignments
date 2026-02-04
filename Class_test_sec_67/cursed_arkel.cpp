#include <iostream>
using namespace std;
#include<string>
#include<vector>
struct Move{
    char dir;
    int dx,dy;
};
bool is_valid(int x,int y,vector<vector<string>>&chambers,int n){
    return x>=0&&x<n&&y>=0&&y<n&&chambers[x][y]!="X"&&chambers[x][y]!="x";
}
bool base_case(int x,int y,vector<vector<string>>&chambers){
    return chambers[x][y]=="c";
}
void solve(int x,int y,const int n,vector<vector<string>>&chambers,vector<string>&ans,string &temp,vector<Move>&moves){
    if(base_case(x,y,chambers)){
        ans.push_back(temp);
        return;
    }
    for(const auto&move:moves){
        int newX=x+move.dx;
        int newY=y+move.dy;
        if(is_valid(newX,newY,chambers,n)){
            chambers[x][y]="*";// to prevent revisit
            temp.push_back(move.dir);
            solve(newX,newY,n,chambers,ans,temp,moves);
            chambers[x][y]="-";
            temp.pop_back();
        }
    }
}
int main() {
    vector<Move>moves={{'u',0,-1},{'d',0,+1},{'r',+1,0},{'l',-1,0}};
    
    int size=0;
    cout<<"enter row ,colm size";
    cin>>size;
    vector<vector<string>>chambers(size,vector<string>(size));
    cout<<"Enter Values of chambers:- "<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cin>>chambers[i][j];
        }
    }
    // size of both row, col need to be same
    int n=chambers[0].size();
    int x=-1,y=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(chambers[i][j]=="s"){
                x=i,y=j;
                break;
            }
        }
        if(x!=-1)   
            break;
    }
    
    vector<string>ans;
    string temp="";
    solve(x,y,n,chambers,ans,temp,moves);
    cout<<"Paths found:"<<endl;
    for (auto&path:ans) {
        cout<<path<<endl;
    }

    return 0;
}