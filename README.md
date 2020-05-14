# Libft

## Description
The first project required at the **42 School - São Paulo** curriculum.

The goal is to re-write popular **C** functions from scratch and build our very own library. Check the [Subject here](https://github.com/pckc/libft/blob/master/libft.en.subject.pdf).

Documenting the functions was not required but it was very useful, especially regarding the didactic nature of the project and it is a good skill to practice.

## What is **42 São Paulo**?
42 is a Software Engineering school with a very human and collaborative approach. There are no teachers. Students receive challenging projects from the school but must pursue knowledge among themselves. Sharing, teaching and collaborating are key.

## How to use
Include the library using : 
```c
#include "libft.h"
```
Open the terminal on the directory where this repository was cloned and use the following commands:

- To compile, index and create the library (_.a_ file)
	```bash
	make
	```
- Erase objetcs (_.o_)
	```bash
	make clean
	```
Other commands may be found inside the Makefile.

# Content of the library
*_Every function is preceeded by the suffix ft__ _as per requested_

*_The bonus part refers to linked list manipulation_

Part 1  |Part 2| Bonus Part|Aditional Functions| 
|----------------|---------------------|-----------------|-----------
| ft_atoi      |   ft_itoa        | ft_lstadd_back | ft_putnbr 	|  
| ft_bzero    |   ft_putchar_fd        | ft_lstadd_front     | ft_putchar      |
| ft_calloc   |   ft_putendl_fd     | ft_lstclear      |      ft_putstr |
| ft_isalnum     |   ft_putnbr_fd        | ft_lstdelone  |    ft_putendl | 
| ft_isalpha     |   ft_putstr_fd        | ft_lstiter    |  ft_isspace   |
| ft_isascii    |   ft_split     | ft_lstlast     |      |
| ft_isdigit    |   ft_strjoin      | ft_lstmap     |    |
| ft_isprint    |   ft_strmapi     | ft_lstnew      |       |
| ft_memccpy    |   ft_strtrim      | ft_lstsize                |                 |
| ft_memchr    |    ft_substr                 |                 |                 
| ft_memcmp    |                     |                 |                 |
| ft_memcpy    |                     |                 |                 |
| ft_memmove    |                     |                 |                 |
| ft_memset    |                     |                 |                 |
| ft_strchr    |                     |                 |                 |
| ft_strdup    |                     |                 |                 |
| ft_strlcat    |                     |                 |                 |
| ft_strlen    |                     |                 |                 |
| ft_strncmp    |                     |                 |                 |
| ft_strnstr    |                     |                 |                 |
| ft_strrchr    |                     |                 |                 |
| ft_tolower    |                     |                 |                 |
| ft_toupper    |                     |                 |                 |

## Author
Pedro C. K. Chinelli : [GitHub](https://github.com/pckc)

## Useful tools
There a three great tests, made by students:
- [**Libftest**](https://github.com/jtoty/Libftest), by [jtoty](https://github.com/jtoty)
- [**Libf Unit Test**](https://github.com/alelievr/libft-unit-test), by [Antoine Lelievre](https://github.com/alelievr)
- [**Libft War Machine**](https://github.com/ska42/libft-war-machine), by [ska42](https://github.com/ska42)

If you are a student working on your own library: **be strong and try to make your own mains and tests!**

- [AdressSanitizer](https://github.com/google/sanitizers/wiki/AddressSanitizer) - a tool made by Google to detect memory leaks and errors in C/C++.

	It should be used as a compilation flag along with _-g_, to debug:

	```shell
	gcc -Wall -Werror -Wextra -fsanitize=address -g
	```

- [C Tutor](http://pythontutor.com/c.html) - a visual tool to debug code on the browser

- [Debugging with VSCode](https://code.visualstudio.com/docs/editor/debugging)

- [42 header in VIM](https://github.com/pbondoer/vim-42header), by [Pierre Bondoerffer](https://github.com/pbondoer)
- [42 header in VSCode](https://marketplace.visualstudio.com/items?itemName=kube.42header), by [Kube](https://marketplace.visualstudio.com/publishers/kube)
