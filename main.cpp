#include <iostream>
#include <string>
#include "glib.h"
#include "GLibThreadWrapper.h"

class Foo
{
public:
	void *m0 (){ std::cout << "NO ARG" << std::endl; return nullptr; }
	void *m1 (std::string s){ std::cout << "ARG1: " << s << std::endl; return nullptr; }
	void *m2 (std::string s, int x){ std::cout << "ARG1: " << s << "; ARG2: " << x << std::endl; return nullptr; }
};

int main()
{
	Foo x;

	GThread *t0 = G_THREAD_NEW0("T0", Foo::m0, x);
	GThread *t1 = G_THREAD_NEW1("T1", Foo::m1, x, "Stuff");
	GThread *t2 = G_THREAD_NEW2("T2", Foo::m2, x, "Stuff", 42);

	g_thread_join(t0);
	g_thread_join(t1);
	g_thread_join(t2);

	return 0;
}
