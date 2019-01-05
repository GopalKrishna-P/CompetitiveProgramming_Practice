// BST tree - code practice
#include <bits/stdc++.h>
using namespace std;

// defining TreeNode structure with feilds for data and addresses for left & right node
struct TreeNode
{
	int data;
	TreeNode* right;
	TreeNode* left;
};

// creating a new node and filling the data feild with value passed to the function
// returning the address of the new node
TreeNode* newnode(int data)
{
	TreeNode* node = new TreeNode();
	node->data = data;
	node->right = node->left = NULL;
	return node;
};

// writing a funtion to print a given node
void print_node(TreeNode* node)
{
	printf("%d\n", node->data);
};

// inserting element into bst tree
// comparing the element with the root node and recursively inserting it into sub-tree
TreeNode* insert( TreeNode* root, int data)
{
	//for empty sub-tree
	if( root == NULL){
		root = newnode(int data);
		return root;
	}
	else if(root->data >= data){
		root->left = insert( root->left , int data);
	}
	else {
		root->right = insert( root->right , int data);
	}
	return  root;
};

//searchin of key is present or not 
bool search( TreeNode* root, int key )
{
	// for null sub-tree
	if (root == NULL){
		return false;
	}
	else if( key == root->data ){
		return true;
	}
	else if( key > root->data ){
		return search( root->right , key );
	}
	else {
		return search( root->left , key );
	}
	return false;
};

// driver function 
int main(){
	int a = 5;
	TreeNode* aa = newnode(10);
	print_node(aa);
	return 0;
}