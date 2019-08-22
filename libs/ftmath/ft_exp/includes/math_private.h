/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_private.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 21:33:16 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/22 17:09:38 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_PRIVATE_H
#define	MATH_PRIVATE_H

#include <float.h>
#include <inttypes.h>
#include <sys/types.h>
//#include <machine/endian.h>

#ifdef __arm__
# if defined(__VFP_FP__) || defined(__ARM_EABI__)
#  define	IEEE_WORD_ORDER	BYTE_ORDER
# else
#  define	IEEE_WORD_ORDER	BIG_ENDIAN
# endif
#else
# define	IEEE_WORD_ORDER	BYTE_ORDER
#endif

/*
#if IEEE_WORD_ORDER == BIG_ENDIAN

typedef union
{
  long double value;
  struct {
    u_int32_t mswhi;
    u_int32_t mswlo;
    u_int32_t lswhi;
    u_int32_t lswlo;
  } parts32;
  struct {
    u_int64_t msw;
    u_int64_t lsw;
  } parts64;
} ieee_quad_shape_type;

#endif

#if IEEE_WORD_ORDER == LITTLE_ENDIAN

typedef union
{
  long double value;
  struct {
    u_int32_t lswlo;
    u_int32_t lswhi;
    u_int32_t mswlo;
    u_int32_t mswhi;
  } parts32;
  struct {
    u_int64_t lsw;
    u_int64_t msw;
  } parts64;
} ieee_quad_shape_type;

#endif
*/
/*
#if IEEE_WORD_ORDER == BIG_ENDIAN

typedef union
{
  double value;
  struct
  {
    u_int32_t msw;
    u_int32_t lsw;
  } parts;
  struct
  {
    u_int64_t w;
  } xparts;
} ieee_double_shape_type;

#endif

#if IEEE_WORD_ORDER == LITTLE_ENDIAN

typedef union
{
  double value;
  struct
  {
    u_int32_t lsw;
    u_int32_t msw;
  } parts;
  struct
  {
    u_int64_t w;
  } xparts;
} ieee_double_shape_type;
#endif
*/
/*
#define EXTRACT_WORDS(ix0,ix1,d)				\
do {								\
  ieee_double_shape_type ew_u;					\
  ew_u.value = (d);						\
  (ix0) = ew_u.parts.msw;					\
  (ix1) = ew_u.parts.lsw;					\
} while (0)

#define EXTRACT_WORD64(ix,d)					\
do {								\
  ieee_double_shape_type ew_u;					\
  ew_u.value = (d);						\
  (ix) = ew_u.xparts.w;						\
} while (0)
*/
/*
#define GET_HIGH_WORD(i,d)					\
do {								\
  ieee_double_shape_type gh_u;					\
  gh_u.value = (d);						\
  (i) = gh_u.parts.msw;						\
} while (0)

#define GET_LOW_WORD(i,d)					\
do {								\
  ieee_double_shape_type gl_u;					\
  gl_u.value = (d);						\
  (i) = gl_u.parts.lsw;						\
} while (0)
*/
/*
#define INSERT_WORDS(d,ix0,ix1)					\
do {								\
  ieee_double_shape_type iw_u;					\
  iw_u.parts.msw = (ix0);					\
  iw_u.parts.lsw = (ix1);					\
  (d) = iw_u.value;						\
} while (0)

#define INSERT_WORD64(d,ix)					\
do {								\
  ieee_double_shape_type iw_u;					\
  iw_u.xparts.w = (ix);						\
  (d) = iw_u.value;						\
} while (0)
*/
/*
#define SET_HIGH_WORD(d,v)					\
do {								\
  ieee_double_shape_type sh_u;					\
  sh_u.value = (d);						\
  sh_u.parts.msw = (v);						\
  (d) = sh_u.value;						\
} while (0)

#define SET_LOW_WORD(d,v)					\
do {								\
  ieee_double_shape_type sl_u;					\
  sl_u.value = (d);						\
  sl_u.parts.lsw = (v);						\
  (d) = sl_u.value;						\
} while (0)
*/

typedef union
{
  float value;
  unsigned int word;
} ieee_float_shape_type;

/*
#define GET_FLOAT_WORD(i,d)					\
do {								\
  ieee_float_shape_type gf_u;					\
  gf_u.value = (d);						\
  (i) = gf_u.word;						\
} while (0)
*/
#define SET_FLOAT_WORD(d,i)					\
do {								\
  ieee_float_shape_type sf_u;					\
  sf_u.word = (i);						\
  (d) = sf_u.value;						\
} while (0)


#define	EXTRACT_LDBL80_WORDS(ix0,ix1,d)				\
do {								\
  union IEEEl2bits ew_u;					\
  ew_u.e = (d);							\
  (ix0) = ew_u.xbits.expsign;					\
  (ix1) = ew_u.xbits.man;					\
} while (0)

/*
#define	EXTRACT_LDBL128_WORDS(ix0,ix1,ix2,d)			\
do {								\
  union IEEEl2bits ew_u;					\
  ew_u.e = (d);							\
  (ix0) = ew_u.xbits.expsign;					\
  (ix1) = ew_u.xbits.manh;					\
  (ix2) = ew_u.xbits.manl;					\
} while (0)

#define	GET_LDBL_EXPSIGN(i,d)					\
do {								\
  union IEEEl2bits ge_u;					\
  ge_u.e = (d);							\
  (i) = ge_u.xbits.expsign;					\
} while (0)
*/

#define	INSERT_LDBL80_WORDS(d,ix0,ix1)				\
do {								\
  union IEEEl2bits iw_u;					\
  iw_u.xbits.expsign = (ix0);					\
  iw_u.xbits.man = (ix1);					\
  (d) = iw_u.e;							\
} while (0)

/*
#define	INSERT_LDBL128_WORDS(d,ix0,ix1,ix2)			\
do {								\
  union IEEEl2bits iw_u;					\
  iw_u.xbits.expsign = (ix0);					\
  iw_u.xbits.manh = (ix1);					\
  iw_u.xbits.manl = (ix2);					\
  (d) = iw_u.e;							\
} while (0)
*/

#define	SET_LDBL_EXPSIGN(d,v)					\
do {								\
  union IEEEl2bits se_u;					\
  se_u.e = (d);							\
  se_u.xbits.expsign = (v);					\
  (d) = se_u.e;							\
} while (0)


#ifdef __i386__
#define	LD80C(m, ex, v) {						\
	.xbits.man = __CONCAT(m, ULL),					\
	.xbits.expsign = (0x3fff + (ex)) | ((v) < 0 ? 0x8000 : 0),	\
}
#else
#define	LD80C(m, ex, v)	{ .e = (v), }
#endif


/*
#ifdef FLT_EVAL_METHOD
#if FLT_EVAL_METHOD == 0 || __GNUC__ == 0
#define	STRICT_ASSIGN(type, lval, rval)	((lval) = (rval))
#else
#define	STRICT_ASSIGN(type, lval, rval) do {	\
	volatile type __lval;			\
						\
	if (sizeof(type) >= sizeof(long double))	\
		(lval) = (rval);		\
	else {					\
		__lval = (rval);		\
		(lval) = __lval;		\
	}					\
} while (0)
#endif
#endif
*/

#if defined(__i386__) && !defined(NO_FPSETPREC)

#define	ENTERI() ENTERIT(long double)

#define	ENTERIT(returntype)			\
	returntype __retval;			\
	fp_prec_t __oprec;			\
						\
	if ((__oprec = fpgetprec()) != FP_PE)	\
		fpsetprec(FP_PE)

#define	RETURNI(x) do {				\
	__retval = (x);				\
	if (__oprec != FP_PE)			\
		fpsetprec(__oprec);		\
	RETURNF(__retval);			\
} while (0)

/*
#define	ENTERV()				\
	fp_prec_t __oprec;			\
						\
	if ((__oprec = fpgetprec()) != FP_PE)	\
		fpsetprec(FP_PE)

#define	RETURNV() do {				\
	if (__oprec != FP_PE)			\
		fpsetprec(__oprec);		\
	return;			\
} while (0)
*/
#else

#define	ENTERI()
#define	ENTERIT(x)
#define	RETURNI(x)	return (x)
//#define	ENTERV()
//#define	RETURNV()	return

#endif

#define      RETURNF(v)      return (v)

/*
#define	_2sum(a, b) do {	\
	__typeof(a) __s, __w;	\
				\
	__w = (a) + (b);	\
	__s = __w - (a);	\
	(b) = ((a) - (__w - __s)) + ((b) - __s); \
	(a) = __w;		\
} while (0)
*/

#define	_2sumF(a, b) do {	\
	__typeof(a) __w;	\
				\
	__w = (a) + (b);	\
	(b) = ((a) - __w) + (b); \
	(a) = __w;		\
} while (0)

#define	_3sumF(a, b, c) do {	\
	__typeof(a) __tmp;	\
				\
	__tmp = (c);		\
	_2sumF(__tmp, (a));	\
	(b) += (a);		\
	(a) = __tmp;		\
} while (0)

/*
void _scan_nan(uint32_t *__words, int __num_words, const char *__s);

#define	nan_mix(x, y)		(nan_mix_op((x), (y), +))
#define	nan_mix_op(x, y, op)	(((x) + 0.0L) op ((y) + 0))
*/

/*
#ifdef _COMPLEX_H

typedef union {
	float complex f;
	float a[2];
} float_complex;
typedef union {
	double complex f;
	double a[2];
} double_complex;
typedef union {
	long double complex f;
	long double a[2];
} long_double_complex;
#define	REALPART(z)	((z).a[0])
#define	IMAGPART(z)	((z).a[1])

#ifndef CMPLXF
static __inline float complex
CMPLXF(float x, float y)
{
	float_complex z;

	REALPART(z) = x;
	IMAGPART(z) = y;
	return (z.f);
}
#endif

#ifndef CMPLX
static __inline double complex
CMPLX(double x, double y)
{
	double_complex z;

	REALPART(z) = x;
	IMAGPART(z) = y;
	return (z.f);
}
#endif

#ifndef CMPLXL
static __inline long double complex
CMPLXL(long double x, long double y)
{
	long_double_complex z;

	REALPART(z) = x;
	IMAGPART(z) = y;
	return (z.f);
}
#endif


#endif
*/

/*
static inline double	rnint(double_t x)
{
	return ((double)(x + 0x1.8p52) - 0x1.8p52);
}

static inline float		rnintf(float_t x)
{
	return ((float)(x + 0x1.8p23F) - 0x1.8p23F);
}
*/


#ifdef LDBL_MANT_DIG
static inline long double	rnintl(long double x)
{
	return (x + __CONCAT(0x1.8p, 64) / 2 - __CONCAT(0x1.8p, 64) / 2);
}
#endif



#if (defined(amd64) || defined(__i386__)) && defined(__GNUCLIKE_ASM)
#define	irint(x)						\
    (sizeof(x) == sizeof(float) &&				\
    sizeof(__float_t) == sizeof(long double) ? irintf(x) :	\
    sizeof(x) == sizeof(double) &&				\
    sizeof(__double_t) == sizeof(long double) ? irintd(x) :	\
    sizeof(x) == sizeof(long double) ? irintl(x) : (int)(x))
#else
#define	irint(x)	((int)(x))
#endif
/*
#define	i64rint(x)	((int64_t)(x))
*/

/*
#if defined(__i386__) && defined(__GNUCLIKE_ASM)
static __inline int	irintf(float x)
{
	int n;

	__asm("fistl %0" : "=m" (n) : "t" (x));
	return (n);
}

static __inline int	irintd(double x)
{
	int n;

	__asm("fistl %0" : "=m" (n) : "t" (x));
	return (n);
}
#endif
*/

/*
#if (defined(__amd64__) || defined(__i386__)) && defined(__GNUCLIKE_ASM)
static __inline int	irintl(long double x)
{
	int n;

	__asm("fistl %0" : "=m" (n) : "t" (x));
	return (n);
}
#endif
*/

/*
#ifdef DOPRINT
#include <stdio.h>

#ifndef DOPRINT_SWIZZLE
#define	DOPRINT_SWIZZLE		0
#endif

#ifdef DOPRINT_LD80

#define	DOPRINT_START(xp) do {						\
	uint64_t __lx;							\
	uint16_t __hx;							\
									\			\
	EXTRACT_LDBL80_WORDS(__hx, __lx, *xp);				\
	__lx ^= DOPRINT_SWIZZLE;					\
	INSERT_LDBL80_WORDS(*xp, __hx, __lx);				\
	printf("x = %.21Lg; ", (long double)*xp);			\
} while (0)
#define	DOPRINT_END1(v)							\
	printf("y = %.21Lg; z = 0; show(x, y, z);\n", (long double)(v))
#define	DOPRINT_END2(hi, lo)						\
	printf("y = %.21Lg; z = %.21Lg; show(x, y, z);\n",		\
	    (long double)(hi), (long double)(lo))

#elif defined(DOPRINT_D64)

#define	DOPRINT_START(xp) do {						\
	uint32_t __hx, __lx;						\
									\
	EXTRACT_WORDS(__hx, __lx, *xp);					\
	__lx ^= DOPRINT_SWIZZLE;					\
	INSERT_WORDS(*xp, __hx, __lx);					\
	printf("x = %.21Lg; ", (long double)*xp);			\
} while (0)
#define	DOPRINT_END1(v)							\
	printf("y = %.21Lg; z = 0; show(x, y, z);\n", (long double)(v))
#define	DOPRINT_END2(hi, lo)						\
	printf("y = %.21Lg; z = %.21Lg; show(x, y, z);\n",		\
	    (long double)(hi), (long double)(lo))

#elif defined(DOPRINT_F32)

#define	DOPRINT_START(xp) do {						\
	uint32_t __hx;							\
									\
	GET_FLOAT_WORD(__hx, *xp);					\
	__hx ^= DOPRINT_SWIZZLE;					\
	SET_FLOAT_WORD(*xp, __hx);					\
	printf("x = %.21Lg; ", (long double)*xp);			\
} while (0)
#define	DOPRINT_END1(v)							\
	printf("y = %.21Lg; z = 0; show(x, y, z);\n", (long double)(v))
#define	DOPRINT_END2(hi, lo)						\
	printf("y = %.21Lg; z = %.21Lg; show(x, y, z);\n",		\
	    (long double)(hi), (long double)(lo))

#else

#ifndef DOPRINT_SWIZZLE_HIGH
#define	DOPRINT_SWIZZLE_HIGH	0
#endif

#define	DOPRINT_START(xp) do {						\
	uint64_t __lx, __llx;						\
	uint16_t __hx;							\
									\
	EXTRACT_LDBL128_WORDS(__hx, __lx, __llx, *xp);			\
	__llx ^= DOPRINT_SWIZZLE;					\
	__lx ^= DOPRINT_SWIZZLE_HIGH;					\
	INSERT_LDBL128_WORDS(*xp, __hx, __lx, __llx);			\
	printf("x = %.36Lg; ", (long double)*xp);					\
} while (0)
#define	DOPRINT_END1(v)							\
	printf("y = %.36Lg; z = 0; show(x, y, z);\n", (long double)(v))
#define	DOPRINT_END2(hi, lo)						\
	printf("y = %.36Lg; z = %.36Lg; show(x, y, z);\n",		\
	    (long double)(hi), (long double)(lo))

#endif

#else
#define	DOPRINT_START(xp)
#define	DOPRINT_END1(v)
#define	DOPRINT_END2(hi, lo)
#endif
*/

#define	DOPRINT_START(xp)
#define	DOPRINT_END1(v)
#define	DOPRINT_END2(hi, lo)

#define	RETURNP(x) do {			\
	DOPRINT_END1(x);		\
	RETURNF(x);			\
} while (0)


#define	RETURNPI(x) do {		\
	DOPRINT_END1(x);		\
	RETURNI(x);			\
} while (0)



#define	RETURN2P(x, y) do {		\
	DOPRINT_END2((x), (y));		\
	RETURNF((x) + (y));		\
} while (0)


#define	RETURN2PI(x, y) do {		\
	DOPRINT_END2((x), (y));		\
	RETURNI((x) + (y));		\
} while (0)

/*
#ifdef STRUCT_RETURN
#define	RETURNSP(rp) do {		\
	if (!(rp)->lo_set)		\
		RETURNP((rp)->hi);	\
	RETURN2P((rp)->hi, (rp)->lo);	\
} while (0)
#define	RETURNSPI(rp) do {		\
	if (!(rp)->lo_set)		\
		RETURNPI((rp)->hi);	\
	RETURN2PI((rp)->hi, (rp)->lo);	\
} while (0)
#endif
*/

#define	SUM2P(x, y) ({			\
	const __typeof (x) __x = (x);	\
	const __typeof (y) __y = (y);	\
					\
	DOPRINT_END2(__x, __y);		\
	__x + __y;			\
})


/*
#define	__ieee754_sqrt	sqrt
#define	__ieee754_acos	acos
#define	__ieee754_acosh	acosh
#define	__ieee754_log	log
#define	__ieee754_log2	log2
#define	__ieee754_atanh	atanh
#define	__ieee754_asin	asin
#define	__ieee754_atan2	atan2
#define	__ieee754_exp	exp
#define	__ieee754_cosh	cosh
#define	__ieee754_fmod	fmod
#define	__ieee754_pow	pow
#define	__ieee754_lgamma lgamma
#define	__ieee754_gamma	gamma
#define	__ieee754_lgamma_r lgamma_r
#define	__ieee754_gamma_r gamma_r
#define	__ieee754_log10	log10
#define	__ieee754_sinh	sinh
#define	__ieee754_hypot	hypot
#define	__ieee754_j0	j0
#define	__ieee754_j1	j1
#define	__ieee754_y0	y0
#define	__ieee754_y1	y1
#define	__ieee754_jn	jn
#define	__ieee754_yn	yn
#define	__ieee754_remainder remainder
#define	__ieee754_scalb	scalb
#define	__ieee754_sqrtf	sqrtf
#define	__ieee754_acosf	acosf
#define	__ieee754_acoshf acoshf
#define	__ieee754_logf	logf
#define	__ieee754_atanhf atanhf
#define	__ieee754_asinf	asinf
#define	__ieee754_atan2f atan2f
#define	__ieee754_expf	expf
#define	__ieee754_coshf	coshf
#define	__ieee754_fmodf	fmodf
#define	__ieee754_powf	powf
#define	__ieee754_lgammaf lgammaf
#define	__ieee754_gammaf gammaf
#define	__ieee754_lgammaf_r lgammaf_r
#define	__ieee754_gammaf_r gammaf_r
#define	__ieee754_log10f log10f
#define	__ieee754_log2f log2f
#define	__ieee754_sinhf	sinhf
#define	__ieee754_hypotf hypotf
#define	__ieee754_j0f	j0f
#define	__ieee754_j1f	j1f
#define	__ieee754_y0f	y0f
#define	__ieee754_y1f	y1f
#define	__ieee754_jnf	jnf
#define	__ieee754_ynf	ynf
#define	__ieee754_remainderf remainderf
#define	__ieee754_scalbf scalbf
*/

/*
int	__kernel_rem_pio2(double*,double*,int,int,int);

#ifndef INLINE_REM_PIO2
int	__ieee754_rem_pio2(double,double*);
#endif

double	__kernel_sin(double,double,int);
double	__kernel_cos(double,double);
double	__kernel_tan(double,double,int);
double	__ldexp_exp(double,int);

#ifdef _COMPLEX_H
double complex __ldexp_cexp(double complex,int);
#endif

#ifndef INLINE_REM_PIO2F
int	__ieee754_rem_pio2f(float,double*);
#endif

#ifndef INLINE_KERNEL_SINDF
float	__kernel_sindf(double);
#endif

#ifndef INLINE_KERNEL_COSDF
float	__kernel_cosdf(double);
#endif

#ifndef INLINE_KERNEL_TANDF
float	__kernel_tandf(double,int);
#endif

float	__ldexp_expf(float,int);

#ifdef _COMPLEX_H
float complex __ldexp_cexpf(float complex,int);
#endif

long double __kernel_sinl(long double, long double, int);
long double __kernel_cosl(long double, long double);
long double __kernel_tanl(long double, long double, int);
*/

#endif
