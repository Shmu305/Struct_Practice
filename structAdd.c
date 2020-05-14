#include <stdio.h>
#include <stdlib.h>

struct cplx {
  double real; /* real part */
  double imag; /* imaginary part */
};

struct cplx add(struct cplx* pa, struct cplx* pb); /* function prototype*/

int main(void){
  struct cplx z;
  struct cplx* px= malloc(sizeof(struct cplx));
  struct cplx* py= malloc(sizeof(struct cplx));

  px->real = 2.5;
  px->imag = 5.0;
  py->real = 3.2;
  py->imag = -1.7;

  z = add(px, py);
  printf("z = %4.2f + %4.2f j\n", z.real, z.imag);
  return 0;
 }

struct cplx add(struct cplx* pa, struct cplx* pb){
  struct cplx c = *pa; /* can initialise an auto struct variable */

  c.real += pb->real;
  c.imag += pb->imag;
  return c; /* can return a struct value */
}
