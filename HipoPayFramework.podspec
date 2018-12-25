#
#  Be sure to run `pod spec lint HipoPayFramework.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  s.name         = "HipoPayFramework"
  s.version      = "1.1.24"
  s.summary      = "重新生成podspec"
  s.homepage        = "https://github.com/PassN/Framework_test.git"
  s.license         = { :type => 'MIT', :file => 'LICENSE' }
  s.author          = { 'Sdashu' => '734606521@qq.com' }
  s.platform        = :ios, "9.0"
  s.source          = { :git => "https://github.com/PassN/Framework_test.git", :tag => s.version }
  # s.source_files    = "HipoPayFramework", "HipoPayFramework/**/*.{h,m}"
  s.framework       = "UIKit"
  s.dependency 'XMNetworking'
  s.dependency 'WechatOpenSDK'
  s.dependency 'AlipaySDK-iOS'

end
