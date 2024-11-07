#include <cstdio>
#include <string>
using namespace std;

int main(){
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  printf("%d\n", a + b - c);
  string A = to_string(a);
  string B = to_string(b);

  string result = A + B;

  int add = stoi(result);

  printf("%d", add-c);

  return 0;
}