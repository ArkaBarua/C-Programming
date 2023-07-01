#include "stdio.h"
#include "string.h"

/*
C strcmp() is a built-in library function that is used for string comparison.
 This function takes two strings (array of characters) as arguments,
 compares these two strings lexicographically, and then returns 0,1, or -1 as
the result.

 1. Zero ( 0 )

A value equal to zero when both strings are found to be identical. That is, all
of the characters in both strings are the same.
2. Greater than Zero ( > 0 )

A value greater than zero is returned when the first not-matching character in
first_str has a greater ASCII value than the corresponding character in
second_str or we can also say that if the character in first_str is
lexicographically after the character of second_str, then zero is returned.
3. Lesser than Zero ( < 0 )

A value less than zero is returned when the first not-matching character in
first_str has a lesser ASCII value than the corresponding character in
second_str. We can also say that if the character in first_str is
lexicographically before the character of second_str, zero is returned.
*/
int main() {
  // declaring two same string
  char *first_str = "Geeks";
  char *second_str = "Geeks";

  // printing the strings
  printf("First String: %s\n", first_str);
  printf("Second String: %s\n", second_str);

  // printing the return value of the strcmp()
  printf("Return value of strcmp(): %d", strcmp(first_str, second_str));

  return 0;
}