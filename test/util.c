/* Copyright 2017 The Tree-Force Authors. All rights reserved.
Use of this source code is governed by a MIT-style
license that can be found in the LICENSE file.

Description: aux functions to print messages*/

#ifndef OUTPUT_H
#define OUTPUT_H

#include <stdio.h>


#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


void print_ok(char *text)
{
	printf("%s%s%s\n", ANSI_COLOR_GREEN, text, ANSI_COLOR_RESET);
}

void print_warning(char *text)
{
	printf("%s%s%s\n", ANSI_COLOR_YELLOW, text, ANSI_COLOR_RESET);
}

void print_error(char *text)
{
	printf("%s%s%s\n",ANSI_COLOR_RED, text, ANSI_COLOR_RESET);
}

void print_info(char *text)
{
	printf("%s%s%s\n", ANSI_COLOR_CYAN, text, ANSI_COLOR_RESET);
}

#endif /*OUTPUT_H*/