
#include<iostream>
#include<queue>
using namespace std;
int num;
 struct node{
    int data;
   struct node *left;
    struct node *right;
}*newnode;
 node* createTree(){
     node* root = new node;
    root->left = NULL;
    root->right = NULL;
   cout<<"enter data\n";
   cin>>num;


    if(num == -1)
    return NULL;

    root->data = num;

    cout<<"enter data to the left of "<<root->data<<"\n";
    root->left = createTree();

    cout<<"enter data to the right of "<<root->data<<"\n";
    root->right = createTree();
}
void level_order_by_queue( node* root){
    printf("displaying level order traversal of binary tree\n");

    queue<node*> q;

    q.push(root);

    while(q.empty() == false)
    {
        node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";

        if(curr->left != NULL)
        q.push(curr->left);

        if(curr->right != NULL)
        q.push(curr->right);

        
    }

}
int main(){
    node* root = createTree();
   level_order_by_queue(root);

}