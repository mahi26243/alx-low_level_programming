/**
 * print_name - function that prints a name.
 * @name: pointer to name
 * @f: function pointer.
 *
 * Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
