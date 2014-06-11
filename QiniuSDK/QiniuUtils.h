//
//  QiniuUtils.h
//  QiniuSDK
//
//  Created by Qiniu Developers 2013
//

#import <Foundation/Foundation.h>
#import "AFHTTPRequestOperation.h"

NSError *qiniuError(int errorCode, NSString *errorDescription);

NSError *qiniuErrorWithOperation(AFHTTPRequestOperation *operation, NSError *error);
