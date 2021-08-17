#include <iostream>
#include <queue>

#define ll long long

using namespace std;

struct Node{
	int data;
	Node *left, *right;
	Node(int data){
		this->data = data;
		left = right = NULL;
	}
};

void preorder(Node *root){
	if (root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node *root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(Node *root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

void Levelorder(Node *root){
	queue<Node *> q;
	if (root==NULL)
	{
		return;
	}
	q.push(root);
	while(!q.empty()){
		cout<<q.front()->data<<" ";
		
		if (q.front()->left != NULL)
			q.push(q.front()->left);
		if (q.front()->right != NULL)
			q.push(q.front()->right);
		q.pop();
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	Node *root= new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout<<"preorder Traversal"<<endl;
	preorder(root);
	cout<<endl;
	cout<<"inorder Traversal"<<endl;
	inorder(root);
	cout<<endl;
	cout<<"postorder traversal"<<endl;
	postorder(root);
	cout<<endl;
	cout<<"levelorder traversal"<<endl;
	Levelorder(root);
	return 0;
}