/*****************************************************************************************************
* Author: Leonardo Marques
* LeetCode: Medium
* Reference: https://www.geeksforgeeks.org/unordered-set-of-vectors-in-c-with-examples/
******************************************************************************************************/

/* RunTime = 0ms
    class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> _set;
        for(int i = 0; i < paths.size(); i++){
            _set.insert(paths[i][0]);
        }
        for(int i = 0; i < paths.size(); i++){
            if(_set.find(paths[i][1]) == _set.end()) return paths[i][1];
        }
        return "";
    }
};
*/


// RunTime = 8ms
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> path;
        
        for(vector<string>& p : paths) {
            path[p[0]] ++, path[p[1]];
        }
    
        for (const pair<string, int>& comp : path) {
            if(comp.second == 0) {
                return comp.first;
            }
        }

        return "";    
    }
};