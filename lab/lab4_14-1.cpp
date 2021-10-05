#include<iostream>
using namespace std;

#include <stdio.h>
#include<string.h>
main()
{
char user[80],pass[80];
int i;
do
{
printf("ninput username=");
gets(user);

printf("ninput password=");
gets(pass);

if (strcmp(pass,"12345")==0)
{printf("n welcome n");
}
else
{i++;}

}while(i>0);


}