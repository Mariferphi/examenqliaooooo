#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int repeat;

    i = 0;
    if (argc == 2)
    {
        repeat = 0;
        while(argv[1][i])
        {
            if (argv[1][i] >= 'a'  && argv[1][i] <= 'z')
                repeat = argv[1][i] -96;
            else if (argv[1][i] >= 'A'  && argv[1][i] <= 'Z')
                repeat = argv[1][i] -64;
            while(repeat > 1)
            {
                write(1, &argv[1][i], 1);
                repeat--;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    return (0);
}
