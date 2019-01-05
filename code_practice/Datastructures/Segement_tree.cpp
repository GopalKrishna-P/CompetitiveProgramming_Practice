#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
	int data;
	TreeNode* right ;
	TreeNode* left ; 
};

TreeNode* newnode(int data)
{
	TreeNode* node = new ( TreeNode );
	node->data = data;
	node->right = node->left = NULL ;  
};

// function to construct segment tree, returns the root of the segment tree 
TreeNode* contruct(vector <int> arr)
{
	TreeNode* root;
	TreeNode* current;

	return root;
};




int main()
{
	vector <int> v; // declaring and construction of the vector/array 
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.push_back(9);
	v.push_back(11);

	//construction of segment tree
	TreeNode* segtree_root = contruct( v );	

	//printing the segement tree
	print(segtree_root);

}