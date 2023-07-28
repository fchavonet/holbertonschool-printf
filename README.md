# <p align="center">C - printf</p>

<p align="center">
	<img src="https://apply.holbertonschool.com/holberton-logo.png">
	<br>
	<img src="https://readme-typing-svg.herokuapp.com?font=Open+Sans&weight=900&pause=1000&color=1D5ABD&center=true&vCenter=true&width=500&lines=LOW+LEVEL+PROGRAMMING+PROJECT+IN+C" alt="Typing SVG" />
</p>

## :memo: Objective
To write our own **printf()** function.

## :page_facing_up: Description
The **_printf()** function mirrors the operation of the *stdio.h* C librairy function **printf()**.
<br>
**_printf()** formatted data to the standard output.

## :hammer: Tech stack

<div style="display: flex;">
	<img width="50px" height="50px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/a/ab/Logo-ubuntu_cof-orange-hex.svg/1200px-Logo-ubuntu_cof-orange-hex.svg.png">
	 &emsp;
	<img wigth="50px" height="50px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/9/9f/Vimlogo.svg/544px-Vimlogo.svg.png">
	 &emsp;
	<img width="45px" height="50px" src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png">
</div>

## :floppy_disk: Prototype for the main _printf() function
`int _printf(const char *format, ...);`

## :clipboard: Requirements
- Allowed editors: **vim** or **emacs**.
- All the files will be compiled on **Ubuntu 20.04 LTS** using **gcc**.
- The code should use the **betty style**.
- Global variables are not allowed.
- No more than 5 functions per file.
- The prototypes of all th functions should be included in the header file called **main.h**.
- The header files should be include guarded.

## :floppy_disk: Compilation command
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## :mortar_board: Instructions

- **Mandatory tasks**

<details>
	<summary>
		<b>Task 0. (I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life)</b>
	</summary>
	<ul>
		<li>Returns: the number of characters printed.
		<br>
		(excluding the null byte used to end output to strings).</li>
		<li>Write output to stdout, the standard output stream.</li>
		<li>Format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:</li>
		<ul>
			<li>c</li>
			<li>s</li>
			<li>%</li>
		</ul>
		<li>You don’t have to reproduce the buffer handling of the C library printf function.</li>
		<li>You don’t have to handle the flag characters.</li>
		<li>You don’t have to handle field width.</li>
		<li>You don’t have to handle precision.</li>
		<li>You don’t have to handle the length modifie.</li>
	</ul>
</details>

<details>
	<summary>
		<b>Task 1. (Education is when you read the fine print. Experience is what you get if you don't)</b>
	</summary>
	<ul>
		<li>Handle the following conversion specifiers:</li>
		<ul>
			<li>d</li>
			<li>i</li>
		</ul>
		<li>You don’t have to handle the flag characters.</li>
		<li>You don’t have to handle field width.</li>
		<li>You don’t have to handle precision.</li>
		<li>You don’t have to handle the length modifiers.</li>
	</ul>
</details>

<details>
	<summary>
		<b>Task 2. (Just because it's in print doesn't mean it's the gospel)</b>
	</summary>
	<ul>
		<li>Create a man page for your function.</li>
	</ul>
</details>

- **Advanced tasks**

<details>
	<summary>
		<b>Task 3. (With a face like mine, I do better in print)
	</summary>
	<ul>
		<li>Handle the following custom conversion specifiers:</li>
		<ul>
			<li>b: the unsigned int argument is converted to binary</li>
		</ul>
	</u>

```
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
```
</details>

## :bookmark_tabs: Flowcharts

![Image](https://github.com/Pandolowitz/holbertonschool-printf/blob/master/resources/flowchart.png?raw=true)

## :open_file_folder: Files description

|         FILE          |                                    DESCRIPTION                                    |
| :-------------------: | :-------------------------------------------------------------------------------: |
|         main.h        |              contains the main structure and the function prototypes              |
| mandatory_functions.c |                     contains all my mandatory print functions                     |
| advanced_functions.c  |                     contains all my advanced print functions                     |
| specifiers_handler.c  | contains the function for associating a specifier with the corresponding function |
|       _printf.c       |                         contains our main _printf function                        |
|       README.md       |                              this readme file :wink:                              |
|       resources       |            contain images for README.md file and main.c example program           |

## :floppy_disk: Specifiers

| SPECIFIER |                 DESCRIPTION                 |
| :-------: | :-----------------------------------------: |
|     %%    |        print a literal '%' character        |
|     %c    |           print a single character          |
|     %s    |        print a null-terminated string       |
|     %i    |          print an integer number            |
|     %d    |           print a decimal number            |
|     %b    | print an integer number converted to ninary |

## :computer: Example

**Our own test program code (main.c):**

```
#include "main.h"

/**
* main - entry point of the program
*
* Return: always 0 (Success)
*/
int main(void)
{
	int positive_number = 42;
	int negative_number = -42;
	char character = 'A';
	char *string = "The cake is a lie!";

	_printf("%i\n", positive_number);
	_printf("%d\n\n", negative_number);

	_printf("%c\n", character);
	_printf("%s\n\n", string);

	_printf("42 is the answer to life, the universe, and everything...\n\n");

	_printf("The number 42 converted into binary is %b\n\n", positive_number);

	_printf("%%\n");

	return (0);
}
```

**Output:**

```
42
-42

A
The cake is a lie!

42 is the answer to life, the universe, and everything...

The number 42 converted into binary is 101010

%
```

*You can find our main.c test file in the resources folder.*

## :blue_book: MAN page

Execution: `man ./man_3_printf`

![Image](https://github.com/Pandolowitz/holbertonschool-printf/blob/master/resources/man_page.png?raw=true)

## :construction_worker: Authors
**Fabien CHAVONET**
- Github: [@Pandolowitz](https://github.com/Pandolowitz)

**Saadi KHEMCHANE**
- Github: [@SaadiKhemchane](https://github.com/SaadiKhemchane)
