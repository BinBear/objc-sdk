//
//  QNFixZone.m
//  QiniuSDK
//
//  Created by yangsen on 2020/4/16.
//  Copyright © 2020 Qiniu. All rights reserved.
//

#import "QNFixedZone.h"
#import "QNZoneInfo.h"

@interface QNFixedZone ()

@property (nonatomic, strong) QNZonesInfo *zonesInfo;

@end

@implementation QNFixedZone

+ (instancetype)zone0 {
    static QNFixedZone *z0 = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        z0 = [[QNFixedZone alloc] initWithUpDomainList:@[@"upload.qiniup.com", @"up.qiniup.com"]
                                             oldUpList:@[@"upload.qbox.me", @"up.qbox.me"]
                                            ioHostList:@[@"iovip.qbox.me"]];
    });
    return z0;
}

+ (instancetype)zone1 {
    static QNFixedZone *z1 = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        z1 = [[QNFixedZone alloc] initWithUpDomainList:@[@"upload-z1.qiniup.com", @"up-z1.qiniup.com"]
                                             oldUpList:@[@"upload-z1.qbox.me", @"up-z1.qbox.me"]
                                            ioHostList:@[@"iovip-z1.qbox.me"]];
    });
    return z1;
}

+ (instancetype)zone2 {
    static QNFixedZone *z2 = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        z2 = [[QNFixedZone alloc] initWithUpDomainList:@[@"upload-z2.qiniup.com", @"up-z2.qiniup.com"]
                                             oldUpList:@[@"upload-z2.qbox.me", @"up-z2.qbox.me"]
                                            ioHostList:@[@"iovip-z2.qbox.me"]];
    });
    return z2;
}

+ (instancetype)zoneNa0 {
    static QNFixedZone *zNa0 = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        zNa0 = [[QNFixedZone alloc] initWithUpDomainList:@[@"upload-na0.qiniup.com", @"up-na0.qiniup.com"]
                                               oldUpList:@[@"upload-na0.qbox.me", @"up-na0.qbox.me"]
                                              ioHostList:@[@"iovip-na0.qbox.me"]];
    });
    return zNa0;
}

+ (instancetype)zoneAs0 {
    static QNFixedZone *zAs0 = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        zAs0 = [[QNFixedZone alloc] initWithUpDomainList:@[@"upload-as0.qiniup.com", @"up-as0.qiniup.com"]
                                               oldUpList:@[@"upload-as0.qbox.me", @"up-as0.qbox.me"]
                                              ioHostList:@[@"iovip-as0.qbox.me"]];;
    });
    return zAs0;
}

+ (QNFixedZone *)localsZoneInfo{

    NSArray *zones = @[[QNFixedZone zone0],
                       [QNFixedZone zone1],
                       [QNFixedZone zone2],
                       [QNFixedZone zoneNa0],
                       [QNFixedZone zoneAs0]];
    
    NSMutableArray <QNZoneInfo *> *zoneInfoArray = [NSMutableArray array];
    for (QNFixedZone *zone in zones) {
        if (zone.zonesInfo.zonesInfo) {
            [zoneInfoArray addObjectsFromArray:zone.zonesInfo.zonesInfo];
        }
    }
    
    QNFixedZone *fixedZone = [[QNFixedZone alloc] init];
    fixedZone.zonesInfo = [[QNZonesInfo alloc] initWithZonesInfo:[zoneInfoArray copy]];
    return fixedZone;
}

+ (instancetype)createWithHost:(NSArray<NSString *> *)upList {
    return [[QNFixedZone alloc] initWithUpDomainList:upList oldUpList:nil ioHostList:nil];
}

- (QNZonesInfo *)createZonesInfo:(NSArray <NSString *> *)upDomains
                         ioHosts:(NSArray <NSString *> *)ioHosts {
    return [self createZonesInfo:upDomains oldUpDomains:nil ioHosts:ioHosts];
}

- (QNZonesInfo *)createZonesInfo:(NSArray <NSString *> *)upDomains
                    oldUpDomains:(NSArray <NSString *> *)oldUpDomains
                         ioHosts:(NSArray <NSString *> *)ioHosts {
    if (!upDomains && upDomains.count == 0) {
        return nil;
    }

    QNZoneInfo *zoneInfo = [QNZoneInfo zoneInfoWithMainHosts:upDomains oldHosts:oldUpDomains ioHosts:ioHosts];
    QNZonesInfo *zonesInfo = [[QNZonesInfo alloc] initWithZonesInfo:@[zoneInfo]];
    return zonesInfo;
}

- (instancetype)initWithUpDomainList:(NSArray<NSString *> *)upList {
    if (self = [super init]) {
        self.zonesInfo = [self createZonesInfo:upList ioHosts:nil];
    }
    return self;
}
- (instancetype)initWithUpDomainList:(NSArray<NSString *> *)upList
                          ioHostList:(NSArray<NSString *> *)ioHostList {
    if (self = [super init]) {
        self.zonesInfo = [self createZonesInfo:upList ioHosts:ioHostList];
    }
    return self;
}
- (instancetype)initWithUpDomainList:(NSArray<NSString *> *)upList
                           oldUpList:(NSArray<NSString *> *)oldUpList
                          ioHostList:(NSArray<NSString *> *)ioHostList {
    if (self = [super init]) {
        self.zonesInfo = [self createZonesInfo:upList oldUpDomains:oldUpList ioHosts:ioHostList];
    }
    return self;
}

- (void)preQuery:(QNUpToken *)token
              on:(QNPrequeryReturn)ret {
    ret(0, nil, nil);
}

- (QNZonesInfo *)getZonesInfoWithToken:(QNUpToken *)token {
    return self.zonesInfo;
}


@end
