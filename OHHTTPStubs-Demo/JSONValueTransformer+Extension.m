//
//  JSONValueTransformer+Extension.m
//  OHHTTPStubs-Demo
//
//  Created by Brooks on 2018/3/22.
//  Copyright © 2018年 Brooks. All rights reserved.
//

#import "JSONValueTransformer+Extension.h"

@implementation JSONValueTransformer (Extension)

- (NSNumber *)NSNumberFromNSArray:(NSArray *)array {
    return @0;
}

- (NSNumber *)NSNumberFromNSDictionary:(NSDictionary *)dictionary {
    return @0;
}

- (NSString *)NSStringFromNSNull:(NSNull *)null {
    return nil;
}

- (NSString *)NSStringFromNSArray:(NSArray *)array {
    return nil;
}

- (NSString *)NSStringFromNSDictionary:(NSDictionary *)dictionary {
    return nil;
}

- (NSArray *)NSArrayFromNSNull:(NSNull *)null {
    return nil;
}

- (NSArray *)NSArrayFromNSString:(NSString *)string {
    if (!string || string.length == 0) {
        return nil;
    }

    return nil;
}

- (NSArray *)NSArrayFromNSNumber:(NSNumber *)number {
    return nil;
}

- (NSArray *)NSArrayFromNSDictionary:(NSDictionary *)dictionary {
    return nil;
}

- (NSDictionary *)NSDictionaryFromNSNull:(NSNull *)null {
    return nil;
}

- (NSDictionary *)NSDictionaryFromNSString:(NSString *)string {
    if (!string || string.length == 0) {
        return nil;
    }

    return nil;
}

- (NSDictionary *)NSDictionaryFromNSNumber:(NSNumber *)number {
    return nil;
}

- (NSDictionary *)NSDictionaryFromNSArray:(NSArray *)array {
    return nil;
}

- (NSURL *)NSURLFromNSNull:(NSNull *)null {
    return nil;
}

- (NSURL *)NSURLFromNSNumber:(NSNumber *)number {
    return nil;
}

- (NSURL *)NSURLFromNSString:(NSString *)string {
    return [NSURL URLWithString:[string stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]]];
}

- (NSURL *)NSURLFromNSArray:(NSArray *)array {
    return nil;
}

- (NSURL *)NSURLFromNSDictionary:(NSDictionary *)dictionary {
    return nil;
}
@end
