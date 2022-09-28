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