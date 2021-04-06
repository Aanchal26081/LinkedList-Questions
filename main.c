// ****************************************Linked List****************************************//

// 1. Linked List: Creation and Traversal
// #include<stdlib.h>
// #include<stdio.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// void traversal(struct Node *ptr){
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n",ptr-> data);
//         ptr = ptr-> next;
//     }
// }

// int main(){
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * forth;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     forth = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 9;
//     head->next = second;
//     second->data = 7;
//     second->next = third;
//     third->data = 8;
//     third->next = forth;
//     forth->data = 6;
//     forth->next = NULL;

//     traversal(head);

//     return 0;
// }
// **************************************************************************//


// 2. Linked List: Insertion
// #include<stdlib.h>
// #include<stdio.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// void traversal(struct Node *ptr){
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n",ptr-> data);
//         ptr = ptr-> next;
//     }
// }

// struct Node * InsertionAtBeginning(struct Node *head, int data){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = data;
//     return ptr;

// }
// struct Node * InsertionInBetween(struct Node *head, int data , int index){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     int i = 0;
//     while (i != index-1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }
// struct Node * InsertionAtEnd(struct Node *head, int data){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     struct Node *p = head;
//     while (p->next != NULL)
//     {
//        p = p->next;
//     }
//     p ->next = ptr;
//     ptr->next = NULL;
//     return head;

// }
// struct Node * InsertionAfterNode(struct Node *head, int data, struct Node *preNode){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;
//     ptr->next = preNode->next;
//     preNode->next = ptr;
//     return head;
// }

// int main(){
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * forth;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     forth = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 9;
//     head->next = second;
//     second->data = 7;
//     second->next = third;
//     third->data = 8;
//     third->next = forth;
//     forth->data = 6;
//     forth->next = NULL;

//     printf("Element before insertion:\n");
//     traversal(head);
//     head = InsertionAtBeginning(head, 45);
//     head = InsertionInBetween(head,4,2);
//     head = InsertionAtEnd(head,5);
//     head = InsertionAfterNode(head, 10 , third);
//     printf("Element after insertion:\n");
//     traversal(head);

//     return 0;
// }
// **************************************************************************//


// 3. Linked List: Deletion
// #include<stdlib.h>
// #include<stdio.h>

// struct Node {
//     int data;
//     struct Node *next;
// };

// void traversal(struct Node *ptr){
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n",ptr-> data);
//         ptr = ptr-> next;
//     }
// }

// struct Node * DeletionAtBeginning(struct Node *head){
//     struct Node * ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }
// struct Node * DeletionInBetween(struct Node *head, int index){
//     struct Node *p = head;
//     struct Node *q = p->next;
//     int i = 0;
//     for (int i = 0; i < index-1; i++){
//         p = p->next;
//         q = q->next;
//     }
//     p->next = q->next;
//     free(q);
//     return head;
// }
// struct Node * DeletionAtEnd(struct Node *head){
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while (q->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
// }
// struct Node * DeletionAfterNode(struct Node *head, int value){
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while(q->data!=value && q->next!= NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
    
//     if(q->data == value){
//         p->next = q->next;
//         free(q);
//     }
//     return head;
// }

// int main(){
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * forth;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     forth = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 9;
//     head->next = second;
//     second->data = 7;
//     second->next = third;
//     third->data = 8;
//     third->next = forth;
//     forth->data = 6;
//     forth->next = NULL;

//     printf("Element before deletion:\n");
//     traversal(head);
//     head = DeletionAtBeginning(head);
//     head = DeletionInBetween(head,2);
//     head = DeletionAtEnd(head);
//     head = DeletionAfterNode(head, 8);
//     printf("Element after deletion:\n");
//     traversal(head);

//     return 0;
// }