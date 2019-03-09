#include "algorithm.h"
#include <stdio.h>
#include <string.h>

void divide(ParamIn* in,ParamOut *out){
    double result = in->a/in->b;
    ParamOut paramOut;
    memset(&paramOut,0x00, sizeof(ParamOut));

    out->result = result;

    printf("the result is %3.8f",out->result);

}