

#ifndef ALGORITHM_ALGORITHM_H
#define ALGORITHM_ALGORITHM_H

#pragma pack(1)

typedef struct {
    double a;

    double b;
}ParamIn;


typedef struct {
    double result;
}ParamOut;

/**
 * 除法运算
 * @param in
 * @return
 */
void divide(ParamIn* in,ParamOut *out);

#pragma pack()
#endif //ALGORITHM_ALGORITHM_H
