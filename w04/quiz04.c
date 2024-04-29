#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 10

typedef int element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;
// 스택 초기화 함수
void init_stack(StackType *s) {
    s->top = -1;
}
// 공백 상태 검출 함수
int is_empty(StackType *s) {
    return (s->top == -1);
}
// 포화 상태 검출 함수
int is_full(StackType *s) {
    return (s->top == (MAX_STACK_SIZE - 1));
}
// 삽입 함수
void push(StackType *s, element item) {
    if (is_full(s)) {
        fprintf(stderr, "스택 overflow\n");
        return;
    } else
        s->data[++(s->top)] = item;
}
// 삭제 함수
element pop(StackType *s) {
    if (is_empty(s)) {
        fprintf(stderr, "스택 underflow\n");
        exit(1);
    } else
        return s->data[(s->top)--];
}

int main() {
    int infinity = 987654321;
    int problem_num = 0;

    scanf("%d", &problem_num);

    for (int problem = 0; problem < problem_num; problem++) {
        int query_num = 0;
        StackType min_stack;
        StackType max_stack;
        scanf("%d", &query_num);
        init_stack(&min_stack);
        init_stack(&max_stack);
        push(&min_stack, infinity);
        push(&max_stack, -infinity);

        for (int query = 0; query < query_num; query++) {
            /* code */
        }
        // ...
    }
}