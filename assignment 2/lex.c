#include "lex.h"
#include <stdio.h>
#include <ctype.h>

char* yytext = ""; /* Lexeme (not '\0'
                      terminated)              */
int yyleng   = 0;  /* Lexeme length.           */
// int yylineno = 0;  /* Input line number        */

int lex(void)
{

   static char input_buffer[1024];
   char        *current;

   current = yytext + yyleng; /* Skip current
                                 lexeme        */

   while(1)
   {       /* Get the next one         */
      while(!*current )
      {
         /* Get new lines, skipping any leading
         * white space on the line,
         * until a nonblank line is found.
         */

         current = input_buffer;
         if(!gets(input_buffer))
         {
            *current = '\0' ;

            return EOI;
         }
        //  ++yylineno;
         while(isspace(*current))
            ++current;
      }
      for(; *current; ++current)
      {
         /* Get the next token */
         yytext = current;
         yyleng = 1;
         switch( *current )
         {
           case '+':
            return PLUS;
           case '*':
            return TIMES;
           case '(':
            return LP;
           case ')':
            return RP;
           case '.':
            return DOT;
           case '\n':
           case '\t':
           case ' ' :
            break;
           default:
            if(!isalpha(*current))
               fprintf(stderr, "Not alphanumeric <%c>\n", *current);
            else
            {
               while(isalpha(*current))
                  ++current;
               yyleng = current - yytext;
               return ID;
            }
            break;
         }
      }
   }
}


static int Lookahead = -1; /* Lookahead token  */

int match(int token)
{
   /* Return true if "token" matches the
      current lookahead symbol.                */

   if(Lookahead == -1)
      Lookahead = lex();

   return token == Lookahead;
}

void advance(void)
{
/* Advance the lookahead to the next
   input symbol.                               */

    Lookahead = lex();
}