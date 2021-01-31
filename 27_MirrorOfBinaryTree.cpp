#include <cstdio>
#include <stack>
#include "utilities/binarytree.h"

void MirrorRecursively(BinaryTreeNode* node) {
    // 前序遍历，只有根结点和右子节点时不用交换，因为交换后得到左子节点，会进行下一轮递归
    if (node == nullptr || (node->left == nullptr && node->right)) {
        return;
    }

    BinaryTreeNode* temp = node->left;
    node->left = node->right;
    node->right = temp;

    if (node->left) {
        MirrorRecursively(node->left);
    }
    if (node->right) {
        MirrorRecursively(node->right);
    }
}

/**
 * 迭代
 */
void MirrorIteratively(BinaryTreeNode* root) {
    if (root == nullptr) 
        return;

    std::stack<BinaryTreeNode*> tree_nodes;
    tree_nodes.push(root);

    // 出栈，先交换左右结点，再入栈
    while (tree_nodes.size() > 0)
    {
        BinaryTreeNode* node = tree_nodes.top();
        tree_nodes.pop();

        BinaryTreeNode* temp = node->left;
        node->left = node->right;
        node->right = temp;

        if (node->left) {
            tree_nodes.push(node->left);
        }

        if (node->right) {
            tree_nodes.push(node->right);
        }
    }
}



