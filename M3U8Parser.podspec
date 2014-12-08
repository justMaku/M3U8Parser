Pod::Spec.new do |s|
  s.name             = "M3U8Parser"
  s.version          = "0.1.0"
  s.summary          = "M3U8 playlist parser for Obj-C"
  s.homepage         = "https://github.com/justMaku/M3U8Parser"
  s.license          = 'MIT'
  s.author           = { "Michał Kałużny" => "michalkaluzny@gmail.com" }
  s.source           = { :git => "https://github.com/<GITHUB_USERNAME>/M3U8Parser.git", :tag => s.version.to_s }
  s.platform     = :ios, '7.0'
  s.requires_arc = true
  s.source_files = 'Pod/Classes'
	s.prefix_header_contents =	<<-PCH
						  								#import "M3U8TagsAndAttributes.h"
															#import "NSString+m3u8.h"
															#define M3U8_BASE_URL @"baseURL"
						  								PCH
end
