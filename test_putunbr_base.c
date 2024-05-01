void	ft_putunbr_base(long unsigned int nbr, char *base);

int main(void)
{
    long unsigned int n = 18446744073709551615UL;
    ft_putunbr_base(n, "0123456789abcdef");
    return (0);
}