
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct lnode {
 int data;
 struct lnode *next;
} *head, *visit;


void llist_add(struct lnode **q, int num);

void llist_bubble_sort(void);

void llist_print(void);

int main(void) {
 /* linked list */
 struct lnode *newnode = NULL;
 int i = 0; /* a general counter */

 /* Linked liste rastgele deger uretme */
 for(i = 0; i < MAX; i++) {
  llist_add(&newnode, (rand() % 100));
 }

 head = newnode;
 printf("         The List:\n");
 llist_print();
 printf("    After  bubble sort:\n");
 llist_bubble_sort();
 llist_print();

printf("\n\n    Prees Enter to exit..\n\n");

 return 0;
}


void llist_add(struct lnode **q, int num) {
 struct lnode *tmp;

 tmp = *q;

 if(*q == NULL) {
  *q = malloc(sizeof(struct lnode));
   tmp = *q;
 } else {

  while(tmp->next != NULL)
   tmp = tmp->next;


   tmp->next = malloc(sizeof(struct lnode));
   tmp = tmp->next;
 }


 tmp->data = num;
 tmp->next = NULL;
}


void llist_print(void) {
 visit = head;

 while(visit != NULL) {
  printf("%d ", visit->data);
  visit = visit->next;
 }
 printf("\n");
}

void llist_bubble_sort(void) {
 struct lnode *a = NULL;
 struct lnode *b = NULL;
 struct lnode *c = NULL;
 struct lnode *e = NULL;
 struct lnode *tmp = NULL;


 while(e != head->next) {
 c = a = head;
 b = a->next;
  while(a != e) {
   if(a->data > b->data) {
    if(a == head) {
     tmp = b -> next;
     b->next = a;
     a->next = tmp;
     head = b;
     c = b;
    } else {
     tmp = b->next;
     b->next = a;
     a->next = tmp;
     c->next = b;
     c = b;
    }
   } else {
    c = a;
    a = a->next;
   }
   b = a->next;
   if(b == e)
    e = a;
  }
 }
}

