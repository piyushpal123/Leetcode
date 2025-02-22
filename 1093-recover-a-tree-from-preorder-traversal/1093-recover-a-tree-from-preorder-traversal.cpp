/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int getval(string &s,int n,int &ind){
    int val=0;
  
    while(ind<n &&s[ind]>='0'&&s[ind]<='9'){
        val=val*10+s[ind]-'0';
        ind++;
    }
    return val;
}
int getdashlen(string &s,int n,int &ind){
    int cnt=0;
    
    while(ind<n&&s[ind]=='-'){
        cnt++;
        ind++;
    }
    return cnt;

}
void buildTree(TreeNode*root,int curr,string &s,int n,int &ind){
    if(ind==n)return;
    int prev=ind;
    int dashlen=getdashlen(s,n,ind);
    if(dashlen<curr){
        ind=prev;
        return;
    }
    //nodevall;
    int node_val=getval(s,n,ind);
    TreeNode* newnode=new TreeNode(node_val);
    if(!root->left)root->left=newnode;
    else 
        root->right=newnode;

        buildTree(newnode,1+curr,s,n,ind);
          buildTree(newnode,1+curr,s,n,ind);
       


    


}
    TreeNode* recoverFromPreorder(string traversal) {
        int n=traversal.size();
        int ind=0;
        TreeNode* root=new TreeNode(getval(traversal,n,ind));
        buildTree(root,1,traversal,n,ind);
        buildTree(root,1,traversal,n,ind);
        return root;


        
    }
};