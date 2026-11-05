*This project has been created as part of the 42 curriculum by advasseu.*

# Libft

## Description
This project consists in the creation of our own library, "A collection of functions that will be a useful tool for my curriculum".

The goal is to use this library in my future projects.
It contains some 'libc' functions as well as various userful functions ans lists related functions.

### Content
| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks  for an alphabetic character |
| `ft_isdigit` | Checks for a digit (0 through 9) |
| `ft_isalnum` | Checks for an alphanumeric character |
| `ft_isascii` | Checks whether c is a 7-bit unsigned char value that  fits into the ASCII character set |
| `ft_isprint` | Checks for any printable character including space |
| `ft_strlen` | The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0') |
| `ft_memset` | The  memset()  function  fills  the  first  n  bytes of the memory area pointed to by s with the constant byte c |
| `ft_bzero` | The  bzero()  function  erases  the  data  in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes  con‐ taining '\0') to that area |
| `ft_memcpy` | The  memcpy()  function  copies  n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove(3)  if  the memory areas do overlap |
| `ft_memmove` | The  memmove()  function  copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the  bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from  the  temporary array to dest |
| `ft_strlcpy` | The strlcpy() function copies up to size - 1 characters from the NUL-ter‐minated string src to dst, NUL-terminating the result |
| `ft_strlcat` | The strlcat() function appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐nating the result |
| `ft_toupper` | If c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists in the  current  locale.   Other‐wise,  it  returns c. |
| `ft_tolower` | If c is an uppercase letter, tolower() returns  its  lowercase  equiva‐lent, if a lowercase representation exists in the current locale.  Oth‐erwise, it returns c |
| `ft_strchr` | The  strchr() function returns a pointer to the first occurrence of the character c in the string s |
| `ft_strrchr` | The strrchr() function returns a pointer to the last occurrence of  the character c in the string s |
| `ft_strncmp` | The strncmp() function is similar, except it compares  only  the  first (at most) n bytes of s1 and s2. |
| `ft_memchr` | The  memchr()  function  scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the  bytes  of the memory area pointed to by s are interpreted as unsigned char |
| `ft_memcmp` | The memcmp() function returns  an  integer  less  than,  equal  to,  or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.  For a nonzero return value, the sign is determined by the sign  of  the difference  between  the  first  pair of bytes (interpreted as unsigned char) that differ in s1 and s2.  If n is zero, the return value is zero. |
| `ft_strnstr` | The strnstr() function locates the first occurrence of the null-termi‐nated string little in the string big, where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern |
| `ft_atoi` | The  atoi() function converts the initial portion of the string pointed to by nptr to int. |
| `ft_calloc` | The calloc() function allocates memory for an array of  nmemb  elements of  size bytes each and returns a pointer to the allocated memory.  The memory is set to zero.  If nmemb or size is 0,  then  calloc()  returns either  NULL,  or a unique pointer value that can later be successfully passed to free().  If the multiplication of nmemb and size would result in  integer  overflow, then calloc() returns an error |
| `ft_strdup` | The  strdup() function returns a pointer to a new string which is a du‐plicate of the string s.  Memory for the new string  is  obtained  with malloc(3), and can be freed with free(3) |
| `ft_substr` | Allocates memory (using malloc(3)) and returns a substring from the string ’s’. The substring starts at index ’start’ and has a maximum length of ’len’ |
| `ft_strjoin` | Allocates memory (using malloc(3)) and returns a new string, which is the result of concatenating ’s1’ and ’s2’. |
| `ft_strtrim` | Allocates memory (using malloc(3)) and returns a copy of ’s1’ with characters from ’set’ removed from the beginning and the end. |
| `ft_split` | Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. Each string in the returned array is allocated independently. The array of pointers itself is also allocated dynamically. The returned array must be NULL terminated. |
| `ft_itoa` | Allocates memory (using malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled. |
| `ft_strmapi` | Applies the function f to each character of thestring s, passing its index as the first argumentand the character itself as the second. A newstring is created (using malloc(3)) to store the results from the successive applications of f. |
| `ft_striteri` | Applies the function ’f’ to each character of thestring passed as argument, passing its index asthe first argument. Each character is passed byaddress to ’f’ so it can be modified if necessary. |
| `ft_putchar_fd` | Outputs the character ’c’ to the specified filedescriptor. |
| `ft_putstr_fd` | Outputs the string ’s’ to the specified filedescriptor. |
| `ft_putendl_fd` | Outputs the string ’s’ to the specified filedescriptor followed by a newline. |
| `ft_putnbr_fd` | Outputs the integer ’n’ to the specified filedescriptor. |
| `ft_lstnew` | Allocates memory (using malloc(3)) and returns a new node. The ’content’ member variable isinitialized with the given parameter ’content’.The variable ’next’ is initialized to NULL |
| `ft_lstadd_front` | Adds the node ’new’ at the beginning of the list |
| `ft_lstsize` | Counts the number of nodes in the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstadd_back` | Adds the node ’new’ at the end of the list |
| `ft_lstdelone` | Takes a node as parameter and frees its content using the function ’del’. Free the node itself but does NOT free the next node |
| `ft_lstclear` | Deletes and frees the given node and all its successors, using the function ’del’ and free(3). Finally, set the pointer to the list to NULL |
| `ft_lstiter` | Iterates through the list ’lst’ and applies the function ’f’ to the content of each node |
| `ft_lstmap` | Iterates through the list ’lst’, applies the function ’f’ to each node’s content, and creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed |

## Instructions
This project is provided with a Makefile that has the following rules :

* **Compile**
```make```

* **Delete Object Files**
```make clean```

* **Delete Object Files and 'libft.a'**
```make fclean```

* **ReCompile**
```make re```

## Resources
* man
* Google

### Usage of AI
AI was used for some main and tests.