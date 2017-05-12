#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0


int main()
{
	bool checker1 = true;
	FILE * s;
	FILE * k;
	char fk[255];
	for (int i = 0; i < 255; i++)
		fk[i] = '\0';
	printf("Imput a way to your file (Ex: C:/Folder/file.txt): ");
	gets(fk);
	if (fk == NULL)
		printf("Empty file");
	s = fopen(fk, "rb");
	int fsize = 0, counter = 0, f = 0, index = 0, i = 0, j = 0;
	char * buffer;
	char * d;

	fseek(s, 0, SEEK_END);
	fsize = ftell(s);
	rewind(s);
	buffer = (char *)malloc(fsize);
	fread(buffer, 1, fsize, s);
	fclose(s);
	f = fsize;
	d = (char*)malloc(fsize);
	for (i = 0; i < fsize; i++)
	{
		if (buffer[i] == '"') checker1 = !checker1;
		if (buffer[i] == '/' && buffer[i + 1] == '/' && checker1)
		{
			counter += 2;
			for (j = i + 2; j < fsize; j++)
			{
				if (buffer[j] == '\n')
				{
					f -= counter;
					break;
				}
				counter++;
			}
			counter--;
			i += counter;
			counter = 0;
		}
		else if (buffer[i] == '/' && buffer[i + 1] == '*' && checker1)
		{
			counter += 2;
			for (j = i + 2; j < fsize; j++)
			{
				if (buffer[j] == '*' && buffer[j + 1] == '/')
				{
					counter += 2;
					f -= counter;
					break;
				}
				counter++;
			}
			counter--;
			i += counter;
			counter = 0;
		}
		else
		{
			d[index] = buffer[i];
			index++;
		}
	}

	k = fopen(fk, "w");
	fwrite(d, 1, f, k);
	fclose(k);
	free(buffer);
	printf("Your file has been changed\n");
	return 0;
}
