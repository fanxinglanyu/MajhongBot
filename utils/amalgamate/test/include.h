#ifndef ALL_H
#define ALL_H

// #include "foo.h"
#ifndef FOO_H
#define FOO_H

// #include "bar.h"
// #include <bar.h>
/* #include "bar.h" */
/* #include <bar.h> */

int foo();

#endif // FOO_H


// #include "bar.h"
#ifndef BAR_H
#define BAR_H

// #include "foo.h"

// #include "pragma_once.h"


int pragma_once();


int bar();

#endif // BAR_H


// #include "test.h"
#ifndef TEST_H
#define TEST_H

#undef NDEBUG
#include <assert.h>

#endif // TEST_H


// #include "pragma_once.h"

// #include "more/in_nested_dir.h"
#include <time.h>
// #include "local.h"
#ifndef LOCAL_H
#define LOCAL_H

int local();

#endif // LOCAL_H



int in_nested_dir = 0;


#endif // ALL_H

