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
    //Ҫ�������������ȵĺ���maxdepth
    int maxDepth(TreeNode* root) {
        if (root == NULL)           
            return 0;
        else
        {
            int m = maxDepth(root->left);        
            int n = maxDepth(root->right);        

            return m > n ? (m + 1) : (n + 1);        
        }
    }


    bool isBalanced(TreeNode* root) {
        if (root == NULL)
            return true;        //������������
        else
        {
            int m = maxDepth(root->left);         //�ݹ���������������Ϊm
            int n = maxDepth(root->right);         //�ݹ���������������Ϊn
            int diff = m - n;
            if (diff > 1 || diff < -1)
            {
                return false;
            }

            return isBalanced(root->left) && isBalanced(root->right);     //�ٵݹ��ж���������
        }
    }
};



//Ϊʲôƽ���������Ҫ����ĳ�ڵ���������������ĸ߶Ȳ����1������������أ� 
//��Ϊ��һЩ�����������������ȣ������˶�����Σ�������1���ɡ�   
//ƽ�������AVL��   �Ľ���Ϊ������ƽ��������  Ҳ�к����

//˼·����������
//1�������ǰ�������������ĸ߶ȣ��ж��Ƿ�����߶Ȳ�<=1�����������һ��
//2������1�ķ������ݹ����ж������������������һ��
//3������1�ķ������ݹ����ж�����������������AVL

//�����ַ���Ҫ�ظ���������ڵ㣬ʱ�临�Ӷȸ�  ���ú�������ķ�����ÿ���ڵ�ֻ����һ��