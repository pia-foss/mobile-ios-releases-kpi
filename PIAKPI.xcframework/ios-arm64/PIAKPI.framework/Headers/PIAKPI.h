#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PIAKPIKPIError, PIAKPIKPIClientEvent, PIAKPIKPIBuilderCompanion, PIAKPIKPIBuilder, PIAKPIKTimeUnit, PIAKPIKPIHttpLogLevel, PIAKPIKPISendEventsMode, PIAKPIKPIRequestFormat, PIAKPIKotlinx_datetimeInstant, PIAKPIKPIEndpoint, PIAKPIKotlinEnumCompanion, PIAKPIKotlinEnum<E>, PIAKPIKotlinArray<T>, PIAKPIKPIUtils, PIAKPIKTimeUnitCompanion, PIAKPIKotlinx_datetimeInstantCompanion, PIAKPIKotlinx_serialization_coreSerializersModule, PIAKPIKotlinx_serialization_coreSerialKind, PIAKPIKotlinNothing;

@protocol PIAKPIKPIAPI, PIAKPIKPIClientStateProvider, PIAKPIKotlinComparable, PIAKPIKotlinIterator, PIAKPIKotlinx_serialization_coreKSerializer, PIAKPIKotlinx_serialization_coreEncoder, PIAKPIKotlinx_serialization_coreSerialDescriptor, PIAKPIKotlinx_serialization_coreSerializationStrategy, PIAKPIKotlinx_serialization_coreDecoder, PIAKPIKotlinx_serialization_coreDeserializationStrategy, PIAKPIKotlinx_serialization_coreCompositeEncoder, PIAKPIKotlinAnnotation, PIAKPIKotlinx_serialization_coreCompositeDecoder, PIAKPIKotlinx_serialization_coreSerializersModuleCollector, PIAKPIKotlinKClass, PIAKPIKotlinKDeclarationContainer, PIAKPIKotlinKAnnotatedElement, PIAKPIKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PIAKPIBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface PIAKPIBase (PIAKPIBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface PIAKPIMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PIAKPIMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorPIAKPIKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface PIAKPINumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface PIAKPIByte : PIAKPINumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface PIAKPIUByte : PIAKPINumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface PIAKPIShort : PIAKPINumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface PIAKPIUShort : PIAKPINumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface PIAKPIInt : PIAKPINumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface PIAKPIUInt : PIAKPINumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface PIAKPILong : PIAKPINumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface PIAKPIULong : PIAKPINumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface PIAKPIFloat : PIAKPINumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface PIAKPIDouble : PIAKPINumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface PIAKPIBoolean : PIAKPINumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("KPIAPI")))
@protocol PIAKPIKPIAPI
@required
- (void)flushCallback:(void (^)(PIAKPIKPIError * _Nullable))callback __attribute__((swift_name("flush(callback:)")));
- (void)recentEventsCallback:(void (^)(NSArray<NSString *> *))callback __attribute__((swift_name("recentEvents(callback:)")));
- (void)start __attribute__((swift_name("start()")));
- (void)stopCallback:(void (^)(PIAKPIKPIError * _Nullable))callback __attribute__((swift_name("stop(callback:)")));
- (void)submitEvent:(PIAKPIKPIClientEvent *)event callback:(void (^)(PIAKPIKPIError * _Nullable))callback __attribute__((swift_name("submit(event:callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIBuilder")))
@interface PIAKPIKPIBuilder : PIAKPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PIAKPIKPIBuilderCompanion *companion __attribute__((swift_name("companion")));
- (id<PIAKPIKPIAPI>)build __attribute__((swift_name("build()")));
- (PIAKPIKPIBuilder *)setCertificateCertificate:(NSString *)certificate __attribute__((swift_name("setCertificate(certificate:)")));
- (PIAKPIKPIBuilder *)setEventTimeRoundGranularityEventTimeRoundGranularity:(PIAKPIKTimeUnit *)eventTimeRoundGranularity __attribute__((swift_name("setEventTimeRoundGranularity(eventTimeRoundGranularity:)")));
- (PIAKPIKPIBuilder *)setEventTimeSendGranularityEventSendTimeGranularity:(PIAKPIKTimeUnit *)eventSendTimeGranularity __attribute__((swift_name("setEventTimeSendGranularity(eventSendTimeGranularity:)")));
- (PIAKPIKPIBuilder *)setEventsBatchSizeSize:(int32_t)size __attribute__((swift_name("setEventsBatchSize(size:)")));
- (PIAKPIKPIBuilder *)setEventsHistorySizeSize:(int32_t)size __attribute__((swift_name("setEventsHistorySize(size:)")));
- (PIAKPIKPIBuilder *)setHttpLogLevelHttpLogLevel:(PIAKPIKPIHttpLogLevel *)httpLogLevel __attribute__((swift_name("setHttpLogLevel(httpLogLevel:)")));
- (PIAKPIKPIBuilder *)setKPIClientStateProviderKpiClientStateProvider:(id<PIAKPIKPIClientStateProvider>)kpiClientStateProvider __attribute__((swift_name("setKPIClientStateProvider(kpiClientStateProvider:)")));
- (PIAKPIKPIBuilder *)setKPIFlushEventModeKpiSendEventMode:(PIAKPIKPISendEventsMode *)kpiSendEventMode __attribute__((swift_name("setKPIFlushEventMode(kpiSendEventMode:)")));
- (PIAKPIKPIBuilder *)setLoggingEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setLoggingEnabled(isEnabled:)")));
- (PIAKPIKPIBuilder *)setPreferenceNamePreferenceName:(NSString *)preferenceName __attribute__((swift_name("setPreferenceName(preferenceName:)")));
- (PIAKPIKPIBuilder *)setRequestFormatRequestFormat:(PIAKPIKPIRequestFormat *)requestFormat __attribute__((swift_name("setRequestFormat(requestFormat:)")));
- (PIAKPIKPIBuilder *)setRequestTimeoutMsTimeout:(int64_t)timeout __attribute__((swift_name("setRequestTimeoutMs(timeout:)")));
- (PIAKPIKPIBuilder *)setUserAgentUserAgent:(NSString * _Nullable)userAgent __attribute__((swift_name("setUserAgent(userAgent:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIBuilder.Companion")))
@interface PIAKPIKPIBuilderCompanion : PIAKPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAKPIKPIBuilderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_EVENTS_BATCH_SIZE __attribute__((swift_name("DEFAULT_EVENTS_BATCH_SIZE")));
@property (readonly) int32_t DEFAULT_EVENTS_HISTORY_SIZE __attribute__((swift_name("DEFAULT_EVENTS_HISTORY_SIZE")));
@property (readonly) int64_t DEFAULT_REQUEST_TIMEOUT_MS __attribute__((swift_name("DEFAULT_REQUEST_TIMEOUT_MS")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIClientEvent")))
@interface PIAKPIKPIClientEvent : PIAKPIBase
- (instancetype)initWithEventCountry:(NSString * _Nullable)eventCountry eventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, NSString *> *)eventProperties eventInstant:(PIAKPIKotlinx_datetimeInstant *)eventInstant __attribute__((swift_name("init(eventCountry:eventName:eventProperties:eventInstant:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSString *> *)component3 __attribute__((swift_name("component3()")));
- (PIAKPIKotlinx_datetimeInstant *)component4 __attribute__((swift_name("component4()")));
- (PIAKPIKPIClientEvent *)doCopyEventCountry:(NSString * _Nullable)eventCountry eventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, NSString *> *)eventProperties eventInstant:(PIAKPIKotlinx_datetimeInstant *)eventInstant __attribute__((swift_name("doCopy(eventCountry:eventName:eventProperties:eventInstant:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable eventCountry __attribute__((swift_name("eventCountry")));
@property (readonly) PIAKPIKotlinx_datetimeInstant *eventInstant __attribute__((swift_name("eventInstant")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, NSString *> *eventProperties __attribute__((swift_name("eventProperties")));
@end;

__attribute__((swift_name("KPIClientStateProvider")))
@protocol PIAKPIKPIClientStateProvider
@required
- (NSString * _Nullable)kpiAuthToken __attribute__((swift_name("kpiAuthToken()")));
- (NSArray<PIAKPIKPIEndpoint *> *)kpiEndpoints __attribute__((swift_name("kpiEndpoints()")));
- (NSString *)projectToken __attribute__((swift_name("projectToken()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIEndpoint")))
@interface PIAKPIKPIEndpoint : PIAKPIBase
- (instancetype)initWithEndpoint:(NSString *)endpoint usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("init(endpoint:usePinnedCertificate:certificateCommonName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (PIAKPIKPIEndpoint *)doCopyEndpoint:(NSString *)endpoint usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("doCopy(endpoint:usePinnedCertificate:certificateCommonName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable certificateCommonName __attribute__((swift_name("certificateCommonName")));
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@property (readonly) BOOL usePinnedCertificate __attribute__((swift_name("usePinnedCertificate")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIError")))
@interface PIAKPIKPIError : PIAKPIBase
- (instancetype)initWithDescription:(NSString *)description __attribute__((swift_name("init(description:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (PIAKPIKPIError *)doCopyDescription:(NSString *)description __attribute__((swift_name("doCopy(description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol PIAKPIKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface PIAKPIKotlinEnum<E> : PIAKPIBase <PIAKPIKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PIAKPIKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIHttpLogLevel")))
@interface PIAKPIKPIHttpLogLevel : PIAKPIKotlinEnum<PIAKPIKPIHttpLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PIAKPIKPIHttpLogLevel *all __attribute__((swift_name("all")));
@property (class, readonly) PIAKPIKPIHttpLogLevel *headers __attribute__((swift_name("headers")));
@property (class, readonly) PIAKPIKPIHttpLogLevel *body __attribute__((swift_name("body")));
@property (class, readonly) PIAKPIKPIHttpLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) PIAKPIKPIHttpLogLevel *none __attribute__((swift_name("none")));
+ (PIAKPIKotlinArray<PIAKPIKPIHttpLogLevel *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIRequestFormat")))
@interface PIAKPIKPIRequestFormat : PIAKPIKotlinEnum<PIAKPIKPIRequestFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PIAKPIKPIRequestFormat *elastic __attribute__((swift_name("elastic")));
@property (class, readonly) PIAKPIKPIRequestFormat *kape __attribute__((swift_name("kape")));
+ (PIAKPIKotlinArray<PIAKPIKPIRequestFormat *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPISendEventsMode")))
@interface PIAKPIKPISendEventsMode : PIAKPIKotlinEnum<PIAKPIKPISendEventsMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PIAKPIKPISendEventsMode *perEvent __attribute__((swift_name("perEvent")));
@property (class, readonly) PIAKPIKPISendEventsMode *perBatch __attribute__((swift_name("perBatch")));
+ (PIAKPIKotlinArray<PIAKPIKPISendEventsMode *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPILogger")))
@interface PIAKPIKPILogger : PIAKPIBase
- (instancetype)initWithIsLoggingEnabled:(PIAKPIBoolean *(^)(void))isLoggingEnabled __attribute__((swift_name("init(isLoggingEnabled:)"))) __attribute__((objc_designated_initializer));
- (void)logDebugTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logDebug(tag:message:)")));
- (void)logErrorTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logError(tag:message:)")));
- (void)logInfoTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logInfo(tag:message:)")));
- (void)logWarningTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logWarning(tag:message:)")));
- (void)logWtfTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logWtf(tag:message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIUtils")))
@interface PIAKPIKPIUtils : PIAKPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kPIUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAKPIKPIUtils *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KTimeUnit")))
@interface PIAKPIKTimeUnit : PIAKPIKotlinEnum<PIAKPIKTimeUnit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PIAKPIKTimeUnitCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PIAKPIKTimeUnit *nanoseconds __attribute__((swift_name("nanoseconds")));
@property (class, readonly) PIAKPIKTimeUnit *microseconds __attribute__((swift_name("microseconds")));
@property (class, readonly) PIAKPIKTimeUnit *milliseconds __attribute__((swift_name("milliseconds")));
@property (class, readonly) PIAKPIKTimeUnit *seconds __attribute__((swift_name("seconds")));
@property (class, readonly) PIAKPIKTimeUnit *minutes __attribute__((swift_name("minutes")));
@property (class, readonly) PIAKPIKTimeUnit *hours __attribute__((swift_name("hours")));
@property (class, readonly) PIAKPIKTimeUnit *days __attribute__((swift_name("days")));
+ (PIAKPIKotlinArray<PIAKPIKTimeUnit *> *)values __attribute__((swift_name("values()")));
- (int64_t)convertSourceDuration:(int64_t)sourceDuration sourceUnit:(PIAKPIKTimeUnit *)sourceUnit __attribute__((swift_name("convert(sourceDuration:sourceUnit:)")));
- (int64_t)toDaysDuration:(int64_t)duration __attribute__((swift_name("toDays(duration:)")));
- (int64_t)toHoursDuration:(int64_t)duration __attribute__((swift_name("toHours(duration:)")));
- (int64_t)toMicrosDuration:(int64_t)duration __attribute__((swift_name("toMicros(duration:)")));
- (int64_t)toMillisDuration:(int64_t)duration __attribute__((swift_name("toMillis(duration:)")));
- (int64_t)toMinutesDuration:(int64_t)duration __attribute__((swift_name("toMinutes(duration:)")));
- (int64_t)toNanosDuration:(int64_t)duration __attribute__((swift_name("toNanos(duration:)")));
- (int64_t)toSecondsDuration:(int64_t)duration __attribute__((swift_name("toSeconds(duration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KTimeUnit.Companion")))
@interface PIAKPIKTimeUnitCompanion : PIAKPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAKPIKTimeUnitCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface PIAKPIKotlinx_datetimeInstant : PIAKPIBase <PIAKPIKotlinComparable>
@property (class, readonly, getter=companion) PIAKPIKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PIAKPIKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (PIAKPIKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(PIAKPIKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (PIAKPIKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PIAKPIKotlinEnumCompanion : PIAKPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAKPIKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PIAKPIKotlinArray<T> : PIAKPIBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PIAKPIInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PIAKPIKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface PIAKPIKotlinx_datetimeInstantCompanion : PIAKPIBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PIAKPIKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (PIAKPIKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (PIAKPIKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (PIAKPIKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (PIAKPIKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (PIAKPIKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<PIAKPIKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) PIAKPIKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) PIAKPIKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol PIAKPIKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PIAKPIKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PIAKPIKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PIAKPIKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PIAKPIKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PIAKPIKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PIAKPIKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PIAKPIKotlinx_serialization_coreKSerializer <PIAKPIKotlinx_serialization_coreSerializationStrategy, PIAKPIKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PIAKPIKotlinx_serialization_coreEncoder
@required
- (id<PIAKPIKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PIAKPIKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PIAKPIKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<PIAKPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PIAKPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PIAKPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PIAKPIKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<PIAKPIKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<PIAKPIKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) PIAKPIKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PIAKPIKotlinx_serialization_coreDecoder
@required
- (id<PIAKPIKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PIAKPIKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (PIAKPIKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PIAKPIKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PIAKPIKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PIAKPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PIAKPIKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PIAKPIKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PIAKPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PIAKPIKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PIAKPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PIAKPIKotlinx_serialization_coreSerializersModule : PIAKPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<PIAKPIKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<PIAKPIKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PIAKPIKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PIAKPIKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<PIAKPIKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PIAKPIKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<PIAKPIKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PIAKPIKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol PIAKPIKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PIAKPIKotlinx_serialization_coreSerialKind : PIAKPIBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PIAKPIKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PIAKPIKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PIAKPIKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PIAKPIKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PIAKPIKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PIAKPIKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PIAKPIKotlinNothing : PIAKPIBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PIAKPIKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PIAKPIKotlinKClass>)kClass provider:(id<PIAKPIKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PIAKPIKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PIAKPIKotlinKClass>)kClass serializer:(id<PIAKPIKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PIAKPIKotlinKClass>)baseClass actualClass:(id<PIAKPIKotlinKClass>)actualClass actualSerializer:(id<PIAKPIKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PIAKPIKotlinKClass>)baseClass defaultDeserializerProvider:(id<PIAKPIKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PIAKPIKotlinKClass>)baseClass defaultDeserializerProvider:(id<PIAKPIKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PIAKPIKotlinKClass>)baseClass defaultSerializerProvider:(id<PIAKPIKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PIAKPIKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PIAKPIKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol PIAKPIKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol PIAKPIKotlinKClass <PIAKPIKotlinKDeclarationContainer, PIAKPIKotlinKAnnotatedElement, PIAKPIKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
