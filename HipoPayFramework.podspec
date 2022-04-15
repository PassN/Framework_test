Pod::Spec.new do |s|
  s.name                       = 'HipoPayFramework'
  s.version                    = '1.4.0'
  s.summary                    = '1、适配AFNetworking4.0； 2、删除XM网络请求'
  s.homepage                   = 'https://github.com/PassN/Framework_test.git'
  s.license                    = { :type => 'MIT', :file => 'LICENSE' }
  s.author                     = { 'Sdashu' => '734606521@qq.com' }
  # s.social_media_url           = 'http://weibo.com/Sdashu'
  s.platform                   = :ios
  s.ios.deployment_target      = '9.0'
  # s.swift_version              = '4.0'
  s.source                     = { :git => 'https://github.com/PassN/Framework_test.git', :tag => s.version }
  # s.source_files               = 'HipoPayFramework/*.{h,m}'
  # s.resource_bundle            = { 'Framework_test/HipoPayFramework' => ['Resources/**/*.xcassets'] }
  # s.resource                   = 'HipoPayFramework/AlipaySDK.bundle'
  s.ios.vendored_frameworks    = 'HipoPayFramework'
  s.frameworks                 = "Foundation", "UIKit", "CFNetwork", "CoreMedia", "CoreTelephony", "CoreVideo", "QuartzCore", "Security", "StoreKit", "SystemConfiguration"
  s.libraries                  = "z.tbd", "sqlite3.tbd", "iconv.tbd", "c++.tbd"
  # , 'CoreMotion', 'Foundation', 'CoreGraphics', 'CoreText', 'QuartzCore', 'AlipaySDK'
  s.dependency 'WechatOpenSDK'
  s.dependency 'AlipaySDK-iOS'
  s.dependency 'AFNetworking', "4.0.1" 
  # s.subspec 'GroupName' do |s2
end