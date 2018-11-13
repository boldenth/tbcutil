#ifndef ___GUARD_VECTORS_H
#define ___GUARD_VECTORS_H

#include "global.h"

typedef struct vector3_ {
    double x;
    double y;
    double z;
} * vector3;// or Vec3? or Vec

typedef struct vector2_ {
    double x;
    double y;
} * vector2;// or Vec2? or Vec

typedef struct pos_ {
    //
    vector3 pos;
    vector3 velocity;
    vector3 acceleration;
    double yaw;
    double pitch;
    double roll;
} * position;

#endif // ___GUARD_VECTORS_H
