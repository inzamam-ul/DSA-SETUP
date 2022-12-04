#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() {
        val = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int in) {
        val = in;
        left = NULL;
        right = NULL;
    }
    TreeNode(int in, TreeNode* left, TreeNode* right) {
        val = in;
        left = left;
        right = right;
    }
};

int res = 0;

int minCameraCover(TreeNode* root) {
    return (dfs(root) < 1 ? 1 : 0) + res;

}


int dfs(TreeNode *root){
    if(!root) return 2;
    int left = dfs(root->left), right = dfs(root->right);
    if(left == 0 || right == 0){
        res++;
        return 1;
    }
    return left == 1 || right == 1 ? 2 : 0;
}