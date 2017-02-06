# ifndef __echar__t__hpp
# define __echar__t__hpp

namespace mdl {
# ifdef SIGNED_CHAR
	typedef signed char echar_t;
# else
	typedef unsigned char echar_t;
# endif
}

# endif /*__echar__t__hpp*/
