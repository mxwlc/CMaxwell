#include <iostream>
 
typedef int tree_t;
 
struct TreeNode{
    tree_t val;
    TreeNode* left;
    TreeNode* right;
};
 
TreeNode* cons_tree(tree_t e, TreeNode* l, TreeNode* r){
    TreeNode* tmp;
    tmp = new TreeNode;
    tmp->val = e;
    tmp->left = l;
    tmp->right = r;
    return tmp;
}
 
TreeNode* ordered_insertion_tree(tree_t e, TreeNode* t){
    if(t == NULL){
        return cons_tree(e, NULL, NULL);
    }
    else if(e < t->val){
        t->left = ordered_insertion_tree(e, t->left);
        return t;
    }
    else{
        t->right = ordered_insertion_tree(e, t->right);
        return t;
    }
}
 
void print_tree(TreeNode* t){
    if(t != NULL){
        print_tree(t->left);
        std::cout << t->val << std::endl;
        print_tree(t->right);
    }
}
 
void deallocate_tree(TreeNode* t){
    if(t != NULL){
        deallocate_tree(t->left);
        deallocate_tree(t->right);
        delete t;
    }
}
 
int main(){
    TreeNode* t;
    t = NULL;
 
    //1, 3, 2, 4, 6, 5,
    t = ordered_insertion_tree(1, t);
    t = ordered_insertion_tree(3, t);
    t = ordered_insertion_tree(2, t);
    t = ordered_insertion_tree(4, t);
    t = ordered_insertion_tree(6, t);
    t = ordered_insertion_tree(5, t);

    print_tree(t);
 
    deallocate_tree(t);
 
}