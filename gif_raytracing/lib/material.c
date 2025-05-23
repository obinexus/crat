#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Material Material;
struct Material {
    float diffuse;
    float specular;
    float refractive;
};


Material *create_material(float diffuse, float specular, float refractive){
    Material *material = malloc(sizeof(Material));
    material->diffuse = diffuse;
    material->specular = specular;
    material->refractive = refractive;
    return material;
}

void destroy_material(Material *material){
    free(material);
}
