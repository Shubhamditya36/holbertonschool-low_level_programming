/**
 *swap_int - swap form integer a to integer b
 *@a: pointer integer
 *@b: pointer integer
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp_b = *a;

	*a = *b;
	*b = tmp_b;
}
