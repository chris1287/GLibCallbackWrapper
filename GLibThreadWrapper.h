#ifndef GLIB_THREAD_WRAPPER
#define GLIB_THREAD_WRAPPER

#include <functional>

void *cb_thread_wrapper( void *o );

#define GLIB_ASYNC_METHOD0(NAME, METHOD, INSTANCE) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE)))

#define GLIB_ASYNC_METHOD1(NAME, METHOD, INSTANCE, ARG1) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1)))

#define GLIB_ASYNC_METHOD2(NAME, METHOD, INSTANCE, ARG1, ARG2) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2)))

#define GLIB_ASYNC_METHOD3(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3)))

#define GLIB_ASYNC_METHOD4(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4)))

#define GLIB_ASYNC_METHOD5(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5)))

#define GLIB_ASYNC_METHOD6(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6)))

#define GLIB_ASYNC_METHOD7(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7)))

#define GLIB_ASYNC_METHOD8(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8)))

#define GLIB_ASYNC_METHOD9(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9)))

#define GLIB_ASYNC_METHOD10(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10)))

#define GLIB_ASYNC_METHOD11(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11)))

#define GLIB_ASYNC_METHOD12(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12)))

#define GLIB_ASYNC_METHOD13(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13)))

#define GLIB_ASYNC_METHOD14(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13, ARG14) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13, ARG14)))

#define GLIB_ASYNC_METHOD15(NAME, METHOD, INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13, ARG14, ARG15) \
        g_thread_new(NAME, cb_thread_wrapper, new std::function<void *()>( std::bind(&METHOD, &INSTANCE, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10, ARG11, ARG12, ARG13, ARG14, ARG15)))

#endif GLIB_THREAD_WRAPPER