//
//  QNTestConfig.h
//  QiniuSDK
//
//  Created by bailong on 14/10/7.
//  Copyright (c) 2014年 Qiniu. All rights reserved.
//
#import <Foundation/Foundation.h>
// 华东上传凭证
static NSString *const token_z0 = @"dxVQk8gyk3WswArbNhdKIwmwibJ9nFsQhMNUmtIM:xe5aSXbBWwhl4mM24N9I66BsSFA=:eyJzY29wZSI6ImtvZG8tcGhvbmUtem9uZTAtc3BhY2UiLCJkZWFkbGluZSI6MTcyMTk3NDg2NiwgInJldHVybkJvZHkiOiJ7XCJmb29cIjokKHg6Zm9vKSwgXCJiYXJcIjokKHg6YmFyKSwgXCJtaW1lVHlwZVwiOiQobWltZVR5cGUpLCBcImhhc2hcIjokKGV0YWcpLCBcImtleVwiOiQoa2V5KSwgXCJmbmFtZVwiOiQoZm5hbWUpLCBcImZzaXplXCI6JChmc2l6ZSl9In0=";
// 华北上传凭证
static NSString *const token_z1 = @"dxVQk8gyk3WswArbNhdKIwmwibJ9nFsQhMNUmtIM:9M53e7PrF9cIACf7dJqL68ib3Xw=:eyJzY29wZSI6ImtvZG8tcGhvbmUtem9uZTEtc3BhY2UiLCJkZWFkbGluZSI6MTcyMTk3NDg2NiwgInJldHVybkJvZHkiOiJ7XCJmb29cIjokKHg6Zm9vKSwgXCJiYXJcIjokKHg6YmFyKSwgXCJtaW1lVHlwZVwiOiQobWltZVR5cGUpLCBcImhhc2hcIjokKGV0YWcpLCBcImtleVwiOiQoa2V5KSwgXCJmbmFtZVwiOiQoZm5hbWUpLCBcImZzaXplXCI6JChmc2l6ZSl9In0=";
// 华南上传凭证
static NSString *const token_z2 = @"dxVQk8gyk3WswArbNhdKIwmwibJ9nFsQhMNUmtIM:aqT24g8L2l5m48piwNF07kzjaRM=:eyJzY29wZSI6ImtvZG8tcGhvbmUtem9uZTItc3BhY2UiLCJkZWFkbGluZSI6MTcyMTk3NDg2NiwgInJldHVybkJvZHkiOiJ7XCJmb29cIjokKHg6Zm9vKSwgXCJiYXJcIjokKHg6YmFyKSwgXCJtaW1lVHlwZVwiOiQobWltZVR5cGUpLCBcImhhc2hcIjokKGV0YWcpLCBcImtleVwiOiQoa2V5KSwgXCJmbmFtZVwiOiQoZm5hbWUpLCBcImZzaXplXCI6JChmc2l6ZSl9In0=";
// 北美上传凭证
static NSString *const token_na0 = @"dxVQk8gyk3WswArbNhdKIwmwibJ9nFsQhMNUmtIM:XhDgtrzmt9-rHxoFG5yuvs66zsA=:eyJzY29wZSI6ImtvZG8tcGhvbmUtem9uZS1uYTAtc3BhY2UiLCJkZWFkbGluZSI6MTcyMTk3NDg2NiwgInJldHVybkJvZHkiOiJ7XCJmb29cIjokKHg6Zm9vKSwgXCJiYXJcIjokKHg6YmFyKSwgXCJtaW1lVHlwZVwiOiQobWltZVR5cGUpLCBcImhhc2hcIjokKGV0YWcpLCBcImtleVwiOiQoa2V5KSwgXCJmbmFtZVwiOiQoZm5hbWUpLCBcImZzaXplXCI6JChmc2l6ZSl9In0=";
// 东南亚上传凭证
static NSString *const token_as0 = @"dxVQk8gyk3WswArbNhdKIwmwibJ9nFsQhMNUmtIM:XLUuoKOGRk3_ptDyqcYQ1ebTewg=:eyJzY29wZSI6ImtvZG8tcGhvbmUtem9uZS1hczAtc3BhY2UiLCJkZWFkbGluZSI6MTcyMTk3NDg2NiwgInJldHVybkJvZHkiOiJ7XCJmb29cIjokKHg6Zm9vKSwgXCJiYXJcIjokKHg6YmFyKSwgXCJtaW1lVHlwZVwiOiQobWltZVR5cGUpLCBcImhhc2hcIjokKGV0YWcpLCBcImtleVwiOiQoa2V5KSwgXCJmbmFtZVwiOiQoZm5hbWUpLCBcImZzaXplXCI6JChmc2l6ZSl9In0=";
// 华北浙江2上传凭证
static NSString *const token_cn_east_2 = @"dxVQk8gyk3WswArbNhdKIwmwibJ9nFsQhMNUmtIM:u2cQREILLeJb3iJjYuUJeQIH3NU=:eyJzY29wZSI6ImtvZG8tcGhvbmUtY24tZWFzdC0yIiwiZGVhZGxpbmUiOjE3MjE5NzQ4NjYsICJyZXR1cm5Cb2R5Ijoie1wiZm9vXCI6JCh4OmZvbyksIFwiYmFyXCI6JCh4OmJhciksIFwibWltZVR5cGVcIjokKG1pbWVUeXBlKSwgXCJoYXNoXCI6JChldGFnKSwgXCJrZXlcIjokKGtleSksIFwiZm5hbWVcIjokKGZuYW1lKSwgXCJmc2l6ZVwiOiQoZnNpemUpfSJ9";
static NSString *const invalidBucketToken = @"dxVQk8gyk3WswArbNhdKIwmwibJ9nFsQhMNUmtIM:40uqxrlkWJNlN1aNVVAZX7u46Fk=:eyJzY29wZSI6InpvbmVfaW52YWxpZCIsImRlYWRsaW5lIjoxNzIxOTc0ODY2LCAicmV0dXJuQm9keSI6IntcImZvb1wiOiQoeDpmb28pLCBcImJhclwiOiQoeDpiYXIpLCBcIm1pbWVUeXBlXCI6JChtaW1lVHlwZSksIFwiaGFzaFwiOiQoZXRhZyksIFwia2V5XCI6JChrZXkpLCBcImZuYW1lXCI6JChmbmFtZSksIFwiZnNpemVcIjokKGZzaXplKX0ifQ==";
