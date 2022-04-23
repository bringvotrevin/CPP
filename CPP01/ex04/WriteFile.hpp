/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteFile.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dim <dim@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 18:52:48 by dim               #+#    #+#             */
/*   Updated: 2022/04/23 21:58:48 by dim              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITEFILE_HPP
# define WRITEFILE_HPP
# include <iostream>
# include <fstream>

void	write_file(char *argv[], std::ifstream &R_file, std::ofstream &W_file);

#endif
