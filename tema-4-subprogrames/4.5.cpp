int DivisioEnters(int a, int b, int &cocient)
{
	int DivZero = 1;
	if (b != 0)
		cocient = a/b;
	else
		DivZero = 0;
	return DivZero;
	
}