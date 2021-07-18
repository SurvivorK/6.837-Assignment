#ifndef _IFS_H_
#define _IFS_H_

#include "matrix.h"
#include "image.h"
#include "vectors.h"
class IFS
{
private:
    int n;
    Matrix *matrix;
    float *prob;

public:
    IFS() : n(0), matrix(nullptr), prob(nullptr) {}
    ~IFS()
    {
        delete[] matrix;
        delete[] prob;
    }
    //读取IFS输入
    void input(const char *file);

    void render(Image &image, int num_points, int num_iters);
};

#endif