#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_spaceship(char* param_1) {
  // Initialize the spaceship's starting position and direction
  int x = 0;
  int y = 0;
  char* direction = "up";
  
  // Loop through each character in the input string
  for (int i = 0; i < strlen(param_1); i++) {
    // If the character is 'R', turn right
    if (param_1[i] == 'R') {
      if (strcmp(direction, "up") == 0) {
        direction = "right";
      } else if (strcmp(direction, "right") == 0) {
        direction = "down";
      } else if (strcmp(direction, "down") == 0) {
        direction = "left";
      } else if (strcmp(direction, "left") == 0) {
        direction = "up";
      }  
    // If the character is 'L', turn left
    } else if (param_1[i] == 'L') {
      if (strcmp(direction, "up") == 0) {
        direction = "left";
      } else if (strcmp(direction, "right") == 0) {
        direction = "up";
      } else if (strcmp(direction, "down") == 0) {
        direction = "right";
      } else if (strcmp(direction, "left") == 0) {
        direction = "down";
      }
    // If the character is 'A', move forward in the current direction
    } else if (param_1[i] == 'A') {
      if (strcmp(direction, "up") == 0) {
        y--;
      } else if (strcmp(direction, "right") == 0) {
        x++;
      } else if (strcmp(direction, "down") == 0) {
        y++;
      } else if (strcmp(direction, "left") == 0) {
        x--;
      }
    }
  }

  // Allocate memory for the result string
  char* result = (char*) malloc(sizeof(char) * 50);

  // Format the result string
  snprintf(result, 50, "{x: %d, y: %d, direction: '%s'}", x, y, direction);

  // Return the result string
  return result;
}

// Example usage
/*  int main() {
  char* result = my_spaceship("RAALAL");
  printf("%s\n", result);
  free(result); // Free the memory allocated for the result string
  return 0;
}   */



           