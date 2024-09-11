#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char data[2000],fname[30];
    FILE*fp;
    printf("enter a file name to open/create: ");
    gets(fname);
    fp=fopen(fname,"w");
    if(fp==NULL)
        printf("error occurred while opening/creating a file !");
    else
    {
        printf("\nenter the data:\n");
        gets(data);
        while(strlen(data)>0)
        {

            fputs(data,fp);
            fputs("\n",fp);
            gets(data);

        }
    }
    fclose(fp);
}
