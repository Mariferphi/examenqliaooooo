#include <stdlib.h>
#include <stdio.h>



typedef struct  s_point
{
int           x;
int           y;
}               t_point;

void	fill(char **tab, t_point size, int x, int y, char target)
{
	if(x < 0 || x >= size.x|| y < 0 || y >= size.y)
		return;
	if(tab[y][x] != target || tab[y][x] == 'F')
		return;
	tab[y][x] = 'F';
	fill(tab, size, x + 1, y, target);
	fill(tab, size, x - 1, y, target);
	fill(tab, size, x, y + 1, target);
	fill(tab, size, x, y - 1, target);
}
void  flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x];
	fill(tab, size, begin.x, begin.y, target);

}
char **make_area(char **zone, t_point size)
{
    char **tab;

    tab = malloc(sizeof(char *) * size.y);
    for (int i = 0; i < size.y; ++i)
    {
        tab[i] = malloc(size.x + 1);
        for (int j = 0; j < size.x; ++j)
            tab[i][j] = zone[i][j];
        tab[i][size.x] = '\0';
    }

    return tab;
}

int main(void)
{
    t_point size = {8, 8};
    char *zone[] = {
        "11111111",
        "10000001",
        "10010001",
        "10110001",
        "11100001",
		"00001001",
		"11000001",
		"11111111"
    };

    char **area = make_area(zone, size);
    for (int i = 0; i < size.y; ++i)
        printf("%s\n", area[i]);
    printf("\n");

    t_point begin = {7, 4}; 
    flood_fill(area, size, begin);

    for (int i = 0; i < size.y; ++i)
        printf("%s\n", area[i]);

    for (int i = 0; i < size.y; ++i)
        free(area[i]);
    free(area);

    return (0);
}