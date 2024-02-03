#include "main.h"

/**
 * main - test codes
 *
 * Return: always 0 success
 */

int main(void)
{
	int printed = 0;
	char *strings = "Vertiges";
	char character = 'v';
	int len;
  int len2;
	/*_printf("la programmation en c donne les %s", strings);*/
	/*_printf("la programmation en c donne les %c", character);*/
	/* print("la programmation en c donne les %s.\n", strings);*/
	/*print("la programmation en c donne les %c.\n", character);*/
	/* print("le pourcentage est %% en c.\n");*/
	/*printed = print("le pourcentage est %% en c.\n");*/
	/*printf("%d\n", printed);*/
	/*_print("la programmation en c donne les %s.\n", strings);*/
	/*_print("la programmation en c donne les %c.\n", character);*/
	/*_print("le pourcentage est %% en c.\n");*/
	/*printed = print("le pourcentage est %% en c.\n");*/
	/*printf("%d\n", printed);*/
	_printf("la programmation en %s c donne les .\n", strings);
	_printf("la programmation en c donne les %c.\n", character);
	_printf("le pourcentage est %% en c.\n");
	_printf("le pourcentage est \\% en c.\n");
	_printf("Let's try to printf a simple sentence.\n");
	printed = _printf("Let's try to printf a simple sentence.\n");
	_printf("%d\n", printed);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printed = _printf("Percent:[%%]\n");
	_printf("%d\n", printed);
	_printf("Negative:[%d]\n", -762534);
  printf("Negative:[%d]\n", -762534);
	len = _printf("Let's try to printf a simple sentence.\n");
  len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("Should print a single percent sign: %%\n");
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("%b\n", 98);
	return (0);
}
