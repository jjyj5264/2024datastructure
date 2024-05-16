#include <iostream>
#include <string>

#define MAX_NODES 100

typedef struct TreeNode {
  std::string name;
  int left;  // 왼쪽 자식의 index
  int right; // 오른쪽 자식의 index
} TreeNode;

int main() {
  int t;
  std::cin >> t;

  for (int i = 0; i < t; i++) {
    // 트리를 위한 배열, 0번 인덱스는 사용 X
    TreeNode tree[MAX_NODES + 1];

    for (int i = 1; i <= MAX_NODES; i++) {
      tree[i].name = "";
      tree[i].left = i * 2;
      tree[i].right = (i * 2) + 1;
    }

    int n = 0; // 노드의 개수
    std::cin >> n;

    for (int i = 0; i < n; i++) {
      std::cin >> tree[i + 1].name;
    }

    for (int i = 0; i < n; i++) {
      int length = 0;
      int index = i + 1;

      while (index != 0) {
        length += tree[index].name.length();
        index /= 2;

        if (index != 0) {
          length += 1;
        }
      }

      std::cout << length << std::endl;
    }
  }
}
