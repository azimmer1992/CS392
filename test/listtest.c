#include "../lib/mylist.h"

int main()
{
  
  //Testing new_node
  OGNode = new_node("OG", NULL); //Creates a node with data "OG" which does not connect to another node
  if(new_node(NULL, NULL) == NULL)
    my_str("NULL node data working correctly");
  else
    my_str("ERROR CREATION OF NODE WITH NULL DATA!");
  NoobNode = new_node("Wannabe", OGNode); //Creats a node with data "Wannabe" which conneccts to OGNode
  NoobNode->next=NULL;
  free(NoobNode);

  //Testing add_node
  t_node *linked = (t_node *)xmalloc(10*sizeof(t_node));
  if(add_node(NULL, &linked[0]) == NULL)
    my_str("NULL node add working correctly");
  else
    my_str("ERROR ADDED A NULL NODE TO HEAD OF LIST!");
  if(add_node(OGNode, NULL) == NULL)
    my_str("Adding a node to NULL list working correctly");
  else
    my_str("WARNING ADDING A NODE TO NON EXISTANT LIST!");
  add_node(OGNode, &linked[0]);
  if(linked[0]->elem == "OG")
    my_str("Correctly added a node to a list");
  else
    my_str("ERROR INCORRECTLY ADDED NODE TO A LIST!");

  //Testing add_elem
  if(add_elem(NULL, &linked) == NULL)
    my_str("Handled adding NULL elem to head node in linked list");
  else
    my_str("ERROR ADDED NULL ELEM TO HEAD NODE OF LINKED LIST");
  if(add_elem("New School", NULL) == NULL)
    my_str("Handled changing head node elem of a null linked list");
  else
    my_str("ERROR ADDED A NULL ELEM TO HEAD OF NULL LIST");
  add_elem("New School", &linked);
  if(linked[0]->elem == "New School")
    my_str("Correctly changed elem of head node in linked list");
  else
    my_str("ERROR INCORRECTLY CHANGE ELEM OF HEAD NODE IN LINKED LIST!");

  //Testing append
  NewNode = new_node("Fresh", NULL);
  if(append(NULL, &linked) == NULL)
    my_str("Correctly handled appending a NULL node to a linked list");
  else
    my_str("ERROR APPENDED A NULL NODE TO A LINKED LIST!");
  if(append(NewNode, NULL) == NULL)
    my_str("Correctly handled appending a node to a NULL list");
  else
    my_str("ERROR APPENDED A NODE TO A NULL LINKED LIST!");
  append(NewNode, &linked);
  if(linked[1]->elem == "Fresh")
    my_str("Correctly appended a node to a linked list");
  else
    my_str("ERROR INCORRECTLY APPENDED A NODE TO A LINKED LIST!");

  //Testing add_node_at
  PunkNode = new_node("Rock", NULL);
  PopNode = new_node("Dance", NULL);
  if(add_node_at(NULL, &linked, 0) == NULL)
    my_str("Correctly handled adding a NULL node in a linked list");
  else
    my_str("ERROR ADDED A NULL NODE TO A LINKED LIST!");
  if(add_node_at(PunkNode, NULL, 0) == NULL)
    my_str("Correctly handled adding a node to a NULL list");
  else
    my_str("ERROR ADDED A NODE TO A NULL LINKED LIST!");
  add_node_at(PunkNode, &linked, 0);
  if(linked[0]->elem == "Rock")
    my_str("Correctly added node to position n of the linked list");
  else
    my_str("ERROR INCORRECTLY ADDED NODE TO THE WRONG POSITION!");
  add_node_at(PopNode, &linked, 5);
  if(linked[3]->elem == "Dance")
    my_str("Correctly added node to end of list when want to be added greater than list");
  else
    my_str("ERROR COULD NOT HANDLED ADDING NODE TO LIST WHEN POSITION GREATER THAN LEGNTH!");

  //Testing remove_node
  if(remove_node(NULL) == NULL)
    my_str("Correctly handled removing a node from a NULL linked list");
  else
    my_str("ERROR ATTEMPTED TO REMOVE A NODE FROM A NULL LINKED LIST!");
  if(remove_node(&linked) == "Rock")
    my_str("Correctly removed node from head of linked list");
  else
    my_str("ERROR INCORRECTLY REMOVE NODE FROM HEAD OF LINKED LIST!");

  //Testing count_nodes
  if(count_nodes(linked) == 3)
    my_str("Correctly counted the number of nodes in the linked list");
  else
    my_str("ERROR INCORRECTLY COUNTED THE NUMBER OF NODES IN THE LINKED LIST!");
  if(count_nodes(NULL) == 0)
    my_str("Correctly handled the counting a nodes in a NULL linked list");
  else
    my_str("ERROR INCORRECTLY COUNTED THE NUMBER OF NODES IN A NULL LINKED LIST!");

  //Testing node_at
  if(node_at(NULL, 0) == NULL)
    my_str("Correctly handled getting the node at position n in a NULL linked list");
  else
    my_str("ERROR ATTEMPTED TO RETRIEVE A NODE FROM A NULL LINKED LIST!");
  if(node_at(linked, 5) == NULL)
    my_str("Correctly handled attempt to retrieve node from index greater than legnth");
  else
    my_str("ERROR RETRIEVED NODE FROM INDEX GREATER THAN LINKED LIST LEGNTH!");
  if(node_at(linked, 0)->elem == "New School")
    my_str("Correctly retrieved node from index n in linked list");
  else
    my_str("ERROR INCORRECTLY RETRIEVED NODE FROM INDEX N IN LINKED LIST!");

  //Testing elem_at
  if(elem_at(NULL, 0) == NULL)
    my_str("Correctly handled getting elem at index n in NULL linked list");
  else
    my_str("ERROR ATTEMPTED TO RETRIEVE AN ELEM FROM A NULL LINKED LIST!");
  if(elem_at(linked, 5) == NULL)
    my_str("Correctly handled attempt to retrieve elem from index greater than list legnth");
  else
    my_str("ERROR ATTEMPTED TO RETRIEVE ELEM FROM INDEX GREATER THAN LINKED LIST LEGNTH!");
  if(elem_at(linked, 0) == "New School")
    my_str("Correctly return elem of node at index n of linked list");
  else
    my_str("ERROR RETURNED INCORRECT ELEM OF NODE AT INDEX N OF LINKED LIST!");

  //Testing traverse_int
  if(traverse_int(NULL) == "List is empty")
    my_str("Correctly traverse NULL linked list");
  else
    my_str("ERROR ATTEMPTED TO TRAVERSE NULL LINKED LIST!");
  if(traverse_int(linked) == "List is empty")
    my_str("Correctly traversed linked list with no int elems");
  else
    my_str("ERROR INCORRECTLY TRAVERSE LINKED LIST WITH NO INT ELEMS!");

  //Testing traverse_char
  if(traverse_char(NULL) == "List is empty")
    my_str("Correctly traverse NULL linked list");
  else
    my_str("ERROR ATTEMPTED TO TRAVERSE NULL LINKED LIST!");
  if(traverse_char(linked) == "List is empty")
    my_str("Correctly traversed linked list with no char elems");
  else
    my_str("ERROR INCORRECTLY TRAVERSE LINKED LIST WITH NO CHAR ELEMS!");

  //Testing traverse_string
  if(traverse_string(NULL) == "List is empty")
    my_str("Correctly traverse NULL linked list");
  else
    my_str("ERROR ATTEMPTED TO TRAVERSE NULL LINKED LIST!");
  my_str(traverse_string(linked)); //Prints "New School Fresh Dance"

  //Testing remove_node_of
  if(remove_node_of(NULL, 0) == NULL)
    my_str("Correctly handled removing node of NULL linked list");
  else
    my_str("ERROR ATTEMPTED TO REMOVE NODE IN A NULL LINKED LIST!");
  if(remove_node_of(linked, 4)->elem == "Dance")
    my_str("Correctly removed node from list when index n is greater than legnth of linke list");
  else
    my_str("ERROR REMOVED INCORRECT NODE WHEN INDEX N IS GREATER THAN LEGNTH OF LINKED LIST!");

  //Testing remove_last
  if(remove_last(NULL) == NULL)
    my_str("Correctly handled removing node of NULL linked list");
  else
    my_str("ERROR ATTEMPTED TO REMOVE LAST NODE OF A NULL LINKED LIST!");
  if(remove_last(linked)->elem == "Fresh")
    my_str("Correctly removed last node from linked list");
  else
    my_str("ERROR INCORRECTLY REMOVED LAST NODE FROM LINKED LIST!");

  //Testing empty_list
  if(empty_list(NULL) == NULL)
    my_str("Correctly handled emptying of NULL linked list");
  else
    my_str("ERROR ATTEMPTED TO EMPTY A NULL LINKED LIST!");
  empty_list(linked);
  if(count_nodes(linked) == 0)
    my_str("Correctly emptied linked list");
  else
    my_str("ERROR INCORRECTLY EMPTIED LINKED LIST!");
