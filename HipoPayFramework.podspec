Pod::Spec.new do |s|
  s.name                       = 'HipoPayFramework'
  s.version                    = '1.3.1'
  s.summary                    = '修改微信注册时的:registerApp:universalLink'
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
  s.ios.vendored_frameworks    = 'HipoPayFramework.framework'
  s.frameworks                 = "Foundation", "UIKit"
  # , 'CoreMotion', 'Foundation', 'CoreGraphics', 'CoreText', 'QuartzCore', 'AlipaySDK'
  s.dependency 'XMNetworking'
  s.dependency 'WechatOpenSDK'
  s.dependency 'AlipaySDK-iOS'
  # s.subspec 'GroupName' do |s2
end