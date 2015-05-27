#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *str = "    Tin     hoc       co         so    4   ";
    char *result;
    
    int i,j;
    result = (char*) malloc (50);
    strcpy(result, str);
    for (i=0; i<strlen(result);i++)
        if (*(result+i) != ' ')
    {   strcpy(result,result+1);
        break;
    }
    for (i=strlen(result)-1; i>=0;i--)
        if (*(result+i) != ' ')
    {   *(result+i+1)='\0';
        break;
    }
    for(i=0;i<strlen(result);i++)
    { if (*(result +i) == ' ')
      { for (j=i+1; j < strlen(result); j++)
        {if (result[j] != ' ')
            {strcpy(result+i+1, result +j);
            break;
            }
        }
      }
    }
    printf("%s", result);
    free(result);
    getch();
           
    
}
