//
//  JSONValueTransformer+Extension.h
//
//  JSONValueTransformer 扩展, 提升兼容性
//
//  Created by Brooks on 2018/3/22.
//  Copyright © 2018年 Brooks. All rights reserved.
//


#import <JSONModel/JSONValueTransformer.h>


@interface JSONValueTransformer (Extension)

/**
 * 兼容 JSON 定义为 NSNumber, 传入 NSArray, 返回 @0
 */
- (NSNumber *)NSNumberFromNSArray:(NSArray *)array;

/**
 * 兼容 JSON 定义为 NSNumber, 传入 NSDictionary, 返回 @0
 */
- (NSNumber *)NSNumberFromNSDictionary:(NSDictionary *)dictionary;

/**
 * 兼容 JSON 定义为 NSString, 传入 NSNull, 返回 nil
 */
- (NSString *)NSStringFromNSNull:(NSNull *)null;

/**
 * 兼容 JSON 定义为 NSString, 传入 NSArray, 返回 nil
 */
- (NSString *)NSStringFromNSArray:(NSArray *)array;

/**
 * 兼容 JSON 定义为 NSString, 传入 NSDictionary, 返回 nil
 */
- (NSString *)NSStringFromNSDictionary:(NSDictionary *)dictionary;

/**
 * 兼容 JSON 定义为 NSArray, 传入 NSNull, 返回 nil
 */
- (NSArray *)NSArrayFromNSNull:(NSNull *)null;

/**
 * 兼容 JSON 定义为 NSArray, 传入空字符串, 返回 nil
 */
- (NSArray *)NSArrayFromNSString:(NSString *)string;

/**
 * 兼容 JSON 定义为 NSArray, 传入 NSNumber, 返回 nil
 */
- (NSArray *)NSArrayFromNSNumber:(NSNumber *)number;

/**
 * 兼容 JSON 定义为 NSArray, 传入 NSDictionary, 返回 nil
 */
- (NSArray *)NSArrayFromNSDictionary:(NSDictionary *)dictionary;

/**
 * 兼容 JSON 定义为 NSDictionary, 传入 NSNull, 返回 nil
 */
- (NSDictionary *)NSDictionaryFromNSNull:(NSNull *)null;

/**
 * 兼容 JSON 定义为 NSDictionary, 传入空字符串, 返回 nil
 */
- (NSDictionary *)NSDictionaryFromNSString:(NSString *)string;

/**
 * 兼容 JSON 定义为 NSDictionary, 传入 NSNumber, 返回 nil
 */
- (NSDictionary *)NSDictionaryFromNSNumber:(NSNumber *)number;

/**
 * 兼容 JSON 定义为 NSDictionary, 传入 NSArray, 返回 nil
 */
- (NSDictionary *)NSDictionaryFromNSArray:(NSArray *)array;

/**
 * 兼容 JSON 定义为 NSURL, 传入 NSNull, 返回 nil
 */
- (NSURL *)NSURLFromNSNull:(NSNull *)null;

/**
 * 兼容 JSON 定义为 NSURL, 传入 NSNumber, 返回 nil
 */
- (NSURL *)NSURLFromNSNumber:(NSNumber *)number;

/**
 * 兼容 JSON 定义为 NSURL, 传入 NSString, 返回 Encoded 之后的 NSURL
 */
- (NSURL *)NSURLFromNSString:(NSString *)string;

/**
 * 兼容 JSON 定义为 NSURL, 传入 NSArray, 返回 nil
 */
- (NSURL *)NSURLFromNSArray:(NSArray *)array;

/**
 * 兼容 JSON 定义为 NSURL, 传入 NSDictionary, 返回 nil
 */
- (NSURL *)NSURLFromNSDictionary:(NSDictionary *)dictionary;

@end
