
static typedef struct  s_point
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
	fill(tab[y][x], size, x + 1, y, target);
	fill(tab[y][x], size, x - 1, y, target);
	fill(tab[y][x], size, x, y + 1, target);
	fill(tab[y][x], size, x, y - 1, target);
}
void  flood_fill(char **tab, t_point size, t_point begin)
{
	char target = tab[begin.y][begin.x];
	fill(tab, size, begin.x, begin.y, target);

}
