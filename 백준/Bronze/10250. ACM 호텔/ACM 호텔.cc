#include <iostream>
#include <string>

using namespace std;

int main() {
  int test;
  int H, W, N;

  scanf("%d", &test);

  for(int i = 0; i < test; i++) {
    scanf("%d %d %d", &H, &W, &N);

    string result, result1, result2;

    int h = N % H;
    int w = (N / H) + 1;

    if(N < H) {
      w = 1;
    }

    if(h == 0) {
      result1 = to_string(H);
      w = w - 1;
    } else {
      result1 = to_string(h);
    }

    result2 = to_string(w);
    if(w < 10) {
      result2 = '0' + result2;
    }

    result = result1 + result2;

    cout << result << '\n';
  }
}