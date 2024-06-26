//
//  QNZoneInfo.h
//  QiniuSDK
//
//  Created by yangsen on 2020/4/16.
//  Copyright © 2020 Qiniu. All rights reserved.
//

#import "QNCache.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const QNZoneInfoSDKDefaultIOHost;
extern NSString *const QNZoneInfoEmptyRegionId;

@interface QNZoneInfo : NSObject

@property(nonatomic, assign, readonly)long ttl;
@property(nonatomic, assign, readonly)BOOL http3Enabled;
@property(nonatomic, strong, readonly)NSArray<NSString *> *domains;
@property(nonatomic, strong, readonly)NSArray<NSString *> *acc_domains;
@property(nonatomic, strong, readonly)NSArray<NSString *> *old_domains;

@property(nonatomic,   copy, readonly)NSString *regionId;
@property(nonatomic, strong, readonly)NSArray <NSString *> *allHosts;
@property(nonatomic, strong, readonly)NSDictionary *detailInfo;

+ (QNZoneInfo *)zoneInfoWithMainHosts:(NSArray <NSString *> *)mainHosts
                             regionId:(NSString * _Nullable)regionId;


+ (QNZoneInfo *)zoneInfoWithMainHosts:(NSArray <NSString *> *)mainHosts
                             oldHosts:(NSArray <NSString *> * _Nullable)oldHosts
                             regionId:(NSString * _Nullable)regionId;

+ (QNZoneInfo *)zoneInfoWithAccHosts:(NSArray <NSString *> *)accHosts
                             mainHosts:(NSArray <NSString *> *)mainHosts
                             oldHosts:(NSArray <NSString *> * _Nullable)oldHosts
                             regionId:(NSString * _Nullable)regionId;

/// 根据键值对构造对象 【内部使用】
/// @param detailInfo 键值对信息
+ (QNZoneInfo *)zoneInfoFromDictionary:(NSDictionary *)detailInfo;

- (BOOL)isValid;

@end

@interface QNZonesInfo : NSObject <QNCacheObject>

@property (nonatomic, strong, readonly) NSDate *buildDate;
@property (nonatomic, assign, readonly) BOOL isTemporary;
@property (nonatomic, assign, readonly) BOOL isValid;
@property (nonatomic, strong, readonly) NSArray<QNZoneInfo *> *zonesInfo;

/// 根据键值对构造对象 【内部使用】
/// @param dictionary 键值对信息
+ (instancetype)infoWithDictionary:(NSDictionary *)dictionary;

- (instancetype)initWithZonesInfo:(NSArray<QNZoneInfo *> *)zonesInfo;

// 转成临时 zones, 临时 Zones，不建议长期使用
- (void)toTemporary;

@end

NS_ASSUME_NONNULL_END
