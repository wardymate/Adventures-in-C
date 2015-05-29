//
//  Sphere.h
//  MyFirstObjectiveCProgram
//
//  Created by Christopher Ward on 29/05/2015.
//  Copyright (c) 2015 treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Sphere : NSObject {

    NSArray * _center;
    float _radius;
    
}

-(void)setRadius:(float)radius;
-(float)radius;

-(void)setCenter:(NSArray *)center;
-(NSArray *)center;

@end
