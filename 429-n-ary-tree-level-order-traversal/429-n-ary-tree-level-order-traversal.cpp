/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> results;
        
        if(!root) return results;
        
        queue<Node*> gquiz;
        gquiz.push(root);
        
        while(!gquiz.empty()){
            vector<int> layer;
            int q_size = gquiz.size();
            
            while(q_size--){
                auto vt = gquiz.front();
                layer.push_back(vt->val);

                gquiz.pop();

                for(auto x:vt->children){
                   gquiz.push(x);
                }
            }
            
            results.push_back(layer);
        }
        
        return results;
    }
};