#include <stdio.h>


char StrCopy(char *s, char *t, int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
		s[i] = t[i];
}

char StrCat(char *s, char *t, int x)
{
	int i = 0, a = 0;
	for (i = 0; i < 50; i++)
	{
		if (s[i] != '\0')
			a++;
		else
			break;
	}
	for (i = 0; i < x; i++)
		s[i + a] = t[i];
}

int StrCmp(char * s, char * t, int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
		if (s[i] != t[i])
			return 0;
	return 1;
}

int main()
{
	int x, n, f, i;
	char t[100], s[100];
	for (n = 0; n < 100; n++)
		t[n] = '\0';
	for (n = 0; n < 50; n++)
		s[n] = '\0';
	printf("Input your string: ");
	gets(t);
        printf("Choose the func you want to use:\n"	
			"1 - copy\n"
			"2 - add symbols to the end\n"
			"3 - compare your string and the original one\n");
        scanf("%i", &i);
        if(i == 1)
        {
	  printf("Input the number of symbols n for copping:");
	  scanf("%i", &x);
	  StrCopy(s, t, x);
	  printf("Your coppied string with n symbols: %s\n", s);
        }
        if(i == 2)
        {
          printf("Input the number of symbols n for adding symbolts to strings end: ");
	  scanf("%i", &x);
	  StrCat(s, t, x);
    	  printf("Previous string witn n symbols added to it's end: %s\n", s);
        }
        if(i == 3)
        {
	  printf("Input the number of symbols n for comparing: ");
	  scanf("%i", &f);
	  printf("Comparing our previos string with n symbols with the original string, 1 - if the strings are equal: %i\n", StrCmp(s, t, x));
        }
	return 0;
}
