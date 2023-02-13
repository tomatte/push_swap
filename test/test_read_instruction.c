/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read_instruction.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:38:37 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/13 11:32:35 by dbrandao         ###   ########.fr       */
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
	char	instruction[] = "rra\n";
	char	instruction2[] = "pa\n";
	char	instruction3[] = "sb\n";
	char	err_instruction4[] = "rraa\n";

	cr_assert(get_instruction_code(instruction));
	cr_assert(get_instruction_code(instruction2));
	cr_assert(get_instruction_code(instruction3));
	cr_assert(get_instruction_code(err_instruction4) == false);
	cr_assert(get_instruction_code("ss\n"));
	cr_assert(get_instruction_code("rrrr\n") == false);
	cr_assert(get_instruction_code("PA\n") == false);
	cr_assert(get_instruction_code("rrb\n"));
	cr_assert(get_instruction_code("rrr\n"));
	cr_assert(get_instruction_code("ra\n"));
	cr_assert(get_instruction_code("rb\n"));
	cr_assert(get_instruction_code("rr\n"));
	cr_assert(get_instruction_code("pb\n"));
	cr_assert(get_instruction_code("pb") == false);
	cr_assert(get_instruction_code("") == false);
	cr_assert(get_instruction_code(NULL) == false);
}

Test(read_instructions, add_to_code_array)
{
	char	*code_array;
	char	result[12] = {11, 21, 1, 13, 23, 3, 12, 22, 2, 14, 24, 0};

	code_array = ft_strdup("");
	add_to_code_array(&code_array, "sa\n");
	add_to_code_array(&code_array, "sb\n");
	add_to_code_array(&code_array, "ss\n");
	add_to_code_array(&code_array, "rra\n");
	add_to_code_array(&code_array, "rrb\n");
	add_to_code_array(&code_array, "rrr\n");
	add_to_code_array(&code_array, "ra\n");
	add_to_code_array(&code_array, "rb\n");
	add_to_code_array(&code_array, "rr\n");
	add_to_code_array(&code_array, "pa\n");
	add_to_code_array(&code_array, "pb\n");
	print_codes(code_array);
	print_codes(result);
	cr_assert_str_eq(result, code_array);

	ft_printf("Expect error:  ");
	add_to_code_array(&code_array, "sss");
	print_codes(code_array);
	free(code_array);
}
