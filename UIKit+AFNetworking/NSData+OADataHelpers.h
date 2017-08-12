//
//  NSData+OADataHelpers.h
//  FamilyHealth
//
//  Created by Mac_lyf on 2017/7/20.
//  Copyright © 2017年 吴冰. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (OADataHelpers)
- (NSData*) dataByHealingUTF8Stream;
- (NSString*) UTF8String;
@end
