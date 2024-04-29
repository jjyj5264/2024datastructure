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

ListNode *reverse(ListNode *head) {
    ListNode *p, *q, *r;

    p = head; // 역순으로 만들 리스트
    q = NULL; // 역순으로 만들 노드

    while(p != NULL) {
        r = q; // 역순으로 된 리스트
        q = p;
        p = p->link;
        q->link = r; // q의 링크 방향 반전
    }

    return q;
}

void print_list(ListNode *head) {
    for (ListNode *p = head; p != NULL; p = p->link) {
        printf("%d->", p->data);
    }
    printf("NULL \n");
}

int main() {
    ListNode *a = NULL;
    ListNode *b = NULL;
    for (int i = 0; i < 5; i++) {
        a = insert_first(a, i);
    }
    print_list(a);

    b = reverse(a);
    print_list(b);

    return 0;
}
