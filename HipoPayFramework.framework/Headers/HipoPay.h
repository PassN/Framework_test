//
//  HipoPay.h
//  HipoPayFramework
//
//  Created by njw on 2018/10/9.
//  Copyright © 2018年 WiseCashier. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HipoPayError){
    HipoPayErrorNetFault  = 1,   /** 网络故障    */
    HipoPayErrorCancel    = 2,   /** 用户取消    */
    HipoPayErrorFailure   = 3,   /** 支付失败    */
    HipoPayErrorOther     = 4,   /** 其他原因    */
    HipoPayErrorSuccess   = 0,   /** 支付成功    */
};

//结果与信息
typedef void(^CallbackBlock)(NSDictionary *resultDic, HipoPayError code);

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
+ (void)HP_wechatpay_insideAppid:(NSString *)WX_APPID
               withUniversalLink:(NSString *)universalLink
                     withInfoDic:(NSDictionary *)infoDic
                    withCallback:(CallbackBlock)callbackBlock;

/*微信境外支付
 *WX_APPID在微信注册的APPid
 *infoDic需要包含下面的参数:
 *partnerId
 *prepayId
 *nonceStr
 *timeStamp
 *packageValue
 *sign
 */
+ (void)HP_wechatpay_outsideAppid:(NSString *)WX_APPID
                withUniversalLink:(NSString *)universalLink
                      withInfoDic:(NSDictionary *)infoDic
                     withCallback:(CallbackBlock)callbackBlock;

/*支付宝境内支付
 *appScheme在URLType中注册的URLScheme
 *orderStr (仅支持接收调取支付宝的orderStr)
 */
+ (void)HP_alipay_insideAppScheme:(NSString *)appScheme
        withOrderStr:(NSString *)orderStr
        withCallback:(CallbackBlock)callbackBlock;

/*支付宝境外支付
 *appScheme在URLType中注册的URLScheme
 *orderStr (仅支持接收调取支付宝的orderStr)
 */
+ (void)HP_alipay_outsideAppScheme:(NSString *)appScheme
        withOrderStr:(NSString *)orderStr
        withCallback:(CallbackBlock)callbackBlock;


+ (BOOL)ResponseToPaymentResultsWithUrl:(NSURL *)url;


@end
