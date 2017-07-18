#include <string.h>
#include <stdio.h>

int main()
{
   char str[80] = "This is - www.tutorialspoint.com - website";
   const char s[2] = " ";
   char newstring[90]="";
   char *token;
   int counter=1;
   for(counter=0;counter<strlen(str);counter++){
    if(str[counter]=='a'){
      str[counter]='o';
    }
   
   
   }
   
   /* get the first token */
   token = strtok(str, s);
   strcat(newstring,token);
   strcat(newstring," ");
   strcat(newstring,"ba ");
   
   /* walk through other tokens */
   while( token != NULL ) 
   {
      printf( "%s\n", token );
    
      token = strtok(NULL, s);
      if(token!=NULL&&counter%2==0){
        strcat(newstring,token);
        strcat(newstring," ");
        strcat(newstring,"wa ");
      }
      else if(token!=NULL&&counter%2==1){
        strcat(newstring,token);
        strcat(newstring," ");
        strcat(newstring,"ba ");
      }
      
      counter++;
      
   }
   newstring[strlen(newstring)-1]='\0';
   
   return(0);
}