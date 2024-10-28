/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <aalahyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:31:41 by aalahyan          #+#    #+#             */
/*   Updated: 2024/10/28 14:01:11 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main()
{
	int	score = 0;
	int total = 101; //change total later


	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_isalpha()\n");
	printf("--------------------------------------\n");
	test_isalpha(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_isdigit()\n");
	printf(BLUE"--------------------------------------\n");
	test_isdigit(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_isalnum()\n");
	printf(BLUE"--------------------------------------\n");
	test_isalnum(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_isascii()\n");
	printf(BLUE"--------------------------------------\n");
	test_isascii(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_isprint()\n");
	printf(BLUE"--------------------------------------\n");
	test_isprint(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strlen()\n");
	printf(BLUE"--------------------------------------\n");
	test_strlen(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	///
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_memset()\n");
	printf(BLUE"--------------------------------------\n");
	test_memset(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_bzero()\n");
	printf(BLUE"--------------------------------------\n");
	test_bzero(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_memcpy()\n");
	printf(BLUE"--------------------------------------\n");
	test_memcpy(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_memmove()\n");
	printf(BLUE"--------------------------------------\n");
	test_memmove(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strlcpy()\n");
	printf(BLUE"--------------------------------------\n");
	test_strlcpy(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//

	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strlcat()\n");
	printf(BLUE"--------------------------------------\n");
	test_strlcat(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_toupper()\n");
	printf(BLUE"--------------------------------------\n");
	test_toupper(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_tolower()\n");
	printf(BLUE"--------------------------------------\n");
	test_tolower(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strchr()\n");
	printf(BLUE"--------------------------------------\n");
	test_strchr(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strrchr()\n");
	printf(BLUE"--------------------------------------\n");
	test_strrchr(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strncmp()\n");
	printf(BLUE"--------------------------------------\n");
	test_strncmp(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_memchr()\n");
	printf(BLUE"--------------------------------------\n");
	test_memchr(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_memcmp()\n");
	printf(BLUE"--------------------------------------\n");
	test_memcmp(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//*/
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strnstr()\n");
	printf(BLUE"--------------------------------------\n");
	test_strnstr(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_atoi()\n");
	printf(BLUE"--------------------------------------\n");
	test_atoi(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_calloc()\n");
	printf(BLUE"--------------------------------------\n");
	test_calloc(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strdup()\n");
	printf(BLUE"--------------------------------------\n");
	test_strdup(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_substr()\n");
	printf(BLUE"--------------------------------------\n");
	test_substr(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strjoin()\n");
	printf(BLUE"--------------------------------------\n");
	test_strjoin(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_strtrim()\n");
	printf(BLUE"--------------------------------------\n");
	test_strtrim(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//
	printf(BLUE"\n\n--------------------------------------\n");
	printf(BLUE"TESTING\t\tft_split)\n");
	printf(BLUE"--------------------------------------\n");
	test_split(&score);
	printf(BLUE"--------------------------------------\n");
	printf(BLUE"press ENTER  to continue...");
	getchar();
	//




	printf(PURPLE"\nscore : %d/%d\t\t%d%%\n", score, total, (score * 100) / total);
}