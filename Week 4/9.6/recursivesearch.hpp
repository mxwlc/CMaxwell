#include <iostream>

typedef int list_t;

// using typedef we can change the type only in one line
// if we want a linked list implementation
// that works for a different type

struct ListNode
{
    list_t val;
    ListNode *next;
};

ListNode *cons_list(list_t e, ListNode *l)
{
    ListNode *tmp;

    tmp = new ListNode;

    tmp->val = e;
    tmp->next = l;

    return tmp;
}

void print_list(ListNode *l)
{
    while (l != NULL)
    {
        std::cout << l->val << std::endl;
        l = l->next;
    }
}

void deallocate_list(ListNode *l)
{
    ListNode *tmp;

    while (l != NULL)
    {
        tmp = l->next;
        delete l;
        l = tmp;
    }
}

int length_list_rec(ListNode *l)
{
    if (l == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + length_list_rec(l->next);
    }
}

bool search_list_rec(list_t e, ListNode *l)
{
    if (l == NULL)
    {
        return false;
    }
    else if (l->val == e)
    {
        return true;
    }
    else
    {
        return search_list_rec(e,l->next);
    }
}

int main()
{
    ListNode *l = NULL;

    int n;
    std::cout << "Input n" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int current;
        std::cin >> current;
        l = cons_list(current, l);
    }
    std::cout << "end" << std::endl;
    print_list(l);
    std::cout << "end" << std::endl;
    std::cout << length_list_rec(l) << std::endl;

    int e;
    std::cout << "input e" << std::endl;
    std::cin >> e;
    std::cout << search_list_rec(e, l);
    deallocate_list(l);
}