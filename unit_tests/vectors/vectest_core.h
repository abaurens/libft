/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectest_core.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:31:45 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 12:55:44 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTEST_CORE_H
# define VECTEST_CORE_H

static char	g_stop_test = 0;

# define MAKE_FUNCNAME(prefix, name) prefix ## name
# define MAKE_FUNCNAME2(prefix, name) prefix name

# define TEST(fnc) ft_printf("\033[31mtest %s:\033[0m\n", (#fnc));\
	MAKE_FUNCNAME(test_, fnc)();ft_printf("\n");if(g_stop_test)abort();

# define SUBTEST(fnc) \
	ft_printf("  \033[35m%s:\033[0m\n", (#fnc));fnc();\
	ft_printf("\n");if(g_stop_test)abort();

/*
# define DECOMP(vec)\
	_Generic((vec),\
		t_vec2: DECOMP2,\
		t_vec2i: DECOMP2,\
		t_vec2f: DECOMP2,\
		t_vec2l: DECOMP2,\
		t_vec3: DECOMP3,\
		t_vec3i: DECOMP3,\
		t_vec3f: DECOMP3,\
		t_vec3l: DECOMP3))(vec)
*/

# define DECOMP2(vec) (vec).x, (vec).y
# define DECOMP3(vec) (vec).x, (vec).y, (vec).z
# define DECOMP4(vec) (vec).x, (vec).y, (vec).z, (vec).w

# define VEC_FMT(vec)\
	_Generic((vec),\
		t_vec2: "{%f, %f}",\
		t_vec2i: "{%d, %d}",\
		t_vec2f: "{%f, %f}",\
		t_vec2l: "{%Lf, %Lf}",\
		t_vec3:  "{%f, %f, %f}",\
		t_vec3i: "{%d, %d, %d}",\
		t_vec3f: "{%f, %f, %f}",\
		t_vec3l: "{%Lf, %Lf, %Lf}",\
		t_vec4:  "{%f, %f, %f, %f}",\
		t_vec4i: "{%d, %d, %d, %d}",\
		t_vec4f: "{%f, %f, %f, %f}",\
		t_vec4l: "{%Lf, %Lf, %Lf, %Lf}")

# define PRINTVEC(vec) ft_printf(VEC_FMT(vec), DECOMP(vec))

# define PRINT_FUNCNAME(fnc, vec)	\
	ft_printf("%s_%s", _Generic((vec),\
	t_vec2: "v2",\
	t_vec2i: "v2i",\
	t_vec2f: "v2f",\
	t_vec2l: "v2l",\
	t_vec3:  "v3",\
	t_vec3i: "v3i",\
	t_vec3f: "v3f",\
	t_vec3l: "v3l",\
	t_vec4:  "v4",\
	t_vec4i: "v4i",\
	t_vec4f: "v4f",\
	t_vec4l: "v4l"), (#fnc));\

# define FUNCNAME(fnc, vec)	\
	_Generic((vec),\
	t_vec2: MAKE_FUNCNAME(v2_, fnc),\
	t_vec2i: MAKE_FUNCNAME(v2i_, fnc),\
	t_vec2f: MAKE_FUNCNAME(v2f_, fnc),\
	t_vec2l: MAKE_FUNCNAME(v2l_, fnc),\
	t_vec3:  MAKE_FUNCNAME(v3_, fnc),\
	t_vec3i: MAKE_FUNCNAME(v3i_, fnc),\
	t_vec3f: MAKE_FUNCNAME(v3f_, fnc),\
	t_vec3l: MAKE_FUNCNAME(v3l_, fnc),\
	t_vec4:  MAKE_FUNCNAME(v4_, fnc),\
	t_vec4i: MAKE_FUNCNAME(v4i_, fnc),\
	t_vec4f: MAKE_FUNCNAME(v4f_, fnc),\
	t_vec4l: MAKE_FUNCNAME(v4l_, fnc))

# define TEST_FUNC4(fnc, vec, a1, a2, a3, a4)\
	FUNCNAME(fnc, vec)(&vec, a1, a2, a3, a4)

# define TEST_FUNC3(fnc, vec, a1, a2, a3)\
	FUNCNAME(fnc, vec)(&vec, a1, a2, a3)

# define TEST_FUNC2(fnc, vec, a1, a2)\
	FUNCNAME(fnc, vec)(&vec, a1, a2)

# define TEST_FUNC1(fnc, vec, a1)\
	FUNCNAME(fnc, vec)(&vec, a1)

# define TEST_FUNC0(fnc, vec)\
	FUNCNAME(fnc, vec)(&vec)

# define TEST_FUNC(fnc, vec, ...)\
	FUNCNAME(fnc, vec)(&vec, ##__VA_ARGS__)

/*
# define v2_add3 v2_add2
# define v2i_add3 v2i_add2
# define v2l_add3 v2l_add2
# define v2f_add3 v2f_add2
# define v2_add4 v2_add2
# define v2i_add4 v2i_add2
# define v2l_add4 v2l_add2
# define v2f_add4 v2f_add2

# define v3_add2 v3_add3
# define v3i_add2 v3i_add3
# define v3l_add2 v3l_add3
# define v3f_add2 v3f_add3
# define v3_add4 v3_add3
# define v3i_add4 v3i_add3
# define v3l_add4 v3l_add3
# define v3f_add4 v3f_add3

# define v4_add2 v4_addc
# define v4i_add2 v4i_addc
# define v4l_add2 v4l_addc
# define v4f_add2 v4f_addc
# define v4_add3 v4_addc
# define v4i_add3 v4i_addc
# define v4l_add3 v4l_addc
# define v4f_add3 v4f_addc


# define v2_sub3 v2_sub2
# define v2i_sub3 v2i_sub2
# define v2l_sub3 v2l_sub2
# define v2f_sub3 v2f_sub2
# define v2_sub4 v2_sub2
# define v2i_sub4 v2i_sub2
# define v2l_sub4 v2l_sub2
# define v2f_sub4 v2f_sub2

# define v3_sub2 v3_sub3
# define v3i_sub2 v3i_sub3
# define v3l_sub2 v3l_sub3
# define v3f_sub2 v3f_sub3
# define v3_sub4 v3_sub3
# define v3i_sub4 v3i_sub3
# define v3l_sub4 v3l_sub3
# define v3f_sub4 v3f_sub3

# define v4_sub2 v4_subc
# define v4i_sub2 v4i_subc
# define v4l_sub2 v4l_subc
# define v4f_sub2 v4f_subc
# define v4_sub3 v4_subc
# define v4i_sub3 v4i_subc
# define v4l_sub3 v4l_subc
# define v4f_sub3 v4f_subc


# define v2_mul3 v2_mul2
# define v2i_mul3 v2i_mul2
# define v2l_mul3 v2l_mul2
# define v2f_mul3 v2f_mul2
# define v2_mul4 v2_mul2
# define v2i_mul4 v2i_mul2
# define v2l_mul4 v2l_mul2
# define v2f_mul4 v2f_mul2

# define v3_mul2 v3_mul3
# define v3i_mul2 v3i_mul3
# define v3l_mul2 v3l_mul3
# define v3f_mul2 v3f_mul3
# define v3_mulc v3_mul3
# define v3i_mulc v3i_mul3
# define v3l_mulc v3l_mul3
# define v3f_mulc v3f_mul3

# define v4_mul2 v4_mulc
# define v4i_mul2 v4i_mulc
# define v4l_mul2 v4l_mulc
# define v4f_mul2 v4f_mulc
# define v4_mul3 v4_mulc
# define v4i_mul3 v4i_mulc
# define v4l_mul3 v4l_mulc
# define v4f_mul3 v4f_mulc
*/

# define v2_normf v2_norm
# define v2_norml v2_norm
# define v2f_normf v2f_norm
# define v2f_norml v2f_norm
# define v2l_normf v2l_norm
# define v2l_norml v2l_norm

# define v3_normf v3_norm
# define v3_norml v3_norm
# define v3f_normf v3f_norm
# define v3f_norml v3f_norm
# define v3l_normf v3l_norm
# define v3l_norml v3l_norm

# define v4_normf v4_norm
# define v4_norml v4_norm
# define v4f_normf v4f_norm
# define v4f_norml v4f_norm
# define v4l_normf v4l_norm
# define v4l_norml v4l_norm

#endif
