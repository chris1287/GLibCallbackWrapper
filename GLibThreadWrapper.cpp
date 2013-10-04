#include <cassert>
#include "GLibThreadWrapper.h"

void *cb_thread_wrapper( void *o )
{
	assert(nullptr != o);
	auto f = static_cast< std::function<void *()>* >(o);
	void *result = (*f)();
	delete f;
	return result; 
}