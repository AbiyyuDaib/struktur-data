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
	
	cout << "\nPreOrder : " ;
	cout << "\nInOrder : " ;
	cout << "\nPostOrder : ";
}
