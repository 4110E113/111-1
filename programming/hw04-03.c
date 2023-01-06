#include <stdio.h>
int main() {
  int n;
  printf("\n請輸入一維陣列元素個數: ");
  scanf("%d", &n);
  printf("\n請輸入一維陣列元素: \n");
  findMaxElem(n);
  return 0;
}

int findMaxElem(n) {
  double arr[100];
  for (int i = 0; i < n; ++i) {
    printf("元素 - %d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
  printf("陣列中最大的元素是: %.0f \n", arr[0]);
}