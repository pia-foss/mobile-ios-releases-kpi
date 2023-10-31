#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KpiKPIError, KpiKPIClientEvent, KpiKPIBuilderCompanion, KpiKPIBuilder, KpiKTimeUnit, KpiKPIHttpLogLevel, KpiKPISendEventsMode, KpiKPIRequestFormat, KpiKotlinx_datetimeInstant, KpiKPIEndpoint, KpiKotlinEnumCompanion, KpiKotlinEnum<E>, KpiKotlinArray<T>, KpiKPIUtils, KpiKTimeUnitCompanion, KpiKotlinx_datetimeInstantCompanion, KpiKotlinx_serialization_coreSerializersModule, KpiKotlinx_serialization_coreSerialKind, KpiKotlinNothing;

@protocol KpiKPIAPI, KpiKPIClientStateProvider, KpiKotlinComparable, KpiKotlinIterator, KpiKotlinx_serialization_coreKSerializer, KpiKotlinx_serialization_coreEncoder, KpiKotlinx_serialization_coreSerialDescriptor, KpiKotlinx_serialization_coreSerializationStrategy, KpiKotlinx_serialization_coreDecoder, KpiKotlinx_serialization_coreDeserializationStrategy, KpiKotlinx_serialization_coreCompositeEncoder, KpiKotlinAnnotation, KpiKotlinx_serialization_coreCompositeDecoder, KpiKotlinx_serialization_coreSerializersModuleCollector, KpiKotlinKClass, KpiKotlinKDeclarationContainer, KpiKotlinKAnnotatedElement, KpiKotlinKClassifier;

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
@interface KpiBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KpiBase (KpiBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KpiMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KpiMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKpiKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KpiNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface KpiByte : KpiNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KpiUByte : KpiNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KpiShort : KpiNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KpiUShort : KpiNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KpiInt : KpiNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KpiUInt : KpiNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KpiLong : KpiNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KpiULong : KpiNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KpiFloat : KpiNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KpiDouble : KpiNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KpiBoolean : KpiNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("KPIAPI")))
@protocol KpiKPIAPI
@required
- (void)flushCallback:(void (^)(KpiKPIError * _Nullable))callback __attribute__((swift_name("flush(callback:)")));
- (void)recentEventsCallback:(void (^)(NSArray<NSString *> *))callback __attribute__((swift_name("recentEvents(callback:)")));
- (void)start __attribute__((swift_name("start()")));
- (void)stopCallback:(void (^)(KpiKPIError * _Nullable))callback __attribute__((swift_name("stop(callback:)")));
- (void)submitEvent:(KpiKPIClientEvent *)event callback:(void (^)(KpiKPIError * _Nullable))callback __attribute__((swift_name("submit(event:callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIBuilder")))
@interface KpiKPIBuilder : KpiBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KpiKPIBuilderCompanion *companion __attribute__((swift_name("companion")));
- (id<KpiKPIAPI>)build __attribute__((swift_name("build()")));
- (KpiKPIBuilder *)setCertificateCertificate:(NSString *)certificate __attribute__((swift_name("setCertificate(certificate:)")));
- (KpiKPIBuilder *)setEventTimeRoundGranularityEventTimeRoundGranularity:(KpiKTimeUnit *)eventTimeRoundGranularity __attribute__((swift_name("setEventTimeRoundGranularity(eventTimeRoundGranularity:)")));
- (KpiKPIBuilder *)setEventTimeSendGranularityEventSendTimeGranularity:(KpiKTimeUnit *)eventSendTimeGranularity __attribute__((swift_name("setEventTimeSendGranularity(eventSendTimeGranularity:)")));
- (KpiKPIBuilder *)setEventsBatchSizeSize:(int32_t)size __attribute__((swift_name("setEventsBatchSize(size:)")));
- (KpiKPIBuilder *)setEventsHistorySizeSize:(int32_t)size __attribute__((swift_name("setEventsHistorySize(size:)")));
- (KpiKPIBuilder *)setHttpLogLevelHttpLogLevel:(KpiKPIHttpLogLevel *)httpLogLevel __attribute__((swift_name("setHttpLogLevel(httpLogLevel:)")));
- (KpiKPIBuilder *)setKPIClientStateProviderKpiClientStateProvider:(id<KpiKPIClientStateProvider>)kpiClientStateProvider __attribute__((swift_name("setKPIClientStateProvider(kpiClientStateProvider:)")));
- (KpiKPIBuilder *)setKPIFlushEventModeKpiSendEventMode:(KpiKPISendEventsMode *)kpiSendEventMode __attribute__((swift_name("setKPIFlushEventMode(kpiSendEventMode:)")));
- (KpiKPIBuilder *)setLoggingEnabledIsEnabled:(BOOL)isEnabled __attribute__((swift_name("setLoggingEnabled(isEnabled:)")));
- (KpiKPIBuilder *)setPreferenceNamePreferenceName:(NSString *)preferenceName __attribute__((swift_name("setPreferenceName(preferenceName:)")));
- (KpiKPIBuilder *)setRequestFormatRequestFormat:(KpiKPIRequestFormat *)requestFormat __attribute__((swift_name("setRequestFormat(requestFormat:)")));
- (KpiKPIBuilder *)setRequestTimeoutMsTimeout:(int64_t)timeout __attribute__((swift_name("setRequestTimeoutMs(timeout:)")));
- (KpiKPIBuilder *)setUserAgentUserAgent:(NSString * _Nullable)userAgent __attribute__((swift_name("setUserAgent(userAgent:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIBuilder.Companion")))
@interface KpiKPIBuilderCompanion : KpiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KpiKPIBuilderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_EVENTS_BATCH_SIZE __attribute__((swift_name("DEFAULT_EVENTS_BATCH_SIZE")));
@property (readonly) int32_t DEFAULT_EVENTS_HISTORY_SIZE __attribute__((swift_name("DEFAULT_EVENTS_HISTORY_SIZE")));
@property (readonly) int64_t DEFAULT_REQUEST_TIMEOUT_MS __attribute__((swift_name("DEFAULT_REQUEST_TIMEOUT_MS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIClientEvent")))
@interface KpiKPIClientEvent : KpiBase
- (instancetype)initWithEventCountry:(NSString * _Nullable)eventCountry eventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, NSString *> *)eventProperties eventInstant:(KpiKotlinx_datetimeInstant *)eventInstant __attribute__((swift_name("init(eventCountry:eventName:eventProperties:eventInstant:)"))) __attribute__((objc_designated_initializer));
- (KpiKPIClientEvent *)doCopyEventCountry:(NSString * _Nullable)eventCountry eventName:(NSString *)eventName eventProperties:(NSDictionary<NSString *, NSString *> *)eventProperties eventInstant:(KpiKotlinx_datetimeInstant *)eventInstant __attribute__((swift_name("doCopy(eventCountry:eventName:eventProperties:eventInstant:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable eventCountry __attribute__((swift_name("eventCountry")));
@property (readonly) KpiKotlinx_datetimeInstant *eventInstant __attribute__((swift_name("eventInstant")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, NSString *> *eventProperties __attribute__((swift_name("eventProperties")));
@end

__attribute__((swift_name("KPIClientStateProvider")))
@protocol KpiKPIClientStateProvider
@required
- (NSString * _Nullable)kpiAuthToken __attribute__((swift_name("kpiAuthToken()")));
- (NSArray<KpiKPIEndpoint *> *)kpiEndpoints __attribute__((swift_name("kpiEndpoints()")));
- (NSString *)projectToken __attribute__((swift_name("projectToken()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIEndpoint")))
@interface KpiKPIEndpoint : KpiBase
- (instancetype)initWithEndpoint:(NSString *)endpoint usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("init(endpoint:usePinnedCertificate:certificateCommonName:)"))) __attribute__((objc_designated_initializer));
- (KpiKPIEndpoint *)doCopyEndpoint:(NSString *)endpoint usePinnedCertificate:(BOOL)usePinnedCertificate certificateCommonName:(NSString * _Nullable)certificateCommonName __attribute__((swift_name("doCopy(endpoint:usePinnedCertificate:certificateCommonName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable certificateCommonName __attribute__((swift_name("certificateCommonName")));
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@property (readonly) BOOL usePinnedCertificate __attribute__((swift_name("usePinnedCertificate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIError")))
@interface KpiKPIError : KpiBase
- (instancetype)initWithDescription:(NSString *)description __attribute__((swift_name("init(description:)"))) __attribute__((objc_designated_initializer));
- (KpiKPIError *)doCopyDescription:(NSString *)description __attribute__((swift_name("doCopy(description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KpiKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KpiKotlinEnum<E> : KpiBase <KpiKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KpiKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIHttpLogLevel")))
@interface KpiKPIHttpLogLevel : KpiKotlinEnum<KpiKPIHttpLogLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KpiKPIHttpLogLevel *all __attribute__((swift_name("all")));
@property (class, readonly) KpiKPIHttpLogLevel *headers __attribute__((swift_name("headers")));
@property (class, readonly) KpiKPIHttpLogLevel *body __attribute__((swift_name("body")));
@property (class, readonly) KpiKPIHttpLogLevel *info __attribute__((swift_name("info")));
@property (class, readonly) KpiKPIHttpLogLevel *none __attribute__((swift_name("none")));
+ (KpiKotlinArray<KpiKPIHttpLogLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KpiKPIHttpLogLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIRequestFormat")))
@interface KpiKPIRequestFormat : KpiKotlinEnum<KpiKPIRequestFormat *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KpiKPIRequestFormat *elastic __attribute__((swift_name("elastic")));
@property (class, readonly) KpiKPIRequestFormat *kape __attribute__((swift_name("kape")));
+ (KpiKotlinArray<KpiKPIRequestFormat *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KpiKPIRequestFormat *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPISendEventsMode")))
@interface KpiKPISendEventsMode : KpiKotlinEnum<KpiKPISendEventsMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KpiKPISendEventsMode *perEvent __attribute__((swift_name("perEvent")));
@property (class, readonly) KpiKPISendEventsMode *perBatch __attribute__((swift_name("perBatch")));
+ (KpiKotlinArray<KpiKPISendEventsMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KpiKPISendEventsMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPILogger")))
@interface KpiKPILogger : KpiBase
- (instancetype)initWithIsLoggingEnabled:(KpiBoolean *(^)(void))isLoggingEnabled __attribute__((swift_name("init(isLoggingEnabled:)"))) __attribute__((objc_designated_initializer));
- (void)logDebugTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logDebug(tag:message:)")));
- (void)logErrorTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logError(tag:message:)")));
- (void)logInfoTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logInfo(tag:message:)")));
- (void)logWarningTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logWarning(tag:message:)")));
- (void)logWtfTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("logWtf(tag:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KPIUtils")))
@interface KpiKPIUtils : KpiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kPIUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KpiKPIUtils *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KTimeUnit")))
@interface KpiKTimeUnit : KpiKotlinEnum<KpiKTimeUnit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KpiKTimeUnitCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KpiKTimeUnit *nanoseconds __attribute__((swift_name("nanoseconds")));
@property (class, readonly) KpiKTimeUnit *microseconds __attribute__((swift_name("microseconds")));
@property (class, readonly) KpiKTimeUnit *milliseconds __attribute__((swift_name("milliseconds")));
@property (class, readonly) KpiKTimeUnit *seconds __attribute__((swift_name("seconds")));
@property (class, readonly) KpiKTimeUnit *minutes __attribute__((swift_name("minutes")));
@property (class, readonly) KpiKTimeUnit *hours __attribute__((swift_name("hours")));
@property (class, readonly) KpiKTimeUnit *days __attribute__((swift_name("days")));
+ (KpiKotlinArray<KpiKTimeUnit *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KpiKTimeUnit *> *entries __attribute__((swift_name("entries")));
- (int64_t)convertSourceDuration:(int64_t)sourceDuration sourceUnit:(KpiKTimeUnit *)sourceUnit __attribute__((swift_name("convert(sourceDuration:sourceUnit:)")));
- (int64_t)toDaysDuration:(int64_t)duration __attribute__((swift_name("toDays(duration:)")));
- (int64_t)toHoursDuration:(int64_t)duration __attribute__((swift_name("toHours(duration:)")));
- (int64_t)toMicrosDuration:(int64_t)duration __attribute__((swift_name("toMicros(duration:)")));
- (int64_t)toMillisDuration:(int64_t)duration __attribute__((swift_name("toMillis(duration:)")));
- (int64_t)toMinutesDuration:(int64_t)duration __attribute__((swift_name("toMinutes(duration:)")));
- (int64_t)toNanosDuration:(int64_t)duration __attribute__((swift_name("toNanos(duration:)")));
- (int64_t)toSecondsDuration:(int64_t)duration __attribute__((swift_name("toSeconds(duration:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KTimeUnit.Companion")))
@interface KpiKTimeUnitCompanion : KpiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KpiKTimeUnitCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface KpiKotlinx_datetimeInstant : KpiBase <KpiKotlinComparable>
@property (class, readonly, getter=companion) KpiKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KpiKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KpiKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(KpiKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (KpiKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KpiKotlinEnumCompanion : KpiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KpiKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KpiKotlinArray<T> : KpiBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KpiInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KpiKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface KpiKotlinx_datetimeInstantCompanion : KpiBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KpiKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (KpiKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (KpiKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (KpiKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (KpiKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (KpiKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<KpiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) KpiKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) KpiKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KpiKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KpiKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KpiKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KpiKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KpiKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KpiKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KpiKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KpiKotlinx_serialization_coreKSerializer <KpiKotlinx_serialization_coreSerializationStrategy, KpiKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KpiKotlinx_serialization_coreEncoder
@required
- (id<KpiKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KpiKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KpiKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KpiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KpiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KpiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KpiKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<KpiKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KpiKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<KpiKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) KpiKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KpiKotlinx_serialization_coreDecoder
@required
- (id<KpiKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KpiKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KpiKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KpiKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KpiKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KpiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KpiKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KpiKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KpiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KpiKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KpiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KpiKotlinx_serialization_coreSerializersModule : KpiBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KpiKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KpiKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KpiKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KpiKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KpiKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KpiKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KpiKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KpiKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KpiKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KpiKotlinx_serialization_coreSerialKind : KpiBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KpiKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KpiKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KpiKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KpiKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KpiKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KpiKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KpiKotlinNothing : KpiBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KpiKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KpiKotlinKClass>)kClass provider:(id<KpiKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KpiKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KpiKotlinKClass>)kClass serializer:(id<KpiKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KpiKotlinKClass>)baseClass actualClass:(id<KpiKotlinKClass>)actualClass actualSerializer:(id<KpiKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KpiKotlinKClass>)baseClass defaultDeserializerProvider:(id<KpiKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KpiKotlinKClass>)baseClass defaultDeserializerProvider:(id<KpiKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KpiKotlinKClass>)baseClass defaultSerializerProvider:(id<KpiKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KpiKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KpiKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KpiKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KpiKotlinKClass <KpiKotlinKDeclarationContainer, KpiKotlinKAnnotatedElement, KpiKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
