<p align="center">
	<img src="https://apply.holbertonschool.com/holberton-logo.png">
	<br>
	<img src="https://readme-typing-svg.herokuapp.com?font=Open+Sans&weight=900&pause=1000&color=1D5ABD&center=true&vCenter=true&width=500&lines=LOW+LEVEL+PROGRAMMING+PROJECT+IN+C" alt="Typing SVG" />
</p>

#

# <p align="center">C - printf</p>

## :bookmark: Table of contents
<details>
        <summary>
		CLICK TO ENLARGE :innocent:
        </summary>
		 </summary>
        :memo: <a href="#objective">Objective</a>
		<br>
		:page_facing_up: <a href="#description">Description</a>
        <br>
        :hammer: <a href="#tech-stack">Tech stack</a>
        <br>
        :floppy_disk: <a href="#prototype">Prototype for the main _printf() function</a>
        <br>
        :clipboard: <a href="#requirements">Requirements</a>
        <br>
        :floppy_disk: <a href="#compilation-command">Compilation command</a>
        <br>
        :mortar_board: <a href="#instructions">Instructions</a>
        <br>
        :bookmark_tabs: <a href="#flowcharts">Flowcharts</a>
        <br>
        :open_file_folder: <a href="#files-description">Files description</a>
        <br>
        :floppy_disk: <a href="#specifiers">Specifiers</a>
        <br>
        :computer: <a href="#example">Example</a>
        <br>
        :blue_book: <a href="#man-page">MAN page</a>
        <br>
        :heartpulse: <a href="#thanks">Thanks</a>
        <br>
        :construction_worker: <a href="#authors">Authors</a>
</details>

## :memo: <span id="objective">Objective</span>
To write our own **printf()** function.

## :page_facing_up: <span id="description">Description</span>
The **_printf()** function mirrors the operation of the *stdio.h* C librairy function **printf()**.
<br><br>
**_printf()** formatted data to the standard output.

## :hammer: <span id="tech-stack">Tech stack</a>

<div style="display: flex;">
	<img width="50px" height="50px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/a/ab/Logo-ubuntu_cof-orange-hex.svg/1200px-Logo-ubuntu_cof-orange-hex.svg.png">
	 &emsp;
	<img wigth="50px" height="50px" src="https://upload.wikimedia.org/wikipedia/commons/thumb/9/9f/Vimlogo.svg/544px-Vimlogo.svg.png">
	 &emsp;
	<img width="45px" height="50px" src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png">
</div>

## :floppy_disk: <span id="prototype">Prototype for the main _printf() function</a>
`int _printf(const char *format, ...);`

## :clipboard: <span id="requirements">Requirements</span>
- Allowed editors: **vim** or **emacs**.
- All the files will be compiled on **Ubuntu 20.04 LTS** using **gcc**.
- The code should use the **betty style**.
- Global variables are not allowed.
- No more than 5 functions per file.
- The prototypes of all th functions should be included in the header file called **main.h**.
- The header files should be include guarded.

## :floppy_disk: <span id="compilation-command">Compilation command</a>
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## :mortar_board: <span id="instructions">Instructions</span>

### <span id="mandatory-tasks">Mandatory tasks</span>

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

### <span id="advanced-tasks">Advanced tasks</a>

<details>
	<summary>
		<b>Task 3. (With a face like mine, I do better in print)</b>
	</summary>
	<ul>
		<li>Handle the following custom conversion specifiers:</li>
		<ul>
			<li>b: the unsigned int argument is converted to binary</li>
		</ul>
	</u>
<br>

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

<details>
	<summary>
		<b>Task 4. (What one has not experienced, one will never understand in print)</b>
	</summary>
	<ul>
		<li>Handle the following conversion specifiers:</li>
		<ul>
			<li>u</li>
			<li>o</li>
			<li>x</li>
			<li>X</li>
		</ul>
		<li>You don’t have to handle the flag characters.</li>
		<li>You don’t have to handle field width.</li>
		<li>You don’t have to handle precision.</li>
		<li>You don’t have to handle the length modifiers.</li>
	</ul>
</details>

## :bookmark_tabs: <span id="flowcharts">Flowcharts</a>

![Image](https://github.com/Pandolowitz/holbertonschool-printf/blob/master/resources/flowchart.png?raw=true)

## :open_file_folder: <span id="files-description">Files description</span>

|         FILE          |                                    DESCRIPTION                                    |
| :-------------------: | :-------------------------------------------------------------------------------: |
|       resources       |            contain images for README.md file and main.c example program           |
|       _printf.c       |                         contains our main _printf function                        |
| advanced_functions.c  |                      contains all my advanced print functions                     |
|         main.h        |              contains the main structure and the function prototypes              |
|      man_3_printf     |                         man page of the _printf function                          |
| mandatory_functions.c |                     contains all my mandatory print functions                     |
|       README.md       |                              this readme file :wink:                              |
| specifiers_handler.c  | contains the function for associating a specifier with the corresponding function |

## :floppy_disk: <span id="specifiers">Specifiers</a>

| SPECIFIER |                     DESCRIPTION                      |
| :-------: | :--------------------------------------------------: |
|     %c    |               print a single character               |
|     %s    |           print a null-terminated string             |
|     %%    |            print a literal '%' character             |
|     %d    |              print a decimal number                  |
|     %i    |              print an integer number                 |
|     %b    |     print an integer number converted to binary      |
|     %u    | print an unsigned integer number converted to binary |
|     %o    |      print an integer number converted to octal      |

## :computer: <span id="example">Example</a>

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
        unsigned int unsigned_integer = 4294967295;
        char character = 'A';
        char *string = "The cake is a lie!";

        _printf("%c\n", character);
        _printf("%s\n", string);
        _printf("%%\n\n");

        _printf("42 is the answer to life, the universe, and everything...\n\n");

        _printf("%d\n", positive_number);
        _printf("%i\n\n", negative_number);

        _printf("The number 42 converted into binary is %b\n\n", positive_number);

        _printf("%u\n", unsigned_integer);
        _printf("The number 42 converted into octal is %o\n", positive_number);

        return (0);
}
```

**Output:**

```
A
The cake is a lie!
%

42 is the answer to life, the universe, and everything...

42
-42

The number 42 converted into binary is 101010

4294967295
The number 42 converted into octal is 52
```

*You can find our main.c test file in the resources folder.*

## :blue_book: <span id="man-page">MAN page</a>

Execution: `man ./man_3_printf`

![Image](https://github.com/Pandolowitz/holbertonschool-printf/blob/master/resources/man_page.png?raw=true)

## :hearts: <span id="thanks">Thanks</span>

A big thank you to all our Holberton School peers for their help and support throughout this project.
<br>
Special thanks to [Hugo Castéras](https://github.com/hug0-cstrs), [Noah Vernhet](https://github.com/truuue) and [Yoann Rivet](https://github.com/SpStigma).

## :construction_worker: <span id="authors">Authors</span>
**Fabien CHAVONET**
- Github: [@Pandolowitz](https://github.com/Pandolowitz)

**Saadi KHEMCHANE**
- Github: [@SaadiKhemchane](https://github.com/SaadiKhemchane)
