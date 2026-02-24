
int main()
{
    char *word = "hello, world!";
    int i = 0;
    while (word[i] != '\0')
    {
        ft_putchar(word[i]);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
