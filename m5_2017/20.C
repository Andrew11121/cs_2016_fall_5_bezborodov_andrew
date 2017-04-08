#include <stdio.h>



int main()
{
	char s[255], key[100];
	int i;
	FILE*F;
	FILE*Q;
	int fsize = 0, dsize = 0;
	char * buffer;
	char * a;
	for (i = 0; i < 255; i++)
		s[i] = '\0';
	for (i = 0; i < 100; i++)
		key[i] = '\0';
	printf("Imput your key:");
	gets(key);
	printf("Imput a way to your file:");
	gets(s);
	for (i = 0; ;i++)
	{
		if (key[i] == '\0') break;
		dsize++;
	}
	F = fopen(s, "rb");
	fseek(F, 0, SEEK_END);
	fsize = ftell(F);
	rewind(F);
	buffer = (char *)malloc(fsize);
	fread(buffer, 1, fsize, F);
	fclose(F);
	int index = 0;
	for (i = 0; i < fsize; i++)
	{
		if (index == dsize) index = 0;
		buffer[i] ^= key[index];
		index++;
	}
	Q = fopen(s, "w");

	fwrite(buffer, 1, fsize, Q);
	
	fclose(Q);
	free(buffer);
	printf("File succesfully encrypted/decrypted");
	return 0;
}
