#include "main.h"

/**
 * _atoi - converts strings into integers
 *
 * @s: to be converted
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int D = 0;
	unsigned int R = 0;
	int K = 1;
	int J = 0;

	while (s[D])
	{
		if (s[D] == 45)
		{
			K *= -1;
		}
		while (s[D] >= 48 && s[D] <= 57)
		{
			J = 1;
			R = (R * 10) + (s[D] - '0');
			D++;
		}
		if (J == 1)
		{
			break;
		}
		D++;
	}
	R *= K;
	return (R);
}
