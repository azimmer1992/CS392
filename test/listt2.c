#include "../lib/mylist.h"

int main()
{
  t_node *head = NULL;
  t_node *blah = new_node("Hello", NULL);
  add_node(blah, &head);
  add_node(new_node("Goodbye",NULL), &head);
  traverse_string(head);
  my_char('\n');
  add_elem("Seltaeb", &head);
  traverse_string(head);
  my_char('\n');
  append(new_node("Goodbye", NULL), &head);
  traverse_string(head);
  my_char('\n');
  t_node *test = NULL;
  append(new_node("Works", NULL), &test);
  traverse_string(test);
  my_char('\n');
  add_node_at(new_node("Apple",NULL), &test, 0);
  traverse_string(test);
  my_char('\n');
  add_node_at(new_node("To", NULL), &test, 1);
  traverse_string(test);
  my_char('\n');
  add_node_at(new_node("OB", NULL), &test, 42);
  traverse_string(test);
  my_char('\n');
  my_int(count_nodes(test));
  my_char('\n');
  my_int(count_nodes(NULL));
  my_char('\n');
  my_int(count_nodes(head));
  my_char('\n');
  if(elem_at(test, 0) == "Apple")
    my_str("Works with an index\n");
  if(elem_at(test, 42) == "OB")
    my_str("Works with an OB \n");
  if(elem_at(NULL, 0) == NULL)
    my_str("Works with a NULL\n");
  my_str(remove_node(&test));
  my_char('\n');
  traverse_string(test);
  my_char('\n');
  if(remove_node(NULL)==NULL)
    my_str("Works with a NULL\n");
  my_str(remove_last(&test));
  my_char('\n');
  traverse_string(test);
  my_str(remove_node_of(&head, 2));
  my_char('\n');
  traverse_string(head);
  my_char('\n');
  empty_list(&head);
  traverse_string(head);
  my_char('\n');
  traverse_char(head);
  traverse_char(test);
}
