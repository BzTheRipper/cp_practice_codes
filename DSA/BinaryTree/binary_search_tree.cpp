#include<iostream>

using namespace std;

struct BST_tree{
    int data;
    BST_tree* right;
    BST_tree* left;
};

void insert_node(BST_tree* head_node, int key)
{
    BST_tree* temp = new BST_tree;
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
    BST_tree* trav = new BST_tree;

    trav = head_node;
    
    // For LEFT Insert
    if(trav->data > key && trav->left == NULL){
        trav->left = temp;
        return;
    }
    // For RIGHT Insert
    else if(trav->data < key  && trav->right == NULL){
        trav->right = temp;
        return;
    }
    // For LEFT Traverse
    else if(trav->data > key && trav->left != NULL){
        trav = trav->left;
        insert_node(trav, key);
    }
    // For RIGHT Traverse
    else if(trav->data < key  && trav->right != NULL){
        trav = trav->right;
        insert_node(trav, key);
    }
}

void print_all_nodes_of_BST_tree(BST_tree* head_node){

    BST_tree* trav = new BST_tree;
    trav = head_node;
    if(head_node == nullptr){
        return;
    }
    
    cout<<head_node->data<<" ";
    print_all_nodes_of_BST_tree(head_node->left);
    print_all_nodes_of_BST_tree(head_node->right);

}

int get_min(BST_tree* head_node){
    if(head_node->left == NULL)
    {
        return head_node->data;
    }
    else{
        get_min(head_node->left);
    }
}

int get_max(BST_tree* head_node){
    if(head_node->right == NULL)
    {
        return head_node->data;
    }
    else{
        get_max(head_node->right);
    }
}

int main()
{
    BST_tree* node = new BST_tree;
    
    node->data = 15;
    node->left = NULL;
    node->right = NULL;
    
    insert_node(node, 12);
    insert_node(node, 18);
    insert_node(node, 2);
    insert_node(node, 14);
    insert_node(node, 13);
    insert_node(node, 19);
    insert_node(node, 17);

    cout<<get_max(node);

    //print_all_nodes_of_BST_tree(node);
    
}