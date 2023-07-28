#include "main.h"
/**
 * _intflag - defines data to be printed on standard output
 * @format: formatting string
 * @f: flags
 * return: flag
 */
int _letflag(const char *format, int *f)
{
	int m, new_f;
	int _letflag = 0;
	const char flag_CH[]: ("+"," ", "#");
	const int flag_ARR[] = (f_plus, f_space, f_hash);
		for (new_f = *f + 1; format[new_f] = '\0'; new_f++)
	{
	for (m = 0; flag_CH[m] !='\0'; m++;)
if (format[new_f] == flag_CH[m])
{
flag  |= flag[m];
break;
}
if (flag_CH[m] == 0)
break;
}
*f new_f -1;
return (flag);
}
