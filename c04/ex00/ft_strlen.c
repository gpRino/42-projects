//:Stdheader
int	ft_strlen(char	*str)
{
	int i;
	i = 0;
	
	while (str[i]  != '\0')
		i ++;
	return (i);
}
int main ()
{
	char str[] = "Going back to 505";
	return (ft_strlen(str));
}
