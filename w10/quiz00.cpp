#include <iostream>

int main() {
  int t;
  int n;
  int m;
  int candies[100];

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::cin >> n; // number of candies
    std::cin >> m; // length
    int longest = 0;

    for (int i = 0; i < n; i++) {
      std::cin >> candies[i];

      if (longest < candies[i]) {
        longest = candies[i];
      }
    }

    longest--;

    for (int i = longest; i > 0; i--) {
      int sum = 0;

      for (int j = 0; j < n; j++) {
        if ((candies[j] - i) >= 0) {
          sum += (candies[j] - i);
        }
      }

      if (sum == m) {
        std::cout << "The maximum length of M is: " << i << std::endl;
        break;
      }
    }
  }
}