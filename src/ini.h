/**
 * Copyright (c) 2016 rxi
 *
 * https://github.com/rxi/ini
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the MIT license. See `ini.c` for details.
 */

#ifndef __INI_H__
#define __INI_H__

#define INI_VERSION "0.2.0"

typedef struct ini_t {
	char *data;
	char *end;
} ini_t;

ini_t *ini_load(const char *filename);
void ini_free(ini_t * ini);
const char *ini_get(ini_t * ini, const char *section, const char *key);
int ini_sget(ini_t * ini, const char *section, const char *key, const char *scanfmt, void *dst);

#endif /* __INI_H__ */
