//
//  Macro.h
//
//  Created by Derick Liu on 7/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//


#ifndef HikingTravelers_Macro_h
#define HikingTravelers_Macro_h
#define IOS7 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0 ? YES : NO)
#ifdef DEBUG
#define PTLOG(fmt, ...) NSLog((@"%s [Line %d] => \n  " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#define PTPrintBaseLog	NSLog(@"%s(%d)", __FUNCTION__, __LINE__)
#else
#define PTLOG(...)  ;
#define PTPrintBaseLog	;
#endif
#endif

#define UIColorFromRGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 \
alpha:1.0]

#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

#define isSimulator (NSNotFound != [[[UIDevice currentDevice] model] rangeOfString:@"Simulator"].location)