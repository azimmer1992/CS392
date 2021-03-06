#ifndef _MY_H_
#define _MY_H_
#ifndef NULL
#define NULL ((void*) 0)
#endif
#ifndef BUF_SZ
#define BUF_SZ 256
#endif
#include <stdlib.h>
#include <unistd.h>

/*Precondition: Receives a char as input
 *Postcondition: Prints char to terminal
 */
void my_char(char);

/*Precondition: Receives a string as input
 *Postcondition: Prints the string to terminal
 */
void my_str(char*);

/*Precondition: Receives a signed int as input
 *Postcondition: Prints the int to terminal
 */
void my_int(int);

/*Precondition: Receives a signed int and char array as input
 *Postcondition: Prints the int in the base and characters determined by the array
 */
void my_num_base(int, char*);

/*Precondition: method is called
 *Postcondition: Prints letters a-z
 */
void my_alpha();

/*Precondition: method is called
 *Postcondition: Prints digits 0-9
 */
void my_digits();

/*Precondition: takes a string as input
 *Postcondition: returns length of the string
 */
int my_strlen(char*);

/*Precondition: takes a string as input
 *Postcondition: Reverses order of string and returns its length
 */
int my_revstr(char*);

/*Precondition: takes a string and char as input
 *Postcondition: returns postion in the string where the char is first found or -1 if not found
 */
int my_strindex(char*, char);

/*Precondition: takes a string and char as input
 *Postcondition: returns position of last instance of char in the string or -1 if not found
 */
int my_strrindex(char*, char);

/*Precondition: takes a string and char as input
 *Postcondition: returns pointer to first letter found that matches the char or null if not found
 */
char *my_find(char*, char);

/*Precondition: takes a string and char as input
 *Postcondition: returns point to last letter found that matches the char or null if not found
 */
char *my_rfind(char*, char);

/*Precondition: takes two strings as input
 *Postcondition: returns s1 with s2 appended to the end, if s1 is null it returns null, if s2 is null then s1 is returned
 */
char *my_strcat(char*, char*);

/*Precondition: takes two strings as input
 *Postcondition: returns a positive value if s1 is greater than s2, negative is s2 is greater than s1, 0 if they are equal
 */
int my_strcmp(char*, char*);

/*Precondition: takes two strings and an unsigned int as input
 *Postcondition: compare s1 to s2 for the first n characters and returns positive if s1 is greater than s2, negative if s2 is greater than s1, 0 if they are equal
 */
int my_strncmp(char*, char*, unsigned int);

/*Precondition: takes two strings as input
 *Postcondition: returns a new string with s2 appended to s1
 */
char *my_strconcat(char*, char*);

/*Precondition: takes two strings and an unsigned int as input
 *Postcondition: returns a new string with the first n letters of s2 appended to s1
 */
char *my_strnconcat(char*, char*, unsigned int);

/*Precondition: takes two strings as input
 *Postcondition: overwrites s1 with s2 and returns s1, returns null if s1 is null, returns s1 if s2 is null
 */
char *my_strcpy(char*, char*);

/*Precondition: takes two strings and unsigned int as input
 *Postcondition: overwrites s1 with the first n letters in s2, returns null if s1 is null, returns s1 if s2 is null
 */
char *my_strncpy(char*, char*, unsigned int);

/*Precondition: takes a string as input
 *Postcondition: allocate a duplicate of a string
 */
char *my_strdup(char*);

/*Precondition: takes an int as input
 *Postcondition: allocates n spaces in an empty string
 */
void *xmalloc(int);

/*Precondition: takes a char** as input
 *Postcondition: returns a char* as output
 */
char *my_vect2str(char**);

/*Precondition: takes a char* as input
 *Postcondition: returns a char** as output
 */
char **my_str2vect(char*);

/*Precondition: takes a char* as input
 *Postcondition: returns a int from the char*
 */
int my_atoi(char*);
#endif
