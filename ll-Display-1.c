#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node *next;
} *first = NULL;
void create(int A[], int n) {
  int i;
  struct Node *t, *last;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (i = 1; i < n; i++) {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}
void Display(struct Node *p) {
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
}
void RDisplay(struct Node *p) {
  if (p != NULL) {
    RDisplay(p->next);
    printf("%d ", p->data);
  }
}
int count(struct Node *p) {
  int l = 0;
  while (p) {
    l++;
    p = p->next;
  }
  return l;
}
int sum(struct Node *p) {
  int sum = 0;
  while (p) {
    sum = sum + p->data;
    p = p->next;
  }
  return sum;
}
int max(struct Node *p){
  int m=INT_MIN;
  while (p) {
    if (p->data>m){
      m=p->data;
    }
    p=p->next;
  }
  return m;
}
struct Node* Lsearch(struct Node* p,int key){
  while (p) {
    if (key==p->data) {
      return p;
    }
    p=p->next;
  }
  return NULL;
}

// Instertion of linked list
void Instert(struct Node *p,int index,int x){
  if (index < 0 || index > count(p))
    return;
  struct Node *t;
  t=(struct Node*)malloc(sizeof(struct Node));
  t->data=x;

  if (index == 0)
  {
    t->next=first;
    first=t;
  }
  else{
      int i;
      for (i=0;i<index-1;i++)
      {
        p=p->next;
      }
      t->next=p->next;
      p->next=t;
  }
}
void SortedInsert(struct Node *p,int x)
{
  struct Node *t,*q=NULL;
  t=(struct Node *)malloc(sizeof(struct Node));
  t->data=x;
  t->next=NULL;
  if(first==NULL)
  {
    first=t;
  }
  else {
    while (p && p->data<x) {
      q=p;
      p=p->next;
    }
    if (p==first)
    {
      t->next=first;
      first=t;
    }
    else {
      t->next=q->next;
      q->next=t;
    }
  }
}
int Delete(struct Node *p,int index)
{
  struct Node *q;
  int x=-1,i;
  if (index<1 || index>count(p))
  {
    return -1;
  }
  if (index==1)
  {
    q=first;
    x=first->data;
    first=first->next;
    free(p);
    return x;
  }
  else {
    for (i=0;i<index-1;i++)
    {
      q=p;
      p=p->next;
    }
    q->next=p->next;
    x=p->data;
    free(p);
    return x;
  }
}
int main() {
  struct Node *temp;
  int A[] = {1, 1, 11};
  create(A, 3);
  Delete(first, 1);

  // SortedInsert(first, 10);
  // SortedInsert(first, 9);
  // Instert(first, 1, 10);
    Display(first);
  // printf("Number of nodes: %d\n", count(first));
  // printf("The sum of all elements in the Linked List: %d\n", sum(first));
  // printf("The maximum of all the elements present: %d\n",max(first));

  
  // temp=Lsearch(first, 5);
  // if (temp) {
  //   printf("Key is found.\n");
  // }
  // else {
  //   printf("Not found.\n");
  // }

  

  return 0;
}