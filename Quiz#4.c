#include <stdio.h>

int main() {
  int scores[5];
  int sum = 0;

  for (int i = 0; i < 5; i++) {
    printf("Enter test score %d: ", i + 1);
    scanf("%d", &scores[i]);
    sum += scores[i];
  }

  float average = (float)sum / 5;

  printf("The average of the test scores is: %.2f\n", average);

  return 0;
}


