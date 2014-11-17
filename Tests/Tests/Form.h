//
// Created by Andrey on 13/11/14.
// Copyright (c) 2014 Andrey Gayvoronsky. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FXModelValidation.h"

@interface Form : NSObject <FXModelValidation>
@property (nonatomic, assign) BOOL valueBoolean;
@property (nonatomic, assign) NSInteger valueInteger;
@property (nonatomic, assign) CGFloat valueFloat;
@property (nonatomic, copy) NSString *valueString;
@property (nonatomic, copy) NSArray *valueArray;
@property (nonatomic, copy) NSDictionary *valueDictionary;
@property (nonatomic, copy) NSSet *valueSet;
@property (nonatomic, copy) NSNumber *valueNumber;

-(NSArray *)rules;
@end