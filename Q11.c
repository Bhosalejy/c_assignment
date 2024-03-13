// Ranges of data types:


#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
   printf("-----------------------------------------\n");
   printf("Data Type           FS   Size      Range \n");
   printf("-----------------------------------------\n");
   printf("  char              %%c   %d  %d   to %d \n",sizeof(char), SCHAR_MIN,SCHAR_MAX);
   printf(" unsigned char      %%c   %d  %d   to %d \n",sizeof(unsigned char), CHAR_MIN,UCHAR_MAX);
   printf(" short int          %%hd  %d  %hd  to %hd \n",sizeof(short int), SHRT_MIN, SHRT_MAX);
   printf(" unsigned short int %%hu  %d  %hu  to %hu \n",sizeof(unsigned short int), SHRT_MIN,USHRT_MAX);
   printf(" int                %%d   %d  %d   to %d \n",sizeof(int), INT_MIN,INT_MAX);
   printf(" unsigned int       %%u   %d  %u   to %u \n",sizeof(unsigned int), INT_MIN,UINT_MAX);
   printf(" long int           %%ld  %d  %ld  to %ld \n",sizeof(long int), LONG_MIN,LONG_MAX);
   printf(" unsigned long int  %%lu  %d  %lu  to %lu \n",sizeof(unsigned long int), LONG_MIN,ULONG_MAX);
   

   printf("-----------------------------------------\n");

// Q12:

   printf("  float             %%f   %d  %f   to %f \n",sizeof(float), FLT_MIN,FLT_MAX);
   printf("  float             %%g   %d  %g   to %g \n",sizeof(float), FLT_MIN,FLT_MAX);
   printf("  float             %%e   %d  %e   to %e \n",sizeof(float), FLT_MIN,FLT_MAX);
   printf("  float             %%E   %d  %E   to %E \n",sizeof(float), FLT_MIN,FLT_MAX);
   printf("  double            %%lf  %d  %lf   to %lf \n",sizeof(double), DBL_MIN,DBL_MAX);
   printf("  long double       %%ld  %d  %ld   to %ld \n",sizeof(long double), LDBL_MIN,LDBL_MAX);
return 0;
}
