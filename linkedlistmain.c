#include <stdio.h>
#include <stdlib.h>
#include "linkedlisth.h"

int main(){
  printf("Printing empty list:\n");
  struct node * list = NULL;
  print_list(list);
  printf("Adding #s 0-9 to list.\n");
  list = insert_front(list, 0);
  list = insert_front(list, 1);
  list = insert_front(list, 2);
  list = insert_front(list, 3);
  list = insert_front(list, 4);
  list = insert_front(list, 5);
  list = insert_front(list, 6);
  list = insert_front(list, 7);
  list = insert_front(list, 8);
  list = insert_front(list, 9);
  printf("Printing list:\n");
  print_list(list);
  printf("Removing 9:\n");
  list = remove_node(list, 9);
  print_list(list);
  printf("Removing 4:\n");
  list = remove_node(list, 4);
  print_list(list);
  printf("Removing 0:\n");
  list = remove_node(list, 0);
  print_list(list);
  printf("Removing -1:\n");
  list = remove_node(list, -1);
  print_list(list);
  printf("Freeing list.\n");
  list = free_list(list);
  printf("Printing list:\n");
  print_list(list);
}
