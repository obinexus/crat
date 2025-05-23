#ifndef RAY_H
#define RAY_H

typedef struct {
    Vec3 origin;
    Vec3 direction;
} Ray;

Ray ray(Vec3 origin, Vec3 direction) {
    Ray r;
    r.origin = origin;
    r.direction = direction;
    return r;
}

Ray trace(Ray r, float t) {
    return ray(r.origin + r.direction * t, r.direction);
}



#endif
