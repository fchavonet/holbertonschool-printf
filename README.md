# <p align="center">C - printf</p>

<p align="center">
<img src="https://apply.holbertonschool.com/holberton-logo.png">
<br>
<img src="https://readme-typing-svg.herokuapp.com?font=Open+Sans&weight=900&pause=1000&color=1D5ABD&center=true&vCenter=true&width=500&lines=LOW+LEVEL+PROGRAMMING+PROJECT+IN+C" alt="Typing SVG" />
</p>

## :mortar_board: Objective
To write our own **printf()** function.

## :bookmark_tabs: Description
The **_printf()** function mirrors the operation of the *stdio.h* C librairy function **printf()**.
<br>
**_printf()** formatted data to the standard output.

## :floppy_disk: Prototype for the main _printf() function
`int _printf(const char *format, ...);`

## :bookmark_tabs: Requirements
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

**Mandatory tasks**

<details>
	<summary>
		<b>Task 0. (I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life)</b>
	</summary>
	<ul>
		<li>Returns: the number of characters printed.
		<br>
(excluding the null byte used to end output to strings).</li>
		<li>write output to stdout, the standard output stream.</li>
		<li>format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:</li>
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

## :bar_chart: Flowcharts

![Image](https://github.com/Pandolowitz/holbertonschool-printf/blob/master/resources/flowchart.png?raw=true)

## :construction_worker: Authors
**Fabien CHAVONET**
- Github: [@Pandolowitz](https://github.com/Pandolowitz)

**Saadi KHEMCHANE**
- Github: [@SaadiKhemchane](https://github.com/SaadiKhemchane)
