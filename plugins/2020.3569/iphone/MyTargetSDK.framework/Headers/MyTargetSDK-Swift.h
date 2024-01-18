#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8.1 (swiftlang-5.8.0.124.5 clang-1403.0.22.11.100)
#ifndef MYTARGETSDK_SWIFT_H
#define MYTARGETSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#import <MyTargetSDK/MyTargetSDK.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MyTargetSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// Error codes for onLoadFailed() callback.
typedef SWIFT_ENUM_NAMED(NSInteger, MTRGAdLoadingError, "AdLoadingError", open) {
/// Undefined network error
  MTRGAdLoadingErrorUndefinedNetworkError = 1000,
/// Invalid URL for ad request.
  MTRGAdLoadingErrorInvalidUrl = 1001,
/// Network connection failed.
  MTRGAdLoadingErrorNetworkFailed = 1002,
/// Request timeout
  MTRGAdLoadingErrorRequestTimeout = 1003,
/// Forbidden server response.
  MTRGAdLoadingErrorForbidden = 1403,
/// Not Found server response.
  MTRGAdLoadingErrorNotFound = 1404,
/// Internal Server Error.
  MTRGAdLoadingErrorInternalServerError = 1500,
/// Undefined parse error
  MTRGAdLoadingErrorUndefinedParseError = 2000,
/// Empty response.
  MTRGAdLoadingErrorEmptyResponse = 2001,
/// Invalid JSON.
  MTRGAdLoadingErrorInvalidJson = 2002,
/// Invalid XML.
  MTRGAdLoadingErrorInvalidXml = 2003,
/// Invalid ad type.
  MTRGAdLoadingErrorInvalidAdType = 2004,
/// Required field missed.
  MTRGAdLoadingErrorRequiredFieldMissed = 2005,
/// Undefined data error
  MTRGAdLoadingErrorUndefinedDataError = 3000,
/// Banner has no image(s).
  MTRGAdLoadingErrorMissedImages = 3001,
/// Banner has no html source.
  MTRGAdLoadingErrorMissedHtml = 3002,
/// No banners
  MTRGAdLoadingErrorNoBanners = 3003,
/// Banner has invalid type
  MTRGAdLoadingErrorInvalidBannerType = 3004,
/// Reloading not allowed.
  MTRGAdLoadingErrorReloadingNotAllowed = 4001,
/// Undefined mediation error
  MTRGAdLoadingErrorUndefinedMediationError = 5000,
/// Ad not loaded from mediation network.
  MTRGAdLoadingErrorMediationAdNotLoaded = 5001,
};
static NSString * _Nonnull const MTRGAdLoadingErrorDomain = @"MyTargetSDK.AdLoadingError";



@protocol MTRGInstreamAdVideoMotionPlayerDelegate;
@class MTRGInstreamAdVideoMotionBanner;

SWIFT_PROTOCOL_NAMED("InstreamAdVideoMotionPlayer")
@protocol MTRGInstreamAdVideoMotionPlayer
/// Instance conforms VideoMotionPlayerDelegate protocol.
@property (nonatomic, weak) id <MTRGInstreamAdVideoMotionPlayerDelegate> _Nullable delegate;
/// Show Video Motion banner.
/// \param videoMotionBanner Video Motion banner.
///
- (void)play:(MTRGInstreamAdVideoMotionBanner * _Nonnull)videoMotionBanner;
@end

@class NSString;

SWIFT_PROTOCOL_NAMED("InstreamAdVideoMotionPlayerDelegate")
@protocol MTRGInstreamAdVideoMotionPlayerDelegate
/// Calls on banner show.
- (void)onBannerShow;
/// Calls on banner complete.
- (void)onBannerComplete;
/// Calls on item show.
/// \param itemId Identifier.
///
- (void)onItemShow:(NSString * _Nonnull)itemId;
/// Calls on item click.
/// \param itemId Identifier.
///
- (void)onItemClick:(NSString * _Nonnull)itemId;
/// Calls on header click.
- (void)onHeaderClick;
/// Calls on  close.
- (void)onCloseByUser;
/// Calls on error.
- (void)onError:(NSString * _Nonnull)error;
@end








@interface MTRGInstreamAd (SWIFT_EXTENSION(MyTargetSDK))
@end

@class NSURL;

SWIFT_CLASS_NAMED("VideoMotionItem")
@interface MTRGInstreamAdVideoMotionItem : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nullable price;
@property (nonatomic, readonly, copy) NSString * _Nullable oldPrice;
@property (nonatomic, readonly, copy) NSString * _Nonnull currency;
@property (nonatomic, readonly, copy) NSURL * _Nonnull image;
@property (nonatomic, readonly, copy) NSString * _Nonnull text;
@property (nonatomic, readonly, copy) NSString * _Nonnull ctaText;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MTRGInstreamAd (SWIFT_EXTENSION(MyTargetSDK))
@end

@class MTRGInstreamAdVideoMotionHeader;
@class MTRGInstreamAdVideoMotionDisclaimer;

SWIFT_CLASS_NAMED("VideoMotionData")
@interface MTRGInstreamAdVideoMotionData : NSObject
@property (nonatomic, readonly, strong) MTRGInstreamAdVideoMotionHeader * _Nonnull header;
@property (nonatomic, readonly, copy) NSArray<MTRGInstreamAdVideoMotionItem *> * _Nonnull items;
@property (nonatomic, readonly, strong) MTRGInstreamAdVideoMotionDisclaimer * _Nullable disclaimer;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MTRGInstreamAd (SWIFT_EXTENSION(MyTargetSDK))
@end


SWIFT_CLASS_NAMED("VideoMotionDisclaimer")
@interface MTRGInstreamAdVideoMotionDisclaimer : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull text;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MTRGInstreamAd (SWIFT_EXTENSION(MyTargetSDK))
@end


SWIFT_CLASS_NAMED("VideoMotionHeader")
@interface MTRGInstreamAdVideoMotionHeader : NSObject
@property (nonatomic, readonly, copy) NSURL * _Nonnull icon;
@property (nonatomic, readonly, copy) NSString * _Nonnull title;
@property (nonatomic, readonly, copy) NSString * _Nonnull linkText;
@property (nonatomic, readonly, copy) NSString * _Nonnull ageRestrictionText;
@property (nonatomic, readonly, copy) NSString * _Nonnull adDisclaimerText;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MTRGInstreamAd (SWIFT_EXTENSION(MyTargetSDK))
@end

@class NSNumber;
@class UIImage;

SWIFT_CLASS_NAMED("VideoMotionBanner")
@interface MTRGInstreamAdVideoMotionBanner : NSObject
@property (nonatomic, readonly, strong) MTRGInstreamAdVideoMotionData * _Nonnull videoMotionData;
@property (nonatomic, readonly) BOOL allowClose;
@property (nonatomic, readonly, strong) NSNumber * _Nullable allowCloseDelay;
@property (nonatomic, readonly) float duration;
@property (nonatomic, readonly, strong) UIImage * _Nullable adChoicesImage;
@property (nonatomic, readonly) BOOL hasAdChoices;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end









/// The various log message types that the logger provides.
typedef SWIFT_ENUM(NSInteger, MTRGLogMessageType, open) {
/// The informative log message type.
  MTRGLogMessageTypeInfo = 0,
/// The warning log message type.
  MTRGLogMessageTypeWarning = 1,
/// The error log message type.
  MTRGLogMessageTypeError = 2,
/// The critical log message type.
  MTRGLogMessageTypeCritical = 3,
};



/// A <code>MTRGLogger</code> is an implementation of a logger.
SWIFT_PROTOCOL("_TtP11MyTargetSDK10MTRGLogger_")
@protocol MTRGLogger
/// This method is called when a <code>MTRGLogger</code> must emit a log message.
/// \param message The message to be logged.
///
/// \param type The log message type of <code>message</code>. For the available log message types, see <code>MTRGLogMessageType</code>.
///
- (void)logMessage:(NSString * _Nonnull)message type:(enum MTRGLogMessageType)type;
@end


@class MTRGConfig;

/// Main class to initialize the SDK and manage debug mode of the SDK.
SWIFT_CLASS("_TtC11MyTargetSDK11MTRGManager")
@interface MTRGManager : NSObject
/// Instance of MTRGConfig.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) MTRGConfig * _Nonnull sdkConfig;)
+ (MTRGConfig * _Nonnull)sdkConfig SWIFT_WARN_UNUSED_RESULT;
+ (void)setSdkConfig:(MTRGConfig * _Nonnull)newValue;
/// Flag for AudioSession. Default value is false.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isAudioSessionManagedByApplication;)
+ (BOOL)isAudioSessionManagedByApplication SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsAudioSessionManagedByApplication:(BOOL)newValue;
/// Сustomizable logger for receiving messages from myTargetSDK.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) id <MTRGLogger> _Nullable customLogger;)
+ (id <MTRGLogger> _Nullable)customLogger SWIFT_WARN_UNUSED_RESULT;
+ (void)setCustomLogger:(id <MTRGLogger> _Nullable)newValue;
/// Method to init the SDK.
+ (void)initSdk SWIFT_METHOD_FAMILY(none);
/// Method to define debug mode status.
/// \param enabled Flag of status of debug mode.
///
+ (void)setDebugMode:(BOOL)enabled;
/// Method to get bidder token.
/// important:
/// This method should be called on background thread.
///
/// returns:
/// Bidder token as a NSString
+ (NSString * _Nonnull)getBidderToken SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end











/// Class to get current version of the SDK
SWIFT_CLASS("_TtC11MyTargetSDK11MTRGVersion")
@interface MTRGVersion : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// Method to get current version of SDK
///
/// returns:
/// Version of SDK as string
+ (NSString * _Nonnull)currentVersion SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS_NAMED("ShoppableAdsItem")
@interface MTRGShoppableAdsItem : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull url;
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, readonly, copy) NSString * _Nullable price;
@property (nonatomic, readonly, copy) NSString * _Nullable oldPrice;
@property (nonatomic, readonly, copy) NSString * _Nonnull picture;
@property (nonatomic, readonly, copy) NSString * _Nonnull text;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
