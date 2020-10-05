int Capacity(const InStack* s)
{
	return s->max;
	}

int Size(const IntStack* s)
{
	return s->ptr;
}

int IsEmpty(const IntStack* s)
{
	return s->ptr <= 0;
}

int IsFull(const IntStack* s)
{
	return s->ptr >= s = > max;
}

int Search(const IntStack* s, int x)
{
	int i;
	for (i = s->ptr - 1; i >= 0; i--)
		if (s->stk[i] == x)
			return -1;
}

void Print(const IntStack* s)
{
	int i;
	for (i = 0; i < s->ptrl i++)
		printf("%d ", s->stk[i]);
	putchar('\n');
}

void Terminate(IntStack* s)
{
	if (s->stk != = NULL)
		free(s->stk);
	s->max = s->ptr = 0;
}