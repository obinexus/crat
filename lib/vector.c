#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

#include "vector.h"

// Vec2 Constructors
//  and Prototypes
Vec2 vec2(double x, double y){
    Vec2 v = {x, y};
    return v;
}

static Vec2 Ix2 = {.x = 1, .y = 0};
static Vec2 Jx2 = {.x = 0, .y = 1};

Vec2 vec2_add(Vec2 a, Vec2 b){
    return vec2(a.x + b.x, a.y + b.y);
}

Vec2 vec2_sub(Vec2 a, Vec2 b){
    return vec2(a.x - b.x, a.y - b.y);
}

Vec2 vec2_mul(Vec2 a, double b){
    return vec2(a.x * b, a.y * b);
}

Vec2 vec2_div(Vec2 a, double b){
    return vec2(a.x / b, a.y / b);
}

double vec2_dot(Vec2 a, Vec2 b){
    return a.x * b.x + a.y * b.y;
}

double vec2_cross(Vec2 a, Vec2 b){
    return a.x * b.y - a.y * b.x;
}

double vec2_len(Vec2 a){
    return sqrt(a.x * a.x + a.y * a.y);
}

Vec2 vec2_rotate(Vec2 a, double angle){
    double c = cos(angle);
    double s = sin(angle);
    return vec2(a.x * c - a.y * s, a.x * s + a.y * c);
}

Vec2 vec2_reflect(Vec2 a, Vec2 n){
    return vec2_sub(a, vec2_mul(n, 2 * vec2_dot(a, n)));
}

Vec2 vec2_norm(Vec2 a) {
    return vec2_div(a, vec2_len(a));
}
Vec2 vec2_rotatex(Vec2 a, double angle){
    double s= M_PI / 180 * angle;
    double c= cos(s);
    return vec2(a.x * c - a.y * s, a.x * s + a.y * c);
}

Vec2 vec2_rotatey(Vec2 a, double angle){
    double s= M_PI / 180 * angle;
    double c= cos(s);
    return vec2(a.x * c - a.y * s, a.x * s + a.y * c);
}


double vec2_dist(Vec2 a, Vec2 b){
    return vec2_len(vec2_sub(a, b));
}
void vec2_print(Vec2 a){
    printf("(%f, %f)", a.x, a.y);
}

Vec2 vec2_project(Vec2 *a, Vec3 b){
    return vec2(a->x * b.x, a->y * b.y);
}


Vec3 vec3(double x, double y, double z){
    Vec3 v = {x, y, z};
    return v;
}

Vec3 vec3_norm(Vec3 a){
    return vec3_div(a, vec3_len(a));
}

static Vec3 _Ix3  = {.x=1, .y=0, .z=0};
static Vec3 _Jy3 = {.x=0, .y=1, .z=0};
static Vec3 _Kz3 = {.x=0, .y=0, .z=1};


Vec3 vec3_add(Vec3 a, Vec3 b){
    return vec3(a.x + b.x, a.y + b.y, a.z + b.z);
}

Vec3 vec3_sub(Vec3 a, Vec3 b){
    return vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

Vec3 vec3_mul(Vec3 a, double b){
    return vec3(a.x * b, a.y * b, a.z * b);
}

Vec3 vec3_div(Vec3 a, double b){
    return vec3(a.x / b, a.y / b, a.z / b);
}

Vec3 vec3_cross(Vec3 a, Vec3 b){
    return vec3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}

double vec3_dot(Vec3 a, Vec3 b){
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

double vec3_len(Vec3 a){
    return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

void vec3_print(Vec3 a){
    printf("(%f, %f, %f)", a.x, a.y, a.z);
}

