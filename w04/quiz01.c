#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int element;
typedef struct ListNode {
    element data;
    struct ListNode *link;
} ListNode;

ListNode *insert_first(ListNode *head, element value) {
    ListNode *p = (ListNode *)malloc(sizeof(ListNode));
    p->data = value;
    p->link = head;
    head = p;
    return head;
}

// 맨 앞의 노드를 삭제
ListNode *remove_first(ListNode *head) {
    ListNode *removed;
    if (head == NULL)
        return NULL;
    removed = head;
    head = removed->link;
    free(removed);
    return head;
}

ListNode *search_list(ListNode *head, element x) {
    ListNode* p = head;

    while(p != NULL) {
        if (p->data == x) {
            return p;
        }
        p = p->link;
    }

    return NULL;
}

void print_list(ListNode *head) {
    for (ListNode *p = head; p != NULL; p = p->link) {
        printf("%d->", p->data);
    }
    printf("NULL \n");
}

int main() {
    ListNode *head = NULL;
    for (int i = 0; i < 5; i++) {
        head = insert_first(head, i * 10);
        print_list(head);
    }

    if (search_list != NULL) {
        printf("Found the value %d successfully.", 30);
    } else {
        printf("Couldn't find the value %d.", 30);
    }

    return 0;
}
