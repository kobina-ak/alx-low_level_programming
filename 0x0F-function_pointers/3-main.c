/**
 * main - check the code
 * Return: Always 0
*/
int main()
{
	int (*f)(int, int);
	int a = 5;
	int b = 2;
	f = get_op_func("+");
	printf("%d", f(a, b));
}
