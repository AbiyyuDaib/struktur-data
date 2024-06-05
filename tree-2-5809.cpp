#include <iostream>

using namespace std;

struct node
{
	char data;
	node *left;
	node *right;
};

node *root=NULL;
void addNode (node **root, char isi)
{
	if ((*root) == NULL)
	{
		node *baru;
		baru = new node;
		baru->data = isi;
		baru->left = NULL;
		baru->right = NULL;
		(*root) = baru;
	}
}
void preorder (node *root)
{
	if (root!=NULL)
	{
	cout<<root->data<" ";
	preorder (root ->left);
	preorder (root ->right);
	}
}
void inorder (node *root)
{
	if (root!=NULL)
	{
	inorder (root->left);
	cout<<root->data<<" ";
	inorder (root->right);
	}
}
void postorder (node *root)
{
	if (root!=NULL)
	{
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	}
}

int main()
{
	char isi;
	cout << "\n\n\n\t Posisi Awal Binary Tree:\n\n\n" ;
	cout << "------------- A M I K Z J ------------" << endl;
	//level0
	addNode(&root,isi='A');
	//level 1
	addNode(&root->left,isi='M');
	addNode(&root->right,isi='I');
	//level 2
	addNode(&root->left->left,isi='K');
	addNode(&root->right->right,isi='Z');
	addNode(&root->right->right->left,isi='J');
	
	cout << "\nPreOrder : " ; preorder(root);
	cout << "\nInOrder : " ; inorder(root);
	cout << "\nPostOrder : "; postorder(root);
}
