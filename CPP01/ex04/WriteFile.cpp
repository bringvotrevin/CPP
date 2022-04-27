/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteFile.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:52:33 by dim               #+#    #+#             */
/*   Updated: 2022/04/27 16:04:22 by dim              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "WriteFile.hpp"

void	replace_and_write(int *flag, size_t idx, std::ofstream &W_file, std::string &copy, \
							const std::string &s1, const std::string &s2)
{
	if (*flag == 0)
		W_file << std::endl;
	while (idx != std::string::npos)
	{
		W_file << copy.substr(0, idx) << s2;
		copy = copy.substr(idx + s1.length());
		idx = copy.find(s1);
	}
	W_file << copy;
}

void	write_file(char *argv[], std::ifstream &R_file, std::ofstream &W_file)
{
	int			flag = 1;
	size_t		idx;
	std::string copy;
	const std::string s1(argv[2]);
	const std::string s2(argv[3]);
	while (!R_file.eof())
	{
		std::getline(R_file, copy);
		idx = copy.find(s1);
		if (idx == std::string::npos)
		{
			if (flag == 1)
			{
				W_file << copy;
				flag = 0;
			}
			else
				W_file << std::endl << copy;
		}
		else
			replace_and_write(&flag, idx, W_file, copy, s1, s2);
	}
}
