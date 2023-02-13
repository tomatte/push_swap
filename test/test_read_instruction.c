/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read_instruction.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:38:37 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/13 09:58:11 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <string.h>
#include "../bonus_src/others/read_instructions.c"
#include "../bonus_src/utils/is_str_equal.c"

Test(read_instructions, is_str_equal)
{
	char	*word1 = ft_strdup("Jabulane");
	char	*word2 = ft_strdup("mine");
	char	*word3 = ft_strdup("minee");
	char	test_str[] = "mula";

	cr_assert(is_str_equal(word1, "Jabulane"));
	cr_assert(is_str_equal(word2, word3) == false);
	cr_assert(is_str_equal(test_str, "mul") == false);
	cr_assert(is_str_equal("carangueijo da mata", "carangueijo da mata"));
	cr_assert(is_str_equal("", ""));
	cr_assert(is_str_equal("", "0") == false);
	cr_assert(is_str_equal(NULL, "") == false);
	cr_assert(is_str_equal(NULL, NULL) == false);
	cr_assert(is_str_equal(word1, NULL) == false);
	free(word1);
	free(word2);
	free(word3);
}

Test(read_instructions, get_instruction_code)
{
	char	instruction[] = "rra";
	char	instruction2[] = "pa";
	char	instruction3[] = "sb";
	char	err_instruction4[] = "rraa";

	cr_assert(get_instruction_code(instruction));
	cr_assert(get_instruction_code(instruction2));
	cr_assert(get_instruction_code(instruction3));
	cr_assert(get_instruction_code(err_instruction4) == false);
	cr_assert(get_instruction_code("ss"));
	cr_assert(get_instruction_code("rrrr") == false);
	cr_assert(get_instruction_code("PA") == false);
	cr_assert(get_instruction_code("rrb"));
	cr_assert(get_instruction_code("rrr"));
	cr_assert(get_instruction_code("ra"));
	cr_assert(get_instruction_code("rb"));
	cr_assert(get_instruction_code("rr"));
	cr_assert(get_instruction_code("pb"));
	cr_assert(get_instruction_code("") == false);
	cr_assert(get_instruction_code(NULL) == false);
}

static void	print_codes(char *codes)
{
	if (!codes)
		return ;
	while (*codes)
		ft_printf("%d ", *codes++);
	ft_printf("\n");
}

Test(read_instructions, add_to_code_array)
{
	char	*code_array;

	code_array = ft_strdup("");
	add_to_code_array(&code_array, "sa");
	add_to_code_array(&code_array, "sb");
	add_to_code_array(&code_array, "ss");
	add_to_code_array(&code_array, "rra");
	add_to_code_array(&code_array, "rrb");
	add_to_code_array(&code_array, "rrr");
	add_to_code_array(&code_array, "ra");
	add_to_code_array(&code_array, "rb");
	add_to_code_array(&code_array, "rr");
	add_to_code_array(&code_array, "pa");
	add_to_code_array(&code_array, "pb");
	ft_printf("Expect codes: ");
	print_codes(code_array);

	ft_printf("Expect error:  ");
	add_to_code_array(&code_array, "sss");
	print_codes(code_array);
	free(code_array);
}

