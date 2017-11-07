/*
 * Write a function escape(s,t) that converts characters like newline and tab
 * into visible escape sequences like \n and \t as it copies the string t to s . Use a switch . Write
 * a function for the other direction as well, converting escape sequences into the real characters.
 * */

#include <stdio.h>

void escape(char s[], char t[]);

int main()
{
    char s[] = "asdfasdf\nasdf\tasdf\n\tasdf";
    char t[1024];
    escape(s, t);
    printf("%s\n", t);

}

void escape(char s[], char t[])
{
    char c;
    int i = 0;
    int j = 0;

    while((c = s[i]) != '\0')
    {
        switch(c)
        {
            case '\n':
                t[j] = '\\';
                j++;
                t[j] = 'n';
                break;
            case '\t':
                t[j] = '\\';
                j++;
                t[j] = 't';
                break;
            default:
                t[j] = s[i];
                break;
        }
        i++;
        j++;
    }
    t[j] = '\0';
}
