#include<stdio.h>
void whole_file_to_rewrite(void)
{
    //С помощью переменной file будем осуществлять доступ к файлу
    FILE *file;
    //Открываем текстовый файл с правами на запись
    file = fopen("/home/elvin/Documents/Check_C/test.txt", "w");
    if(file==NULL)
	{
	 perror("File not opened");
	return;
	}
    //Пишем в файл
    int count=fprintf(file, "Hello, World!FIRST\n");
    printf("Func whole_file_to_rewrite:\n Bytes in file printed: %d\n",count);
    //Закрываем файл
    fclose(file); 

}
void append(void)
{
    FILE *file;
    //Открываем текстовый файл с правами на запись
    file = fopen("/home/elvin/Documents/Check_C/test.txt", "a");
	if(file==NULL)
	{
	 perror("File not opened(2)");
	 return;
	}
    //Пишем в файл
    int count=fprintf(file, "Hello, World!Second\n");
    printf("Func append:\nBytes in file printed: %d\n",count);

    //Закрываем файл
    fclose(file); 

}
int main()
{
    whole_file_to_rewrite();
    append();
    return 0;
}
