🌳 Flatten Binary Tree to Linked List
🟡 LeetCode 114 | Medium
📖 Problem Description

Given the root of a binary tree, flatten it into a linked list in-place.

🔹 Rules:
Use the same TreeNode structure
The right pointer points to the next node
The left pointer must always be NULL
The linked list should follow preorder traversal
🧠 Approach

We use an in-place iterative approach inspired by Morris Traversal:

Traverse the tree using a pointer curr
If a node has a left child:
Find the rightmost node of the left subtree
Connect it to the current node’s right subtree
Move the left subtree to the right
Set left to NULL
Move to the next node (right)
⚙️ Algorithm Steps
Start from root
While current node is not NULL:
If left exists:
Find rightmost node of left subtree
Attach current right subtree
Move left subtree to right
Set left = NULL
Move to right node
Repeat until end
