*This project has been created as part of the 42 curriculum by gjun-xi.*

**Description**

_Goal_: 
This project (Libft) aims to create a library storing all the functions listed below. 

`ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c`

_Overview_:
The functions in this library are those that are commonly used in the 42 curriculum. This includes char/int manipulation, memory allocation , str manipulation, list manipulation functions. The details of each function can be found below their respective declarations.

**Instructions**

The Makefile has the following commands with the relevant details attached.

**make**
- runs make all.

**make all**
- creates object files from the function files and compiles into libft.a.

**make clean**
- removes object files.

**make fclean**
- runs clean and removes libft.a.

**make re**
- remake all files i.e. runs fclean then make all

To use the functions in the library, include the following in your code 
- #include "libft.h"

**Resources**
- manuals for original functions (i.e. man isalpha, man isdigit etc.).
- Makefile tutorial `(https://www.gnu.org/software/make/manual/html_node/Pattern-Intro.html)`.
- git repo tester to debug.
- AI for comments on code for better generalisability.

**Detailed Description**

`int ft_isalpha (int c);`

- Parameter: c.
- Description: Checks if c is an alphabetic character (i.e. ‘A’-‘Z’ or ‘a’-‘z’).
- Return Value: 1 if the character matches the tested class, 0 if the character does not match.

`int ft_isdigit (int c);`

- Parameter: c.
- Description: Checks if c is a digit (i.e. ‘0’-‘9’).
- Return Value: 1 if the character matches the tested class, 0 if the character does not match.

`int ft_isalnum (int c);`

- Parameter: c.
- Description: Checks if c is alphanumeric (i.e. ‘0’-‘9’, ‘A’-‘Z’ or ‘a’-‘z’).
- Return Value: 1 if the character matches the tested class, 0 if the character does not match.

`int ft_isascii (int c);`

- Parameter: c.
- Description: Checks if c is within ASCII (i.e. 0–127).
- Return Value: 1 if the character matches the tested class, 0 if the character does not match.

`int ft_isprint (int c);`

- Parameter: c.
- Description: Checks if c is a printable ASCII (i.e. 32–126). Note: Includes space.
- Return Value: 1 if the character matches the tested class, 0 if the character does not match.

`size_t ft_strlen (const char *s);`

- Parameter: s (pointer to a null-terminated string).
- Description: Returns the length of the null-terminated string s (excluding '\0'). Note: s is read only.
- Return Value: Number of bytes in the string pointed to by s.

`void *ft_memset (void *s, int c, size_t n);`

- Parameters: s (memory buffer), c (value to place at each byte), n (number of bytes).
- Description: Fills the first n bytes of memory starting at s with c.
- Return Value: A pointer to the start of the memory area s.

`void ft_bzero (void *s, size_t n);`

- Parameters: s (memory buffer), n (number of bytes).
- Description: Sets the first n bytes of s to ‘\0’.

`void *ft_memcpy (void *dest, const void *src, size_t n);`

- Parameters: dest (destination memory buffer), src (source memory buffer), n (number of bytes).
- Description: Copies n bytes from src to dst. Note: Overlapping regions of src and dst would result in undefined behaviour (use `ft_memmove` instead), src is read only.
- Return Value: A pointer to start of dest.

`void *ft_memmove (void *dest, const void *src, size_t n);`

- Parameters: dest (destination memory buffer), src (source memory buffer), n (number of bytes).
- Description: Copies n bytes from src to dest. Note: The memory areas are allowed to overlap (copying takes place as though  the  bytes  in  src  are  first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest), src is read only.
- Return Value: A pointer to dest.

`size_t ft_strlcpy (char *dst, const char *src, size_t size);`

- Parameters: dst (destination string buffer), src (source string), size (size of dst including null terminator).
- Description: Copies src into dst up to size - 1 chars, NULL-terminates as long as size > 0. Note: src must be NULL-terminated, src is read only.
- Return Value: Total length of the string the function tried to create i.e. `ft_strlen(src)`.

`size_t ft_strlcat(char *dst, const char *src, size_t size);`

- Parameters: dst (existing NULL-terminated string buffer), src (source string), size (size of dst including after NULL-terminator).
- Description: Appends src to dst up to dstsize - 1, NULL-terminates dst as long as there is at least one byte free in dst. Note: Both src and dst must be NULL-terminated, src is read only.
- Return Value: Initial dst length + src length.
 
`int ft_toupper(int c);`

- Parameter: c.
- Description: Converts lowercase letter to uppercase. Note: If c is neither an unsigned char value nor EOF, the behavior of these functions is undefined.
- Return Value: The value returned is that of the converted letter, or c if the conversion was not possible.

`int ft_tolower(int c);`

- Parameter: c.
- Description: Converts uppercase letter to lowercase. Note: If c is neither an unsigned char value nor EOF, the behavior of these functions is undefined.
- Return Value: The value returned is that of the converted letter, or c if the conversion was not possible.

`char *ft_strchr(const char *s, int c);`

- Parameters: s (string), c (character as int).
- Description: Returns a pointer to the first occurrence of character c in string s. Note: s is read only.
- Return Value: The pointer returned is the  matched  character or NULL if the character is not found. The terminating  null  byte  is  considered part  of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.

`char *ft_strrchr(const char *s, int c);`

- Parameters: s (string), c (character as int to be found).
- Description: Returns a pointer to the last occurrence of character c in string s. Note: s is read only.
- Return Value: The pointer returned is the  matched  character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c     is specified as '\0', these functions return a pointer to the terminator.

`int ft_strncmp(const char *s1, const char *s2, size_t n);`

- Parameters: s1 (string), s2 (string), n (max number of bytes compared).
- Description: Compares up to n bytes of s1 and s2. `ft_strcmp()`  returns  an  integer indicating the result of the comparison, as follows:
       •  0, if the s1 and s2 are equal;
       •  a negative value if s1 is less than s2;
       •  a positive value if s1 is greater than s2. 
Note: s1, s2 is read only.
- Return Value: Returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than s2.

`void *ft_memchr(const void *s, int c, size_t n);`

- Parameters: s (memory buffer), c (character as int to be found), n (number of bytes searched).
- Description: Scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.
- Return Value: Returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.

`int ft_memcmp(const void *s1, const void *s2, size_t n);`

- Parameters: s1 (memory buffer), s2 (memory buffer), n (number of bytes searched).
- Description: Compares up to n bytes of s1 and s2. Returns an integer indicating the result of the comparison, as follows:
       •  0, if the s1 and s2 are equal;
       •  a negative value if s1 is less than s2;
       •  a positive value if s1 is greater than s2.
Note: s1, s2 is read only.
- Return Value: Returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than s2. 

`char *ft_strnstr(const char *big, const char *little, size_t len);`

- Parameters: big (string to search), little (substring to find), len (max search length).
- Description: Locates the first occurrence of little in big, searching at most len characters. Note: Characters after a `\0` are not searched.
- Return Value: If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.

`int ft_atoi(const char *nptr);`

- Parameters: nptr (string pointer).
- Description: Converts the initial portion of the string pointer to by nptr to an int. Note: Handles starting whitespace and optional signs, converts up to first occurence of non-digit char, does not detect errors, nptr is read only.
- Return Value: The converted value or 0 on error.

`void *ft_calloc(size_t nmemb, size_t size);`

- Parameters: nmemb (number of elements), size (bytes per element).
- Description: Allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns a unique pointer value that can later be successfully passed to free(). 
- Return Value: Returns a pointer to the allocated memory, which is suitably aligned for any type that  fits  into the  requested size or less. On error, these functions return NULL. Attempting to allocate more than `PTRDIFF_MAX` bytes is considered an error, as an object that large could cause later pointer subtraction to overflow (i.e nmemb * size > `size_t` causing overflow). 

`char *ft_strdup(const char *s);`

- Parameter: s (string)
- Description: Returns a pointer to a new string which is a duplicate of string s. Memory  for  the new string is obtained with malloc(3), and can be freed with free(3).
- Return Value: On success, the strdup() function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available. 

`char *ft_substr(char const *s, unsigned int start,
size_t len);`

- Parameters: s (string), start (starting index), len(max length of substring).
- Description: Allocates memory using malloc(3) and returns a substring from the string s. The substring starts at index start and has a maximum length of len.
- Return Value: Returns a pointer to the substring or NULL if memory allocation fails.

`char *ft_strjoin(char const *s1, char const *s2);`

- Parameters: s1 (prefix string), s2 (suffix string)
- Description: Allocates memory using malloc(3) and returns a new string, which is the result of concatenating s1 and s2.
- Return Value: Returns a pointer to the string created or NULL if memory allocation fails.

`char *ft_strtrim(char const *s1, char const *set);`

- Parameters: s1 (string to be trimmed), set (string containing set of characters to be removed).
- Description: Allocates memory using malloc(3) and returns a copy of s1 with characters from set removed from the beginning and the end.
- Return Value: Returns a pointer to the trimmed string created or NULL if memory allocation fails.

`char **ft_split(char const *s, char c);`

- Parameters: s (string to be split), c (delimiter character).
- Description: Allocates memory using malloc(3) and returns an array of strings obtained by splitting s using the character c as a delimiter. The array will end with a NULL pointer.
- Return Value: Returns an array of the new strings resulting from the split or NULL if memory allocation fails.

`char *ft_itoa(int n);`

- Parameter: n (integer to convert).
- Description: Allocates memory using malloc(3) and returns a string representing the integer received as an argument. Negative numbers will be handled.
- Return Value: Returns a pointer to the string representing n or NULL if memory allocation fails.

`char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));`

- Parameters: s (string to iterate over), f (function to apply to each character).
- Description: Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second. A new string is created using malloc(3) to store the results from the successive applications of f.
- Return Value: The string created from the successive applications of f or NULL if memory allocation fails.

`void ft_striteri(char *s, void (*f)(unsigned int, char*));`

- Parameters: s (string to iterate over), f (function to apply to each character).
- Description: Applies the function f to each character of the string s, passing its index as the first argument. Each character is passed by address to f so it can be modified if necessary.

`void ft_putchar_fd(char c, int fd);`

- Parameters: c (character to output), fd (file descriptor on which to write).
- Description: Outputs the character c to the specified file descriptor.

`void ft_putstr_fd(char *s, int fd);`

- Parameters: s (string to output), fd (file descriptor on which to write).
- Description: Outputs the string s to the specified file descriptor.

`void ft_putendl_fd(char *s, int fd);`

- Parameters: s (string to output), fd (file descriptor on which to write).
- Description: Outputs the string s to the specified file descriptor followed by a newline.

`void ft_putnbr_fd(int n, int fd);`

- Parameters: n (integer to output), fd (file descriptor on which to write). 
- Description: Outputs the integer n to the specified file descriptor.

**t_list structure**

`typedef struct s_list`

`{`

`void *content;`

`struct s_list *next;`

`} t_list;`

*Members* 

- content: The data contained in the node. Using void * allows you to store any type of data.
- next: The address of the next node, or NULL if the current node is the last one.

`t_list *ft_lstnew(void *content);`

- Parameter: content (content to store in the new node).
- Description: Allocates memory using malloc(3) and returns a new node. The content member variable is initialized with the given parameter content. The variable next is initialized to NULL.
- Return Value: Returns a pointer to the new node.

`void ft_lstadd_front(t_list **lst, t_list *new);`

- Parameters: lst (address of a pointer to the first node of  a list), new (address of a pointer to the node to be added).
- Description: Adds the node new at the beginning of the list.

`int ft_lstsize(t_list *lst);`

- Parameter: lst (pointer to the first node of the list).
- Description: Counts the number of nodes in the list.
- Return Value: Returns the length of the list.

`t_list *ft_lstlast(t_list *lst);`

- Parameter: lst (pointer to the first node of the list).
- Description: Returns the last node of the list.
- Return Value: Returns last node of the list.

`void ft_lstadd_back(t_list **lst, t_list *new);`

- Parameters: lst (address of a pointer to the first node of the list), new (address of a pointer to the node to be added).
- Description: Adds the node new at the end of the list.

`void ft_lstdelone(t_list *lst, void (*del)(void
*));`

- Parameters: lst (pointer to the node to free), del (address of the function used to delete the content).
- Description: Frees the content in lst using the function del. Free the node itself but does NOT free the next node.

`void ft_lstclear(t_list **lst, void (*del)(void
*));`

- Parameters: lst (address of a pointer to a node), del (address of the function used to delete the content).
- Description: Deletes and frees the given node and all its successors, using the function del and free(3). Pointer to the list is set to NULL.

`void ft_lstiter(t_list *lst, void (*f)(void *));`

- Parameters: lst (address of a pointer to a node), f (address of the function to apply to each node's content).
- Description: Iterates through the list lst and applies the function ’f’ to the content of each node.

`t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));`

- Parameters: lst (address of a pointer to a node), f (address of the function to apply to each node's content), del (address of the function used to delete a node’s content if needed).
- Description: Creates a new list from the successive application of the function f to each node’s content in the list lst. The del function is used to delete the content of a node if memory allocation fails.
- Return Value: Returns the new list created or NULL if memory allocation fails.
