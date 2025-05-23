#ifndef VECTOR_H
#define VECTOR_H

// Vector math library

//forward declarations
typedef struct Vec2 Vec2; // forward declaration
typedef struct Vec3 Vec3; // forward declaration

 struct Vec2 {
    double x;
    double y;
};

Vec2 vec2(double x, double y);
double vec2_dot(Vec2 a, Vec2 b);
double vec2_cross(Vec2 a, Vec2 b);
Vec2 vec2_add(Vec2 a, Vec2 b);
Vec2 vec2_sub(Vec2 a, Vec2 b);
Vec2 vec2_mul(Vec2 a, double b);
Vec2 vec2_div(Vec2 a, double b);
Vec2 vec2_neg(Vec2 a);
Vec2 vec2_reflect(Vec2 a, Vec2 b);
Vec2 vec2_norm(Vec2 a);
Vec2 vec2_rotatex(Vec2 a, double angle);
Vec2 vec2_rotatey(Vec2 a, double angle);
Vec2 vec2_project(Vec2 *a, Vec3 b);

double vec2_len(Vec2 a);
double vec2_mag(Vec2 a);

double vec2_dist(Vec2 a, Vec2 b);

struct Vec3 { 
    double x;
    double y;
    double z;
};

Vec3 vec3(double x, double y, double z);
double vec3_dot(Vec3 a, Vec3 b);
Vec3 vec3_cross(Vec3 a, Vec3 b);
Vec3 vec3_add(Vec3 a, Vec3 b);
Vec3 vec3_sub(Vec3 a, Vec3 b);
Vec3 vec3_mul(Vec3 a, double b);
Vec3 vec3_div(Vec3 a, double b);
Vec3 vec3_neg(Vec3 a);
double vec3_len(Vec3 a);
double vec3_mag(Vec3 a);
Vec3 vec3_norm(Vec3 a);
double vec3_dist(Vec3 a, Vec3 b);
void vec3_prdouble(Vec3 a);


#endif // VECTOR_H
