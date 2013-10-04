#ifndef GLIB_THREAD_WRAPPER
#define GLIB_THREAD_WRAPPER

#include <functional>
#include <cassert>

inline void *cb_thread_wrapper( void *o )
{
	assert(nullptr != o);
	auto f = static_cast< std::function<void *()>* >(o);
	void *result = (*f)();
	delete f;
	return result; 
}

#define G_THREAD_NEW0(NAME, METHOD, INSTANCE) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE)))

#define G_THREAD_NEW1(NAME, METHOD, INSTANCE, ARG1) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1)))

#define G_THREAD_NEW2(NAME, METHOD, INSTANCE, ARG1, ARG2) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2)))

#define G_THREAD_NEW3(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3)))

#define G_THREAD_NEW4(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4)))

#define G_THREAD_NEW5(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5)))

#define G_THREAD_NEW6(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6)))

#define G_THREAD_NEW7(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7)))

#define G_THREAD_NEW8(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8)))

#define G_THREAD_NEW9(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9)))

#define G_THREAD_NEW10(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10)))

#define G_THREAD_NEW11(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11)))

#define G_THREAD_NEW12(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12)))

#define G_THREAD_NEW13(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13)))

#define G_THREAD_NEW14(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13, ARG14) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13, ARG14)))

#define G_THREAD_NEW15(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13, ARG14, ARG15) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13, ARG14, ARG15)))

#endif GLIB_THREAD_WRAPPER