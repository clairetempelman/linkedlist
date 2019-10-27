#include <stdio.h>
#include <stdlib.h>
#include "linkedlisth.h"


void print_list(struct node * front){
  printf("[ ");
  while (front != NULL){
    printf("%d ", front->i);
    front = front->next;
  }
  printf("]\n");
}
struct node * insert_front(struct node * front, int x){
  struct node * new_front;
  new_front = (struct node *)malloc(sizeof(struct node));
  new_front->i = x;
  new_front->next = front;
  return new_front;
}
struct node * free_list(struct node * front){
  struct node * front1;
  while(front != NULL){
    front1 = front;
    front = front->next;
    free(front1);
  }
  return front;
}
struct node * remove_node(struct node * front, int data){
  struct node * n = front->next;
  struct node * prev = front;
  if (front->i == data){
    free(front);
    return n;
  }
  while (n != NULL){
    if (n->i == data){
      prev->next = n->next;
      free(n);
      return front;
    }
    prev = n;
    n = n->next;
  }
  return front;
}
