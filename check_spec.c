/**
 *check_spec - check for the character if it is valid specifier
 * link it with appropriate function
 * @format: the specifier (char *)
 *
 * Return: pointer to function.
 */

int (*check_spec(char *format))(va_list)
{
	int i;
	func_c arr[] ={
		{'c', print_char},
		{'s', print_str},
		{'%', print_cent},
		{NULL, NULL}};

	for (i = 0; arr[i].c != NULL; i++ )
	{
		if (arr[i].c == *format)
		{
			return arr[i].f
		}
	}
}
