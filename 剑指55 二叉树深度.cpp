/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)            //����ǿ��������Ϊ�㣬�ݹ����
            return 0;
        else
        {
            int m = maxDepth(root->left);         //�ݹ���������������Ϊm
            int n = maxDepth(root->right);         //�ݹ���������������Ϊn

            return m > n ? (m + 1) : (n + 1);        //���m>n ����m+1,������n+1   ����Ŀ�����
        }
    }
};

//˼�룺�ݹ�