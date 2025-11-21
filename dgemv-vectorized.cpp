const char* dgemv_desc = "Vectorized implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */

 // add __restrict__ if needed for compiler, but the makefile seems to have everything flagged already

 //01 for basic and 03 for aggressive vectorization here.
void my_dgemv(int n, double* A, double* x, double* y) {
   // insert your code here: implementation of vectorized vector-matrix multiply
   for (int i = 0; i < n; i++) {
      double sum = 0.0;
      for (int j = 0; j < n; j++) {
         sum += A[i * n + j] * x[j];
      }
      y[i] += sum;
      
   }
}
