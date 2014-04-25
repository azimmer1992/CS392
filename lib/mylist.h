#ifndef _MYLIST_H_
#define _MYLIST_H_

#include "my.h"

typedef struct s_node
{
  void *elem;
  struct s_node *next;
} t_node;

/*Precondition: takes a void* and t_node* as input
 *Postcondition: creates a new node, void *elem is the data in the node, if void *elem is NULL it will return NULL
 */
t_node *new_node(void*, t_node*);

/*Precondition: takes a t_node* and t_node** as input
 *Postcondition if t_node* or t_node** are NULL it will do nothing, else adds a new t_node at the head of the list
 */
void add_node(t_node*, t_node**);

/*Precondition: takes a void* and t_node** as input
 *Postcondition: if either void* or t_node** are NULL it does nothing, else adds a new t_node with elem value of the void* to the head of the list
 */
void add_elem(void*, t_node**);

/*Precondition: takes a t_node* and t_node** as input
 *Postcondition: if either t_node* or t_node** are NULL it does nothing, else it will add a t_node at the end of the list
 */
void append(t_node*, t_node**);

/*Precondition: takes a t_node*, t_node** and unsigned int as input
 *Postcondition: if either t_node* or t_node** are NULL it does nothing, else it will add a t_node at position n in the list (if n > legnth of list it will append the t_node to the end)
 */
void add_node_at(t_node*, t_node**, unsigned int);

/*Precondition: takes a t_node** as input
 *Postcondition: returns the elem of the head node then removes it from the list, returns NULL if empty or NULL input
 */
void *remove_node(t_node**);

/*Precondition: takes t_node** and unsigned int as input
 *Postcondition: returns the elem of node at index n and removes it from the list, returns NULL if empty or NULL input
 */
void *remove_node_of(t_node**, unsigned int);

/*Precondition: takes t_node** as input
 *Postcondition: returns the elem of last node and removes it from the list, returns NULL if empty list or NULL input
 */
void *remove_last(t_node**);

/*Precondition: takes t_node* as input
 *Postcondition: returns size of list
 */
unsigned int count_nodes(t_node*);

/*Precondition: takes t_node** as input
 *Postcondition: empties entire list, if NULL input does nothing
 */
void empty_list(t_node**);

/*Precondition: takes t_node* and unsigned int input
 *Postcondition: returns node at index n, if NULL input returns NULL
 */
t_node *node_at(t_node*, unsigned int);

/*Precondition: takes t_node* and unsigned int as input
 *Postcondtion: return elem of node at index n, if NULL input returns NULL
 */
void *elem_at(t_node*, unsigned int);

/*Precondition: takes t_node* as input
 *Postcondition: prints elems of all nodes in list with " " between or "List is empty" if NULL or empty
 */
void traverse_char(t_node*);
void traverse_int(t_node*);
void traverse_string(t_node*);

#endif
