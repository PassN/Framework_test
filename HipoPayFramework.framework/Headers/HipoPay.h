//
//  HipoPay.h
//  HipoPayFramework
//
//  Created by njw on 2018/10/9.
//  Copyright © 2018年 WiseCashier. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HipoPay : NSObject
/*微信境内支付
 *WX_APPID在微信注册的APPid
 *infoDic需要包含下面的参数:
 *partnerId
 *prepayId
 *nonceStr
 *timeStamp
 *packageValue
 *sign
 */
+ (void)HP_wechatpay_insideAppid:(NSString *)WX_APPID withInfoDic:(NSDictionary *)infoDic;

@end
