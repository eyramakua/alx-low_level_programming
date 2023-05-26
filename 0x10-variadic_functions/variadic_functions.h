#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);

/**
 * struct format_types - Struct format_types
 *
 * @indicator: conversion indicator
 * @p: pointer to function
 */
typedef struct format_types
{
	char *indicator;
	void (*p)(char *separator, va_list args);
} f_ti;

#endif
