/**
 * class Tree {
 *     public:
 *         int data;
 *         Tree *left;
 *         Tree *right;
 * };
 */
void tree(Tree*root,int target,vector<int>&nums)
{
    if(root==NULL)
{
    return ;
}
if(root->left!=NULL)
{
    tree(root->left,target,nums);
}
if(root->right!=NULL)
{
    tree(root->right,target,nums);
}

nums.push_back(root->val);

}

 
bool solve(Tree* root, int target) {
    
vector<int>v;
tree(root,target,v);
for(int i=0;i<v.size();i++)
{
    if(v[i]==target)
    {
        return true;
    }
}
return false;

}
