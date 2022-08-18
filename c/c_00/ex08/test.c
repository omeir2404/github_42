#include <unistd.h>

void	ft_putchar(char a) // função para imprimir um caracter de um char
{
	write(1, &a, 1);
}

void	ft_putvet(int vet[], int n) // função para imprimir os caracteres de um vetor
{
	int c; // contador do while (loop)

	c = 0; // contador do while (loop) inicia em 0
	while (c < n) // loop para imprimir cada um dos algarismos, um por um
	{
		ft_putchar('0' + vet[c]); // imprime o valor armazenado na posição c do vetor
		c++; // incremento do contador do while
	}
}

int		ft_get_index(int combn[], int n)
{
	int c; // contador do while (loop)
	int max; // valor máximo ???

	c = 0;
	max = 10 - n;
	while (c < n)
	{//1
		if (combn[c] == max) //0,1- cmb[0]
			return (c - 1);
		if (c == (n - 1) && combn[c] < max)
			return (c);
		c++;
		max++;
	}
	return (-1);
}

void	ft_increment(int vet[], int n, int index)
{
	int c;
 // 0,1  - 2  - 1
	c = index + 1;
	vet[index]++;
	while (c <= n)
	{
		vet[c] = vet[c - 1] + 1;
		c++;
	}
}

void	ft_print_combn(int n)
{
	int combn[n]; // vetor usado para armazenar os algarismos das combinações a serem impressas
	int c; // contador do while (loop)
	int pos_index; // posição do index ???

	if (n >= 10 || n <= 0) // verificação da condição 0 < n < 10
		return ;
	else // código para printar a sequência de combinações
	{
		c = 0; // contador do while (loop) inicia em 0
		while (c < n) // loop para atribuir valores ao vetor da primeira combinação (012...)
		{
			combn[c] = c; // atribuição de valor de cada dígito para compor o vetor da primeira combinação
			c++;
		}
		while (ft_get_index(combn, n) != -1) //loop para imprimir os vetores de todas combinações exceto a última, seguidos de ", "
		{
			pos_index = ft_get_index(combn, n); // variável que armazena o index ???
			ft_putvet(combn, n); // imprime o vetor combn[]
			ft_increment(combn, n, pos_index); // incrementa ???
			write(1, ", ", 2); // imprime o separador ", "
		}
		ft_putvet(combn, n); // imprime o vetor da última combinação da sequência (ex.: 789)
	}
}