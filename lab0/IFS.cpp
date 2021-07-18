#pragma once
#include "IFS.h"
#include <stdio.h>

void IFS::render(Image &image, int num_points, int num_iters)
{
    int width = image.Width();
    int height = image.Height();
    for (int i = 0; i < num_points; ++i)
    {

        Vec2f v = Vec2f(rand() * 1.0f / RAND_MAX, rand() * 1.0f / RAND_MAX);
        for (int j = 0; j < num_iters; ++j)
        {
            int k = 0;
            float sum = 0;
            float t = rand() * 1.0f / RAND_MAX;
            for (; k < n; ++k)
            {
                sum += prob[k];
                if (sum > t)
                    break;
            }
            matrix[k].Transform(v);
        }
        if (v.x() >= 0 && v.x() <= 1 && v.y() >= 0 && v.y() <= 1)
        {
            image.SetPixel(v.x() * width, v.y() * height, Vec3f(0.0, 0.0, 0.0));
        }
    }
}