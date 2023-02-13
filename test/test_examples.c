
Test(bonus, greater10)
{
	cr_assert(greater10(11));
	cr_assert(greater10(9));
}

Test(test_string, name)
{
	char	*name1 = ft_strdup("Alice");
	char	*name2 = strdup("Alice");
	cr_assert_str_eq(name1, name2, "Strings %s and %s should be equal.", name1, name2);
}
