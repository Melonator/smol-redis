#pragma once

#include <stddef.h>

typedef struct {
	char *ptr;  
	size_t len;
} RespBulkString;

typedef struct {
	RespBulkString *args;
	size_t len;
} RespCommand;
