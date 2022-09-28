#include <iostream>

typedef int tree_t;

struct TreeNode
{
    tree_t val;
    TreeNode *left;
    TreeNode *right;
};

TreeNode *cons_tree(tree_t e, TreeNode *l, TreeNode *r)
{
    TreeNode *tmp;
    tmp = new TreeNode;
    tmp->val = e;
    tmp->left = l;
    tmp->right = r;
    return tmp;
}

TreeNode *ordered_insertion_tree(tree_t e, TreeNode *t)
{
    if (t == NULL)
    {
        return cons_tree(e, NULL, NULL);
    }
    else if (e < t->val)
    {
        t->left = ordered_insertion_tree(e, t->left);
        
    }
    else
    {
        t->right = ordered_insertion_tree(e, t->right);
        
    }
    return t;
}

void print_tree(TreeNode *t)
{
    if (t != NULL)
    {
        print_tree(t->left);
        std::cout << t->val << std::endl;
        print_tree(t->right);
    }
}

void deallocate_tree(TreeNode *t)
{
    if (t != NULL)
    {
        deallocate_tree(t->left);
        deallocate_tree(t->right);
        delete t;
    }
}

bool search_ordered_tree(tree_t e, TreeNode *t)
{
    if (t == NULL)
    {
        return false;
    }
    else if (t->val == e)
    {
        return true;
    }
    else if (e < t->val)
    {
        return search_ordered_tree(e, t->left);
    }
    return search_ordered_tree(e, t->right);
}

int count_occurrences_tree(tree_t e, TreeNode *t)
{
    // count(e,t) = 0 if t is empty
    // count(e,t) = count(e, t->left) + count(e, t->right) if t-val !=e
    // count(e,t) = 1 + count(e, t->left) + count(e, t->right) if t->val = e

    if (t == NULL)
    {
        return 0;
    }
    else if (t->val == e)
    {
        return 1 + count_occurrences_tree(e, t->left) + count_occurrences_tree(e, t->right);
    }
    return count_occurrences_tree(e, t->left) + count_occurrences_tree(e, t->right);
}

TreeNode *min_element_tree(TreeNode *t)
{
    // minelement(t) = NULL if t = NULL
    //

    if (t == NULL)
    {
        return NULL;
    }
    if (t->left == NULL)
    {
        return t;
    }
    return min_element_tree(t->left);
}

int count_nodes_tree(TreeNode *t)
{
    if (t == NULL)
    {
        return 0;
    }
    else if (t->left == NULL)
    {
        return 1 + count_nodes_tree(t->right);
    }
    else if (t->right == NULL)
    {
        return 1 + count_nodes_tree(t->left);
    }
    return 1 + count_nodes_tree(t->left) + count_nodes_tree(t->right);
}

int count_leaves_tree(TreeNode *t)
{
    if (t == NULL)
    {
        return 0;
    }
    if (t->left == NULL && t->right == NULL)
    {
        return 1;
    }
    return count_leaves_tree(t->right) + count_leaves_tree(t->left);
}

int main()
{
    TreeNode *t;
    t = NULL;

    // 2, 4, 8, 10, 12, 14, 16
    t = ordered_insertion_tree(1, t);
    t = ordered_insertion_tree(2, t);
    t = ordered_insertion_tree(3, t);
    t = ordered_insertion_tree(4, t);
    t = ordered_insertion_tree(5, t);
    t = ordered_insertion_tree(6, t);

    print_tree(t);
    std::cout << "/////////////" << std::endl;
    TreeNode *node = min_element_tree(t);
    // tree_t e;
    // std::cin >> e;
    // std::cout << count_occurrences_tree(e, t) << std::endl;
    std::cout << count_nodes_tree(t) << std::endl
              << "///////////" << std::endl
              << count_leaves_tree(t) << std::endl
              << "////////" << node->val << std::endl;
    deallocate_tree(t);
}