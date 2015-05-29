//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>
typedef struct {
    float centre[3];
    float radius;
} Sphere;

Sphere makeSphere(float *c, float r);

int main()
{
    float c[] = { 23, 45, 67};
    float r = 32;
    Sphere ball = makeSphere(c,r);
    
    printf("center %f %f %f radius %f\n", ball.centre[0], ball.centre[1], ball.centre[2], ball.radius);
    
    return 0;
}

Sphere makeSphere(float *c, float r) {
    Sphere sphere;
    sphere.centre[0] = 24;
    sphere.centre[1] = 32;
    sphere.centre[2] = 45;
    sphere.radius = 67;
    
    return sphere;
}
