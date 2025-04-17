#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define F (1 << 14)

int int_to_fp(int n);
int fp_to_int_zero(int x);
int fp_to_int_nearest(int x);

int add_fp(int x, int y);
int sub_fp(int x, int y);
int mul_fp(int x, int y);
int div_fp(int x, int y);

int add_mixed(int x, int n);
int sub_mixed(int x, int n);
int mul_mixed(int x, int n);
int div_mixed(int x, int n);

#endif 
