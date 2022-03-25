#ifndef MAIN_H
#define MAIN_H
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
int rot(int);
void print_number(int n);
int power(int x, int y);
void _putchar(char s);
char *shift(char *s, int j, int end);
char *add_strings(char *n1, char *n2, char *r, int r_index);
void print_buffer(char *b, int size);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
int len(char *s);
void prn(int n);
#endif
