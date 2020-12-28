//
//  QNLogUtil.m
//  QiniuSDK
//
//  Created by yangsen on 2020/12/25.
//  Copyright © 2020 Qiniu. All rights reserved.
//

#import "QNLogUtil.h"

#if DEBUG
static QNLogLevel _level = QNLogLevelVerbose;
#else
static QNLogLevel _level = QNLogLevelNone;
#endif

@implementation QNLogUtil

+ (void)setLogLevel:(QNLogLevel)level {
    _level = level < 0 ? 0 : level;
}

+ (void)log:(QNLogLevel)level
       file:(NSString *)file
   function:(NSString *)function
       line:(NSUInteger)line
     format:(NSString *)format, ... {
    
    if (!format || level > _level) {
        return;
    }
    
    va_list args;
    va_start(args, format);
    NSString *message = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    
    NSThread *thread = [NSThread currentThread];
    NSString *levelString = @[@"V", @"D", @"I", @"W", @"E"][level%5];
    NSDate *date = [NSDate date];
    message = [NSString stringWithFormat:@"[%@]/%@ %@ %@->%@->%ld %@", levelString, date, thread.name, file, function, line, message];

    NSLog(@"%@", message);
}


@end
