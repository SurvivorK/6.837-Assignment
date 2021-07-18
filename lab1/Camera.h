//
// Created by Stellaris on 2021/7/18.
//

#ifndef LAB1_CAMERA_H
#define LAB1_CAMERA_H

#include "ray.h"

class Camera {
public:
    Camera() = default;
    virtual ~Camera() = default;
    virtual Ray generateRay(Vec2f point) = 0;
    virtual float getTMin() const = 0;
};

class OrthographicCamera : public Camera{
public:
    OrthographicCamera(Vec3f _center, Vec3f _direction, Vec3f _up, float _size);
    ~OrthographicCamera() override = default;

    Ray generateRay(Vec2f point) override;

    float getTMin() const override;

private:
    // orthonormal basis
    Vec3f center;
    Vec3f up, horizontal, direction;

    float size;

};


#endif //LAB1_CAMERA_H
