#ifndef SPHERE_H
#define SPHERE_H

typedef struct Sphere Sphere;
typedef struct {
    Vec3 center;
    double radius;
} Sphere;

bool sphere_intersect(Sphere s, Ray r, float *t);



#endif // SPHERE_H