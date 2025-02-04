/*
Author: Anthony Bustamante
Date: 02Nov19
Description:  Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines and as much as possible of the text.

*/

#include <stdio.h>

#define MAXLINE 1000

int myGetline(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;

	while ((len = myGetline(line, MAXLINE)) > 0)  {
		printf("%d - %s", len, line);
	}
}

int myGetline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}