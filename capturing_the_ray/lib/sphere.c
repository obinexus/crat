#include "sphere.h"

Sphere sphere(Vec3 center, float radius) {
    Sphere s;
    s.center = center;
    s.radius = radius;
    return s;
}

bool sphere_intersect(Sphere s, Ray r, float *t) {
    Vec3 oc = vec3_sub(r.origin, s.center);
    float a = vec3_dot(r.direction, r.direction);
    float b = 2.0 * vec3_dot(oc, r.direction);
    float c = vec3_dot(oc, oc) - s.radius * s.radius;
    float discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        return false;
    } else {
        *t = (-b - sqrt(discriminant)) / (2.0 * a);
        return true;
    }
}
