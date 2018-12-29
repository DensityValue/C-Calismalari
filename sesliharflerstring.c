#include <stdio.h>

int main()
{                     //ince sesli harfleri buyuk olarak yazdiran c programi
 int i,x,sayac;
 sayac=0;
 char str[150];
 printf("Metin Gir Karsim : ");
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
   if(str[i]=='e')
   str[i]='E';
   else if(str[i]=='i')
   str[i]='I';
   else if(str[i]=='o')
   str[i]='O';
   else if(str[i]=='u')
   str[i]='U';
 }
 printf("Ince Sesli Harfleri Buyuk Metin : %s ",str);
 return 0;
}
