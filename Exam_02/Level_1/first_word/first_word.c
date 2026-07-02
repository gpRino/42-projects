#include <unistd.h>

int main(int argc, char ** argv)
{
    int i;

    i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\b' || 
           argv[1][i] == '\v' || argv[1][i] == '\f' || argv[1][i] == '\r' || argv[1][i] == '\n' || argv[1][i] == '\a')
        i++;
    while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\b' && 
           argv[1][i] != '\v' && argv[1][i] != '\f' && argv[1][i] != '\r' && argv[1][i] != '\n' && argv[1][i] != '\a')
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}