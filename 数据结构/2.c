#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int length;
} SeqList;

// 初始化顺序表
void init(SeqList *list) {
    list->length = 0;
}

// 插入元素到顺序表的指定位置
int insert(SeqList *list, int position, int value) {
    if (position < 0 || position > list->length || list->length == MAX_SIZE) {
        return -1;  // 插入失败
    }

    for (int i = list->length - 1; i >= position; i--) {
        list->data[i + 1] = list->data[i];  // 向后移动元素
    }

    list->data[position] = value;
    list->length++;

    return 0;  // 插入成功
}

// 删除顺序表中指定位置的元素
int removeAt(SeqList *list, int position) {
    if (position < 0 || position >= list->length) {
        return -1;  // 删除失败
    }

    for (int i = position; i < list->length - 1; i++) {
        list->data[i] = list->data[i + 1];  // 向前移动元素
    }

    list->length--;

    return 0;  // 删除成功
}

// 输出顺序表中的元素
void display(const SeqList *list) {
    for (int i = 0; i < list->length; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

int main() {
    SeqList list;
    init(&list);

    // 插入元素
    insert(&list, 0, 10);
    insert(&list, 1, 20);
    insert(&list, 2, 30);

    // 输出顺序表
    display(&list);

    // 删除元素
    removeAt(&list, 1);

    // 输出顺序表
    display(&list);

    return 0;
}
