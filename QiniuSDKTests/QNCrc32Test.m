//
//  QNCrc32Test.m
//  QiniuSDK
//
//  Created by bailong on 14/10/1.
//  Copyright (c) 2014年 Qiniu. All rights reserved.
//

#import "QNCrc32.h"
#import "QNTempFile.h"
#import <XCTest/XCTest.h>

@interface QNCrc32Test : XCTestCase

@end

@implementation QNCrc32Test

- (void)testData {
    NSData *buffer = [@"Hello, World!" dataUsingEncoding:NSUTF8StringEncoding];
    UInt32 crc = [QNCrc32 data:buffer];

    XCTAssert(crc == 3964322768, @"Pass");
}

- (void)testFile {
    NSError *error;
    QNTempFile *file = [QNTempFile createTempfileWithSize:5 * 1024 * 1024 identifier:@"crc_5M"];
    UInt32 u = [QNCrc32 file:[file.fileUrl relativePath] error:&error];

    XCTAssert(u == 1630269785, @"Pass");
    [file remove];
}

@end
