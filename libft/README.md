*This project has been created as part of the 42 curriculum by <gjun-xi>*

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

- Parameters: dst (destination memory buffer), src (source memory buffer), n (number of bytes).
- Description: Copies n bytes from src to dst. Note: Overlapping regions of src and dst would result in undefined behaviour (use `ft_memmove` instead), src is read only.

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
 
CAA221225 1911

int ft_toupper(int c);
Converts lowercase letter to uppercase; otherwise returns c unchanged.
Parameters: c (int).

int ft_tolower(int c);
Converts uppercase letter to lowercase; otherwise returns c unchanged.
Parameters: c (int).

char *ft_strchr(const char *s, int c);
Returns pointer to first occurrence of character (char)c in s (or to '\0' if c is 0), or NULL.
Parameters: s (string), c (character as int).

char *ft_strrchr(const char *s, int c);
Returns pointer to last occurrence of (char)c in s, or NULL.
Parameters: s, c.

int ft_strncmp(const char *s1, const char *s2, size_t n);
Compares up to n bytes of s1 and s2; returns <0, 0, or >0.
Parameters: s1, s2 (strings), n (max bytes).

void *ft_memchr(const void *s, int c, size_t n);
Searches first n bytes of s for byte (unsigned char)c; returns pointer or NULL.
Parameters: s (buffer), c (byte), n (bytes).

int ft_memcmp(const void *s1, const void *s2, size_t n);
Compares first n bytes of s1 and s2; returns <0, 0, or >0.
Parameters: s1, s2 (buffers), n.

char *ft_strnstr(const char *haystack, const char *needle, size_t len);
Finds first occurrence of needle in haystack, searching at most len chars; returns pointer or NULL.
Parameters: haystack (string to search), needle (substring), len (max search length).

int ft_atoi(const char *str);
Converts the initial portion of str to an int (handles leading whitespace and optional sign).
Parameters: str (string).

void *ft_calloc(size_t nmemb, size_t size);
Allocates nmemb * size bytes and zero-initializes them (if nmemb or size is 0, returns a unique freeable pointer).
Parameters: nmemb (element count), size (bytes per element).

char *ft_strdup(const char *s1);
Allocates and returns a duplicate of string s1.
Parameters: s1 (source

Bonus part — Linked list functions

t_list *ft_lstnew(void *content);
