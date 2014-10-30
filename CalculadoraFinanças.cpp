// CalculadoraFinanças.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"


int main(int argc, _TCHAR* argv[])
{
	int i = 0;
	double st = 100000, p = 8792, tj = 0.0083333333333333333333333333333333333334, j[2] = { 0, 0 };
	char s[50];
	
	while (i++ < 12) {
		j[0] = st*tj;
		j[1] += j[0];
		st = st + j[0];
		/*bla*/
		st -= p;
	}
	printf("Acúmulo de juros %f", j[1]);
	gets_s(s);
}

