#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - quand l'utilisateur exécte main,
 * l'utilisateur doit donner deux entiers et un opératur
 * main calculera les mathématiques via un pointeur de onction
 * imprime la somme, la différence, le produit, le dvidende ou le reste
 * @argc: compteur d'arguments
 * @argv: arguments
 * Return: 0 en cas de success
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*f)(int, int);

	/* valider l'entrée de l'utilisateur */
	if (argc != 4) /* Vérifier si le nombre d'arguments est correct */
	{
		printf("Error\n");
		exit(98); /* Quitter le programme avec le code d'erreur 98 */
	}

/* convert l'entrée utilisateur n int pointe vers fonctio d'opération corrc*/
	n1 = atoi(argv[1]); /* Convertir le premier argument en entier */
	n2 = atoi(argv[3]); /* Convertir le troisième argument en entier*/
	f = get_op_func(argv[2]);
	/* Obtenir la fonction d'opération correcte via un pointeur de fonction*/

	/* Gérer les erreur */
	if (f == NULL || (argv[2][1] != '\0'))
		/* Vérifier si l'opérateur est valid*/
	{
		printf("Error\n");
		exit(99); /* Quitter le programme avec le code d'erreur 99 */
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
		/* Vérifi la division par zéro*/
	{
		printf("Error\n");
		exit(100); /* Quitter le programme avec le code d'erreur 100 */
	}

	/* Calculer et imprimer le résultat via le pointeur de fonction */
	printf("%d\n", f(n1, n2));

	return (0); /* Fin du programme avec succès */
}

