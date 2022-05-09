#include<stdio.h>

int		ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z') ||
			(c >= '0' && c <= '9'))
		return (1);
	return (0);
}
int main()
{
	int x;
	int i ;
	scanf("%d",&i);
	x = ft_isalnum(i);
	printf("%d",x);
}
