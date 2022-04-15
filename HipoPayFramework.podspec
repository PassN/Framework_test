Pod::Spec.new do |s|
  s.name                       = 'HipoPayFramework'
  s.version                    = '1.4.0'
  s.summary                    = '1、适配AFNetworking4.0； 2、删除XM网络请求'
  s.homepage                   = 'https://github.com/PassN/Framework_test.git'
  s.license                    = { :type => 'MIT', :file => 'LICENSE' }
  s.author                     = { 'Sdashu' => '734606521@qq.com' }
  s.platform                   = :ios
  s.ios.deployment_target      = '13.0'
  s.source                     = { :git => 'https://github.com/PassN/Framework_test.git', :tag => s.version }
  # s.source_files               = 'HipoPayFramework/*.{h,m}'
  s.ios.vendored_frameworks    = 'HipoPayFramework'
  s.frameworks                 = "Foundation", "UIKit", "CFNetwork", "CoreMedia", "CoreTelephony", "CoreVideo", "QuartzCore", "Security", "StoreKit", "SystemConfiguration"
  s.libraries                  = "z.tbd", "sqlite3.tbd", "iconv.tbd", "c++.tbd"
  s.dependency 'WechatOpenSDK'
  s.dependency 'AlipaySDK-iOS'
  s.dependency 'AFNetworking'
  # s.subspec 'GroupName' do |s2
end