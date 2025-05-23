#ifndef JSONP_H
#define JSONP_H

#include <string.h>
#include <stdio.h>
#include <stdbool.h>

enum json_type {
    JSON_STRING,
    JSON_NUMBER,
    JSON_OBJECT,
    JSON_ARRAY,
    JSON_TRUE,
    JSON_FALSE,
    JSON_NULL
};

typedef struct json_value json_value;
struct json_value
 {
    enum json_type type;
    union {
        char *string;
        double number;
         struct json_object *object;
         struct json_array *array;
    } data;
};

typedef struct json_object json_object;
struct json_object
 {
    char *key;
     json_value value;
     json_object *next;
};


typedef struct json_array json_array;
struct json_array
 {
     json_value value;
     json_array *next;
};

json_value *json_parse(const char *json);
json_value *json_parse_file(const char *filename);
json_value *json_stringify(const json_value *value);
void json_print(const json_value *value);

void json_free(json_value *value);



#endif // JSONP_H
