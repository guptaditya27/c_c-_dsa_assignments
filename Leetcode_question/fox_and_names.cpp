#include <iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<queue>
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool is_true=true;
    vector<string>words;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        words.push_back(s);
    }
    vector<int>indegree(26,0);
    vector<int>no_nodes(26,0);
    for(string&X:words){
        for(char&y:X){
            no_nodes[y-'a']=1;
        }
    }
    unordered_map<int,vector<int>>adj;
    string s="";
        // creating adjacency list
    for (int i = 0; i < words.size() - 1; i++) {
        string w1 = words[i];
        string w2 = words[i + 1];
        int len = min(w1.size(), w2.size());
        bool found=false;
        for (int j = 0; j < len; j++) {
            if (w1[j] != w2[j]) {
                adj[w1[j] - 'a'].push_back(w2[j] - 'a');
                indegree[w2[j] - 'a']++;
                found=true;
                break; // only first differing character matters
            }
        }
        if (!found && w1.size() > w2.size()) {
            cout << "Impossible\n";
            is_true=false;
            return 0;
        }

    }
    queue<int>q;
    int count=0;
    for(int i=0;i<26;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    
    while(!q.empty()&&is_true){
        int f=q.front();
        
        s.push_back(f+'a');
        q.pop();
        
        count++;
        for(auto nbr:adj[f]){
            indegree[nbr]--;
            if(indegree[nbr]==0){
                q.push(nbr);
            }
                            
        }
       
        
    }
    int active = 0;
    for (int i = 0; i < 26; i++) if (no_nodes[i]) active++;

    if ((int)s.size() != active) {
        cout << "Impossible\n";
        return 0;
    }
    cout<<s;
    return 0;
}