#include <stdio.h>
#include <malloc.h>

#define DEBUG
#define MALLOC( count ) (int *)malloc( sizeof(int) * count )
#define MATRIX_MALLOC( ptr, p, r )  do{ \
    for ( jndex = 0; jndex < p; ++jndex ) { \
      ptr = MALLOC( r ); \
      ptr ++; \
    } \
  } while( 0 )

int *available,
    *max,
    *allocation,
    *need,
    *ptr;
int p, r;
int jndex;

void init() {\

#ifdef DEBUG
  r = 2,p = 5;
#else
  scanf( "%d %d", &r, &p );
#endif

  available = MALLOC( r );
  max = MALLOC( r );
  ptr = max;
  MATRIX_MALLOC( ptr, p, r );
  allocation = MALLOC( r );
  ptr = need;
  MATRIX_MALLOC( ptr, p, r );

#ifdef DEBUG
  
}

int main() {

}
