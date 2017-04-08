#include <stdio.h>

#define bool int
#define true 1
#define false 0

int main()
{
	bool checker1 = true;
	FILE * sh;
	FILE * fi;
	char fif[255];
	for (int i = 0; i < 255; i++)
		fif[i] = '\0';
	printf("Imput a way to your file:");
	gets(fif);
	if (fif == NULL)
		printf("Empty file\n");
	sh = fopen(fif, "rb");
	int fsize = 0, counter = 0, f = 0, index = 0, i = 0, j = 0;
	char * buffer;
	char * a;

	fseek(sh, 0, SEEK_END);
	fsize = ftell(sh);
	rewind(sh);
	buffer = (char *)malloc(fsize);
	fread(buffer, 1, fsize, sh);
	fclose(sh);
	f = fsize;
	a = (char*)malloc(fsize);
	for (i = 0; i < fsize; i++)
	{
		if (buffer[i] == '"') checker1 = !checker1;
		if (buffer[i] == '/' && buffer[i+1] == '/' && checker1)
		{
			counter += 2;
			for (j = i + 2; j < fsize;j++)
			{
				if (buffer[j] == 0x0d && buffer[j + 1] == 0x0a)
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
			a[index] = buffer[i];
			index++;
		}
	}
	
	fi = fopen(fif, "w");
	fwrite(a, 1, f, fi);
	fclose(fi);
	free(buffer);
	printf("Your file has been changed\n");
	return 0;
}
