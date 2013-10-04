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

	GThread *t0 = GLIB_ASYNC_METHOD0("T0", Foo::m0, x);
	GThread *t1 = GLIB_ASYNC_METHOD1("T1", Foo::m1, x, "Stuff");
	GThread *t2 = GLIB_ASYNC_METHOD2("T2", Foo::m2, x, "Stuff", 42);

	return 0;
}
