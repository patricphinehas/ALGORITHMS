    /*

     * C Program to Check if Expression is correctly Parenthesized  

     */

    #include <stdio.h>

    #include <stdlib.h>

    #include <string.h>
    #include"C:\Users\Sparkles\Desktop\aaalab\final\balanced_paranthesis\include\balanced.h"	
    void main()

    {

    	int i;
    	char a[100];
    	printf("enter expression\n");
    	scanf("%s", &a);
    	for (i = 0; a[i] != '\0';i++)
    	{
    		if (a[i] == '(')
    		{
    			push(a[i]);
    		}
    		else if (a[i] == ')')
    		{
    			pop();
    		}
    	}
    	find_top();
    }

     

 