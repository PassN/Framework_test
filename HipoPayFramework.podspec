Pod::Spec.new do |s|
s.name                       = 'HipoPayFramework'
s.version                    = '1.0.2'
s.summary                    = 'Test for HipoPayFramework.'
s.homepage                   = 'https://github.com/PassN/Framework_test.git'
s.license                    = { :type => 'MIT', :file => 'LICENSE' }
s.author                     = { 'Jonzzs' => '734606521@qq.com' }
# s.social_media_url           = 'http://weibo.com/Sdashu'
s.platform                   = :ios
s.ios.deployment_target      = '9.0'
# s.swift_version              = '4.0'
s.source                     = { :git => 'https://github.com/PassN/Framework_test.git', :tag => s.version }
# s.source_files               = 'HipoPayFramework/*.{h,m}'
# s.resource_bundle            = { 'Framework_test/HipoPayFramework' => ['Resources/**/*.xcassets'] }
# s.resource                   = 'xxx/xxx.bundle'
s.ios.vendored_frameworks    = 'HipoPayFramework.framework'
s.frameworks                 = 'UIKit'
s.dependency 'AFNetworking'
s.dependency 'WechatOpenSDK'
# s.subspec 'GroupName' do |s|
# ...
end

