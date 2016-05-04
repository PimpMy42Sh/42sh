void	*ft_keep(const void *ptr)
{
	static void	*cnt = (void*)0;

	if (ptr)
		cnt = (void*)ptr;
	return (cnt);
}

