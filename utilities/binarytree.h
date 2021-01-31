/**
 * Copyright(c) 2021, Joe
 * All rights reserved.
 * 
 * Distributed under the Apache License.
 * https://github.com/Luka-zyp/ad
 */

#pragma once

struct BinaryTreeNode
{
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

__declspec( dllexport ) BinaryTreeNode* CreateBianryTreeNode(int value);
__declspec( dllexport ) void ConnectTreeNodes(BinaryTreeNode* parent, BinaryTreeNode* left, BinaryTreeNode* right)

