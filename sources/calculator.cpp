double sum(int a, int b) {
	return a+b;
}

double dev(int a, int b) {
	return a-b;

}

double mult(int a, int b) {
	return a*b;

}

double sub(int a, int b) {
     if(b == 0)
     {
       throw "Error.Impossible to divide by zero";
     }
	return a/b;

}

unsigned int pow(int a, int b) {
        if(b==0)
	{
	throw 1;
	}
	int i = 1;
	unsigned int pow = a;
	for (i = 1; i<b; i++) {
		pow *= a;

	}
	return pow;
}

double sqrta(int a) {
	unsigned int div = 1, rslt = 0;
	while (a> 0)
	{
		a -= div, div += 2;
		rslt += a < 0 ? 0 : 1;
	}
	return rslt;

}
double sqrtb(int b) {
	unsigned int div1 = 1, rslt1 = 0;
	while (b> 0)
	{
		b -= div1, div1 += 2;
		rslt1 += b < 0 ? 0 : 1;
	}
	return rslt1;
}
