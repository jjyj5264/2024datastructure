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

ListNode *concat_list(ListNode *a, ListNode *b) {
    if (a == NULL) {
        return b;
    } else if (b == NULL) {
        return b;
    } else {
        ListNode *p = a;
        
        while(p->link != NULL) {
            p = p->link; // 맨 뒤의 노드 탐색
        }

        p->link = b; // 맨 뒤의 노드를 b의 맨 앞에 연결

        return a;
    }
    
}

void print_list(ListNode *head) {
    for (ListNode *p = head; p != NULL; p = p->link) {
        printf("%d->", p->data);
    }
    printf("NULL \n");
}

int main() {
    ListNode *listA = NULL;
    ListNode *listB = NULL;
    ListNode *listC = NULL;
    for (int i = 0; i < 5; i++) {
        listA = insert_first(listA, i);
        listB = insert_first(listB, i * 3);
    }
    
    listC = concat_list(listA, listB);
    print_list(listA);
    print_list(listB);
    print_list(listC);

    return 0;
}
