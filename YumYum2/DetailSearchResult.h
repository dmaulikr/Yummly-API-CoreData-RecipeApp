//
//  DetailSearchResult.h
//  YumYum2
//
//  Created by Maurice Mickens on 3/11/15.
//  Copyright (c) 2015 Loud Skies. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DetailSearchResult : NSObject

@property (nonatomic, copy) NSString *totalTime;
@property (nonatomic, copy) NSDictionary  *bigImages;
@property (nonatomic, copy) NSString *recipeName;
@property (nonatomic, copy) NSDictionary *sourceRecipe;
@property (nonatomic, copy) NSArray  *ingredientLines;
@property (nonatomic, copy) NSString *numberOfServings;
@property (nonatomic) NSNumber *totalTimeInSeconds;

@end