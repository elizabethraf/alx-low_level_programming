#ifndef MAIN_H_
#define MAIN_H_

int _putchar(int chr)

void print_puts(void)
{
        int ch;
        char myput[] = "_putchar";
        for ( int i = 0; i < 8; i++)
        {
                ch = (int) myput[i];
                _putchar(ch);
        }
        _putchar('\n');
}

#endif
