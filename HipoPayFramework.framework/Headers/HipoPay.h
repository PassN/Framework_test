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
/*微信境外支付
 *WX_APPID在微信注册的APPid(境外)
 *merchant_no
 *amount
 *currency
 *subject
 *notify_url
 *out_order_no
 *block返回网络错误之类的错误
 */
+ (void)HP_wechatpay_outsideAppid:(NSString *)WX_APPID withMerchant_no:(NSString *)merchant_no withAmount:(NSString *)amount withCurrency:(NSString *)currency withSubject:(NSString *)subject withNotify_url:(NSString *)notify_url withOut_order_no:(NSString *)out_order_no withBlock:(void(^)(NSError *error))block;


/*支付宝境内支付
 *WX_APPID在微信注册的APPid
 *infoDic需要包含下面的参数:
 *partnerId
 *prepayId
 *nonceStr
 *timeStamp
 *packageValue
 *sign
 */
+ (void)HP_alipay_insideAppid:(NSString *)WX_APPID withInfoDic:(NSDictionary *)infoDic;

+ (void)HP_alipay_outsideAppid:(NSString *)ALI_APPID withAppScheme:(NSString *)appScheme withMerchant_no:(NSString *)merchant_no withAmount:(NSString *)amount withCurrency:(NSString *)currency withSubject:(NSString *)subject withProduct_info:(NSString *)product_info withBlock:(void(^)(NSError *error))block;

@end
