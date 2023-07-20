#include <stdio.h>
#include <string.h>

int main() {

  char word[100];
  printf("Enter a word in lower-case characters: ");
  fflush(stdin);

  fgets(word, 20, stdin);

  int hash[26] = {0};

  for (int i = 0; word[i] != '\0'; i++) {
    hash[word[i] - 97]++;
  }

  for (int i = 0; i < 26; i++) {
    if (hash[i] > 1) {

      printf("%c ", (i + 97));
      printf("%d", hash[i]);
      printf("\n");
    }
  }

  return 0;
}
