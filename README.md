# YandexMoneySDKiOS

[![Version](http://cocoapod-badges.herokuapp.com/v/YandexMoneySDKiOS/badge.png)](http://api.yandex.ru/money/)
[![Platform](http://cocoapod-badges.herokuapp.com/p/YandexMoneySDKiOS/badge.png)](http://api.yandex.ru/money/)

## Usage

To run the example project; clone the repo, and run `pod install` from the Example directory first.

## Links

* Yandex.Money API page: [Ru](http://api.yandex.ru/money/), [En](http://api.yandex.com/money/)
* [example projects](https://github.com/yandex-money/yandex-money-sdk-ios/tree/master/Example)

## Installation

YandexMoneySDKiOS is available through [CocoaPods](http://cocoapods.org), to install
it simply add the following line to your Podfile:

    pod "YandexMoneySDKiOS"

## Code samples

```Objective-C
NSDictionary *paymentParams = @{@"amount" : self.amountTextField.text, @"phone-number" : self.phoneNumberTextField.text};
    
//Starting payment process
YMACpsController *cpsController = [[YMACpsController alloc] initWithClientId:kClientId patternId:@"phone-topup" andPaymentParams:paymentParams];

[self presentViewController:cpsController animated:YES completion:NULL];
```

## Author

Alexander Mertvetsov, amertvetsov@yandex.ru

## License

YandexMoneySDKiOS is available under the MIT license. See the LICENSE file for more info.

