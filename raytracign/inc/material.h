#ifndef MATERIAL_H
#define MATERIAL_H

#include "ray.h"

typedef struct Material Material;
struct Material {
    int diffuse;
    int specular;
    int refractive;
}

Material *create_material(int diffuse, int specular, int refractive);
void destroy_material(Material *material); 

#endif // MATERIAL_H
