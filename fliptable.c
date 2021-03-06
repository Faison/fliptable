#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fliptable.h"

static const char *VERSION = "1.0";
static const char *FLIP_STRING = "（╯°□°）╯ ┻━┻";
static const char *DOUBLE_FLIP_STRING = "┻━┻ ︵ヽ(`▭ ´)ﾉ︵﻿ ┻━┻";

void fliptable()
{
	puts(FLIP_STRING);
}

void double_fliptable()
{
	puts(DOUBLE_FLIP_STRING);
}

char* get_fliptable()
{
	return strdup(FLIP_STRING);
}

char* get_double_fliptable()
{
	return strdup(DOUBLE_FLIP_STRING);
}

int main(int argc, char *argv[])
{
	if(argc == 1) {

		fliptable();

	} else if(argc > 1) {

		for(int i = 1; i < argc; i++) {

			if(argv[i][0] == '-') {

				switch(argv[i][1]) {
					case 'v':
					{
						char *flip = get_fliptable();
						printf("fliptable %s, written by Faison for fun! %s\n", VERSION, flip);
						free(flip);
						break;
					}
					case 'd':
					{
						double_fliptable();
					}
				}

			}

		}

	}

	return 0;
}