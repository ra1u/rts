#ifndef RTS_UNARY_MATH
#define RTS_UNARY_MATH(fun)
#endif

#ifndef RTS_BINARY_MATH
#define RTS_BINARY_MATH(fun)
#endif 

#ifndef RTS_TERNARY_MATH
#define RTS_TERNARY_MATH(fun)
#endif 

// <cmath>

RTS_UNARY_MATH(sin)
RTS_UNARY_MATH(cos)
RTS_UNARY_MATH(tan)
RTS_UNARY_MATH(asin)
RTS_UNARY_MATH(acos)
RTS_UNARY_MATH(atan)
RTS_UNARY_MATH(sinh)
RTS_UNARY_MATH(cosh)
RTS_UNARY_MATH(tanh)
RTS_UNARY_MATH(asinh)
RTS_UNARY_MATH(acosh)
RTS_UNARY_MATH(atanh)
RTS_UNARY_MATH(abs)
RTS_UNARY_MATH(exp)
RTS_UNARY_MATH(expm1)
RTS_UNARY_MATH(exp2)
RTS_UNARY_MATH(log)
RTS_UNARY_MATH(log2)
RTS_UNARY_MATH(log10)
RTS_UNARY_MATH(log1p)
RTS_UNARY_MATH(sqrt)
RTS_UNARY_MATH(cbrt)
RTS_UNARY_MATH(erf)
RTS_UNARY_MATH(erfc)
RTS_UNARY_MATH(tgamma)
RTS_UNARY_MATH(lgamma)
RTS_BINARY_MATH(pow)
RTS_BINARY_MATH(hypot)
RTS_BINARY_MATH(atan2)
RTS_BINARY_MATH(fdim)
RTS_BINARY_MATH(fmin)
RTS_BINARY_MATH(fmax)
RTS_BINARY_MATH(fmod)
RTS_BINARY_MATH(remainder)
RTS_TERNARY_MATH(fma)

// <complex>

RTS_UNARY_MATH(real)
RTS_UNARY_MATH(imag)
RTS_UNARY_MATH(arg)
RTS_UNARY_MATH(norm)
RTS_UNARY_MATH(conj)
RTS_UNARY_MATH(proj)
RTS_UNARY_MATH(polar)
RTS_BINARY_MATH(polar)

#undef RTS_UNARY_MATH
#undef RTS_BINARY_MATH
#undef RTS_TERNARY_MATH