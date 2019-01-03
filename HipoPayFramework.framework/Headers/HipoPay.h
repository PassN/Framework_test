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
                      withInfoDic:(NSDictionary *)infoDic
                     withCallback:(CallbackBlock)callbackBlock;
/*微信境外支付
 *WX_APPID在微信注册的APPid(境外)
 *merchant_no
 *amount
 *currency
 *subject
 *notify_url
 *wechat_order_no
 *block返回网络错误之类的错误
 */
+ (void)HP_wechatpay_outsideAppid:(NSString *)WX_APPID
                  withMerchant_no:(NSString *)merchant_no
                       withAmount:(NSString *)amount
                     withCurrency:(NSString *)currency
                      withSubject:(NSString *)subject
                 withProduct_info:(NSString *)withProduct_info
                   withNotify_url:(NSString *)notify_url
              withWeChat_order_no:(NSString *)wechat_order_no
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


/*支付宝境外支付
 *ALI_APPID在支付宝注册的APPid
 *appScheme在URLType中注册的URLScheme
 *merchant_no
 *amount
 *currency
 *subject
 *product_info
 *notify_url
 *alipay_order_no
 *callbackBlock支付宝返回
 *errorBlock
 */
+ (void)HP_alipay_outsideAppid:(NSString *)ALI_APPID
                 withAppScheme:(NSString *)appScheme
               withMerchant_no:(NSString *)merchant_no
                    withAmount:(NSString *)amount
                  withCurrency:(NSString *)currency
                   withSubject:(NSString *)subject
              withProduct_info:(NSString *)product_info
                withNotify_url:(NSString *)notify_url
           withAlipay_order_no:(NSString *)alipay_order_no
                  withCallback:(CallbackBlock)callbackBlock;

+ (BOOL)ResponseToPaymentResultsWithUrl:(NSURL *)url;


@end
