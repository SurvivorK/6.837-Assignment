//
// Created by Stellaris on 2021/7/18.
//

#include "Camera.h"

Ray OrthographicCamera::generateRay(Vec2f point) {
    Vec3f ro = center + (point.x() - 0.5) * horizontal * size + (point.y() - 0.5) * up * size;
    return Ray(ro, direction);
}

float OrthographicCamera::getTMin() const {
    return -INFINITY;
}

OrthographicCamera::OrthographicCamera(Vec3f _center, Vec3f _direction, Vec3f _up, float _size) {
    center = _center;
    direction = _direction;
    up = _up;
    size = _size;
    // The input direction might not be a unit vector and must be normalized.
    direction.Normalize();
    // The horizontal vector of the image plane, is deduced from the direction and the up vector (hint: remember vector algebra and cross products).
    Vec3f::Cross3(horizontal, direction, up);
    // The input up vector might not be a unit vector or perpendicular to the direction. It must be modified to be orthonormal to the direction.
    Vec3f::Cross3(up, horizontal, direction);
    horizontal.Normalize();
    up.Normalize();
}


