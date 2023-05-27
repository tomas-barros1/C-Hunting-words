#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	Menu();
}

void Menu()
{
	int opcao;

	system("cls");
	printf("Temas:\n");
	printf("1- Nomes\n");
	printf("2- Animais\n");
	printf("3- Personagens\n");
	printf("Escolha um tema para o caça-palavras: ");
	scanf("%d", &opcao);

	Controle(opcao);
}

int Controle(int opcao)
{
	switch (opcao)
	{

	case 1:
		Nomes();
		break;

	case 2:
		Animais();
		break;

	case 3:
		Personagens();
		break;

	default:
		system("cls");
		printf("Opção inválida\n");
		Menu();
		break;
	}
}

void Nomes()
{
	char resposta;
	int i, j;
	char palavra[20];
	int acertos = 0;
	char palavras[5][20] = {"moak", "jair", "cleiton", "inacio", "tonho"};
	char palavra_anterior[20] = "";

	char matriz[12][12] = {
			{'O', 'O', 'M', 'S', 'L', 'F', 'E', 'L', 'T', 'L', 'S', 'A'},
			{'A', 'E', 'U', 'I', 'O', 'N', 'R', 'G', 'I', 'H', 'D', 'D'},
			{'S', 'H', 'I', 'H', 'N', 'O', 'O', 'E', 'T', 'A', 'C', 'A'},
			{'T', 'O', 'N', 'H', 'O', 'E', 'T', 'N', 'J', 'O', 'L', 'R'},
			{'M', 'S', 'Y', 'A', 'E', 'R', 'H', 'O', 'R', 'A', 'E', 'T'},
			{'O', 'F', 'A', 'D', 'D', 'O', 'G', 'O', 'E', 'T', 'I', 'I'},
			{'A', 'E', 'M', 'F', 'S', 'E', 'E', 'T', 'C', 'N', 'T', 'R'},
			{'K', 'B', 'E', 'T', 'R', 'N', 'O', 'D', 'A', 'D', 'O', 'E'},
			{'V', 'C', 'E', 'M', 'R', 'H', 'A', 'C', 'V', 'I', 'N', 'B'},
			{'O', 'G', 'A', 'H', 'C', 'N', 'I', 'N', 'E', 'H', 'D', 'E'},
			{'D', 'T', 'M', 'E', 'C', 'O', 'S', 'N', 'A', 'T', 'A', 'W'},
			{'T', 'D', 'E', 'I', 'O', 'A', 'R', 'E', 'I', 'O', 'H', 'I'}};

	system("cls");

	int palavrasAcertadas[5] = {0, 0, 0, 0, 0};

	do
	{
		system("cls");
		printf("Tema: Nomes\n");
		printf("Localize os nomes no caça-palavras abaixo:\n\n");

		for (i = 0; i < 12; i++)
		{
			for (j = 0; j < 12; j++)
			{
				printf("%c ", matriz[i][j]);
			}
			printf("\n");
		}

		printf("\nDigite as palavras encontradas (Digite 'sair' para encerrar)\n");
		printf("\nPalavras acertadas:\n");
		for (i = 0; i < 5; i++)
		{
			if (palavrasAcertadas[i] == 1)
			{
				printf("%s\n", palavras[i]);
			}
		}

		printf("Digite uma palavra(em minúsculo): ");
		scanf("%s", palavra);

		if (strcmp(palavra, "sair") == 0)
		{
			break;
		}

		if (strcmp(palavra, palavra_anterior) == 0)
		{
			printf("Você já encontrou essa palavra antes!\n");
			continue;
		}

		for (i = 0; i < 5; i++)
		{
			if (strcmp(palavras[i], palavra) == 0)
			{
				if (palavrasAcertadas[i] == 0)
				{
					acertos++;
					palavrasAcertadas[i] = 1;
					printf("Palavra encontrada: %s\n", palavra);
				}
				else
				{
					printf("Você já encontrou essa palavra antes!\n");
				}
				break;
			}
		}

		strcpy(palavra_anterior, palavra);
	} while (acertos < 5);
	system("cls");
	printf("Parabéns, você ganhou!\nDeseja retornar ao menu? (s\\n): ");
	scanf("%s", &resposta);
	if (resposta == 's')
		Menu();
}

void Animais()
{
	char resposta;
	int i, j;
	char palavra[20];
	int acertos = 0;
	char palavras[5][20] = {"jegue", "grilo", "elefante", "girafa", "camelo"};
	char palavra_anterior[20] = "";

	char matriz[12][12] = {
			{'S', 'W', 'D', 'I', 'I', 'C', 'E', 'F', 'P', 'O', 'P', 'L'},
			{'U', 'A', 'F', 'M', 'A', 'A', 'P', 'E', 'S', 'R', 'R', 'S'},
			{'H', 'J', 'G', 'M', 'S', 'E', 'T', 'I', 'M', 'I', 'A', 'E'},
			{'U', 'R', 'E', 'R', 'A', 'S', 'H', 'L', 'N', 'S', 'I', 'Y'},
			{'O', 'L', 'I', 'G', 'I', 'E', 'C', 'A', 'B', 'G', 'I', 'E'},
			{'O', 'A', 'N', 'T', 'U', 'L', 'M', 'R', 'G', 'E', 'A', 'D'},
			{'E', 'I', 'U', 'H', 'T', 'E', 'O', 'I', 'Y', 'P', 'E', 'O'},
			{'N', 'N', 'T', 'T', 'A', 'F', 'R', 'Q', 'O', 'I', 'N', 'D'},
			{'A', 'E', 'E', 'E', 'E', 'A', 'O', 'N', 'D', 'C', 'D', 'T'},
			{'D', 'G', 'T', 'G', 'F', 'N', 'Y', 'Y', 'H', 'S', 'I', 'Y'},
			{'I', 'R', 'C', 'A', 'L', 'T', 'W', 'L', 'E', 'E', 'R', 'O'},
			{'E', 'H', 'A', 'E', 'G', 'E', 'R', 'R', 'N', 'S', 'I', 'M'}};

	system("cls");

	int palavrasAcertadas[5] = {0, 0, 0, 0, 0};

	do
	{
		system("cls");
		printf("Tema: Animais\n");
		printf("Localize os nomes no caça-palavras abaixo:\n\n");

		for (i = 0; i < 12; i++)
		{
			for (j = 0; j < 12; j++)
			{
				printf("%c ", matriz[i][j]);
			}
			printf("\n");
		}

		printf("\nDigite as palavras encontradas (Digite 'sair' para encerrar)\n");
		printf("\nPalavras acertadas:\n");
		for (i = 0; i < 5; i++)
		{
			if (palavrasAcertadas[i] == 1)
			{
				printf("%s\n", palavras[i]);
			}
		}

		printf("Digite uma palavra(em minúsculo): ");
		scanf("%s", palavra);

		if (strcmp(palavra, "sair") == 0)
		{
			break;
		}

		if (strcmp(palavra, palavra_anterior) == 0)
		{
			printf("Você já encontrou essa palavra antes!\n");
			continue;
		}

		for (i = 0; i < 5; i++)
		{
			if (strcmp(palavras[i], palavra) == 0)
			{
				if (palavrasAcertadas[i] == 0)
				{
					acertos++;
					palavrasAcertadas[i] = 1;
					printf("Palavra encontrada: %s\n", palavra);
				}
				else
				{
					printf("Você já encontrou essa palavra antes!\n");
				}
				break;
			}
		}

		strcpy(palavra_anterior, palavra);
	} while (acertos < 5);
	system("cls");
	printf("Parabéns, você ganhou!\nDeseja retornar ao menu? (s\\n): ");
	scanf("%s", &resposta);
	if (resposta == 's')
		Menu();
}

void Personagens()
{
	char resposta;
	int i, j;
	char palavra[20];
	int acertos = 0;
	char palavras[5][20] = {"batman", "anakin", "heisenberg", "riven", "luffy"};
	char palavra_anterior[20] = "";

	char matriz[12][12] = {
			{'R', 'L', 'H', 'O', 'H', 'T', 'L', 'O', 'E', 'U', 'M', 'C'},
			{'T', 'R', 'S', 'E', 'N', 'S', 'D', 'H', 'I', 'O', 'E', 'L'},
			{'V', 'B', 'A', 'T', 'M', 'A', 'N', 'A', 'K', 'I', 'N', 'U'},
			{'K', 'I', 'L', 'I', 'A', 'E', 'S', 'T', 'E', 'O', 'S', 'F'},
			{'S', 'A', 'M', 'I', 'V', 'U', 'S', 'E', 'R', 'L', 'A', 'F'},
			{'I', 'H', 'N', 'L', 'S', 'S', 'D', 'W', 'M', 'E', 'I', 'Y'},
			{'I', 'O', 'O', 'I', 'D', 'T', 'D', 'V', 'O', 'O', 'S', 'O'},
			{'G', 'E', 'H', 'E', 'I', 'S', 'E', 'N', 'B', 'E', 'R', 'G'},
			{'M', 'O', 'E', 'S', 'R', 'I', 'V', 'E', 'N', 'E', 'I', 'E'},
			{'H', 'H', 'N', 'E', 'M', 'H', 'I', 'M', 'A', 'A', 'B', 'L'},
			{'O', 'L', 'B', 'T', 'N', 'L', 'H', 'F', 'I', 'T', 'A', 'A'},
			{'L', 'S', 'H', 'T', 'H', 'E', 'C', 'H', 'O', 'U', 'E', 'O'}};

	system("cls");

	int palavrasAcertadas[5] = {0, 0, 0, 0, 0};

	do
	{
		system("cls");
		printf("Tema: Personagens\n");
		printf("Localize os nomes no caça-palavras abaixo:\n\n");

		for (i = 0; i < 12; i++)
		{
			for (j = 0; j < 12; j++)
			{
				printf("%c ", matriz[i][j]);
			}
			printf("\n");
		}

		printf("\nDigite as palavras encontradas (Digite 'sair' para encerrar)\n");
		printf("\nPalavras acertadas:\n");
		for (i = 0; i < 5; i++)
		{
			if (palavrasAcertadas[i] == 1)
			{
				printf("%s\n", palavras[i]);
			}
		}

		printf("Digite uma palavra(em minúsculo): ");
		scanf("%s", palavra);

		if (strcmp(palavra, "sair") == 0)
		{
			break;
		}

		if (strcmp(palavra, palavra_anterior) == 0)
		{
			printf("Você já encontrou essa palavra antes!\n");
			continue;
		}

		for (i = 0; i < 5; i++)
		{
			if (strcmp(palavras[i], palavra) == 0)
			{
				if (palavrasAcertadas[i] == 0)
				{
					acertos++;
					palavrasAcertadas[i] = 1;
					printf("Palavra encontrada: %s\n", palavra);
				}
				else
				{
					printf("Você já encontrou essa palavra antes!\n");
				}
				break;
			}
		}

		strcpy(palavra_anterior, palavra);
	} while (acertos < 5);
	system("cls");
	printf("Parabéns, você ganhou!\nDeseja retornar ao menu? (s\\n): ");
	scanf("%s", &resposta);
	if (resposta == 's')
		Menu();
}
