#include <stdio.h>

int main() {
  float wire_length, frame_length, frame_width;

  printf("Enter the length of the wire: ");
  scanf("%f", &wire_length);

  frame_width = wire_length / (1 + 1.5);
  frame_length = 1.5 * frame_width;

  printf("The length of the picture frame is: %.2f\n", frame_length);
  printf("The width of the picture frame is: %.2f\n", frame_width);

  return 0;
}