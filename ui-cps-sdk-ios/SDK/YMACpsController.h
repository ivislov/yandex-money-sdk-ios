//
//  YMACpsController.h
//  ui-cps-sdk-ios
//
//  Created by Александр Мертвецов on 17.02.14.
//  Copyright (c) 2014 Yandex.Money. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YMACpsController : UINavigationController

- (id)initWithClintId:(NSString *)clientId patternId:(NSString *)patternId andPaymentParams:(NSDictionary *)paymentParams;

@end
