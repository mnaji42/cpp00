#include <iostream>

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			j = -1;
			std::string str(argv[i]);
			while (++j < str.length())
			{
				std::cout << char(toupper(str[j]));
			}
		}
		std::cout << std::endl;
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}