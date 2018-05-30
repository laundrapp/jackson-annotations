//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Salton/Documents/Projects/jackson-annotations/src/main/java/com/fasterxml/jackson/annotation/JsonSetter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonSetter")
#ifdef RESTRICT_ComFasterxmlJacksonAnnotationJsonSetter
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonSetter 0
#else
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonSetter 1
#endif
#undef RESTRICT_ComFasterxmlJacksonAnnotationJsonSetter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComFasterxmlJacksonAnnotationJsonSetter_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonSetter || defined(INCLUDE_ComFasterxmlJacksonAnnotationJsonSetter))
#define ComFasterxmlJacksonAnnotationJsonSetter_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class ComFasterxmlJacksonAnnotationNulls;
@class IOSClass;

/*!
 @brief Annotation that can be used to define a non-static,
  single-argument method to be used as a "setter" for a logical property
  as an alternative to recommended 
 <code>JsonProperty</code> annotation;
  or (as of 2.9 and later), specify additional aspects of the
  assigning property a value during serialization.
 */
@protocol ComFasterxmlJacksonAnnotationJsonSetter < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;
@property (readonly) ComFasterxmlJacksonAnnotationNulls *nulls;
@property (readonly) ComFasterxmlJacksonAnnotationNulls *contentNulls;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComFasterxmlJacksonAnnotationJsonSetter : NSObject < ComFasterxmlJacksonAnnotationJsonSetter > {
 @public
  NSString *value_;
  ComFasterxmlJacksonAnnotationNulls *nulls_;
  ComFasterxmlJacksonAnnotationNulls *contentNulls_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationJsonSetter)

FOUNDATION_EXPORT id<ComFasterxmlJacksonAnnotationJsonSetter> create_ComFasterxmlJacksonAnnotationJsonSetter(ComFasterxmlJacksonAnnotationNulls *contentNulls, ComFasterxmlJacksonAnnotationNulls *nulls, NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationJsonSetter)

#endif

#if !defined (ComFasterxmlJacksonAnnotationJsonSetter_Value_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonSetter || defined(INCLUDE_ComFasterxmlJacksonAnnotationJsonSetter_Value))
#define ComFasterxmlJacksonAnnotationJsonSetter_Value_

#define RESTRICT_ComFasterxmlJacksonAnnotationJacksonAnnotationValue 1
#define INCLUDE_ComFasterxmlJacksonAnnotationJacksonAnnotationValue 1
#include "com/fasterxml/jackson/annotation/JacksonAnnotationValue.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComFasterxmlJacksonAnnotationNulls;
@class IOSClass;
@protocol ComFasterxmlJacksonAnnotationJsonSetter;

/*!
 @brief Helper class used to contain information from a single <code>JsonSetter</code>
  annotation, as well as to provide possible overrides from non-annotation sources.
 @since 2.9
 */
@interface ComFasterxmlJacksonAnnotationJsonSetter_Value : NSObject < ComFasterxmlJacksonAnnotationJacksonAnnotationValue, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Factory method that may be used (although is NOT the recommended way)
  to construct an instance from a full set of properties.Most users would
  be better of starting by <code>empty()</code> instance and using `withXxx`/`withoutXxx`
  methods, as this factory method may need to be changed if new properties
  are added in <code>JsonIgnoreProperties</code> annotation.
 */
+ (ComFasterxmlJacksonAnnotationJsonSetter_Value *)constructWithComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)nulls
                                                            withComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)contentNulls;

/*!
 @brief Accessor for default instances which has "empty" settings; that is:
 <ul>
  <li>Null handling using global defaults, <code>Nulls.DEFAULT</code>.
 </li>
  </ul>
 */
+ (ComFasterxmlJacksonAnnotationJsonSetter_Value *)empty;

- (jboolean)isEqual:(id)o;

+ (ComFasterxmlJacksonAnnotationJsonSetter_Value *)forContentNullsWithComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)nulls;

+ (ComFasterxmlJacksonAnnotationJsonSetter_Value *)forValueNullsWithComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)nulls;

+ (ComFasterxmlJacksonAnnotationJsonSetter_Value *)forValueNullsWithComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)nulls
                                                                withComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)contentNulls;

+ (ComFasterxmlJacksonAnnotationJsonSetter_Value *)fromWithComFasterxmlJacksonAnnotationJsonSetter:(id<ComFasterxmlJacksonAnnotationJsonSetter>)src;

- (ComFasterxmlJacksonAnnotationNulls *)getContentNulls;

- (ComFasterxmlJacksonAnnotationNulls *)getValueNulls;

- (NSUInteger)hash;

/*!
 @brief Helper method that will try to combine values from two <code>Value</code>
  instances, using one as base settings, and the other as overrides
  to use instead of base values when defined; base values are only
  use if override does not specify a value (matching value is null
  or logically missing).
 Note that one or both of value instances may be `null`, directly;
  if both are `null`, result will also be `null`; otherwise never null.
 */
+ (ComFasterxmlJacksonAnnotationJsonSetter_Value *)mergeWithComFasterxmlJacksonAnnotationJsonSetter_Value:(ComFasterxmlJacksonAnnotationJsonSetter_Value *)base
                                                        withComFasterxmlJacksonAnnotationJsonSetter_Value:(ComFasterxmlJacksonAnnotationJsonSetter_Value *)overrides;

/*!
 @brief Returns same as <code>getContentNulls()</code> unless value would be 
 <code>Nulls.DEFAULT</code> in which case `null` is returned.
 */
- (ComFasterxmlJacksonAnnotationNulls *)nonDefaultContentNulls;

/*!
 @brief Returns same as <code>getValueNulls()</code> unless value would be 
 <code>Nulls.DEFAULT</code> in which case `null` is returned.
 */
- (ComFasterxmlJacksonAnnotationNulls *)nonDefaultValueNulls;

- (NSString *)description;

- (IOSClass *)valueFor;

- (ComFasterxmlJacksonAnnotationJsonSetter_Value *)withContentNullsWithComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)nulls;

/*!
 @brief Mutant factory method that merges values of this value with given override
  values, so that any explicitly defined inclusion in overrides has precedence over
  settings of this value instance.If no overrides exist will return <code>this</code>
  instance; otherwise new <code>Value</code> with changed inclusion values.
 */
- (ComFasterxmlJacksonAnnotationJsonSetter_Value *)withOverridesWithComFasterxmlJacksonAnnotationJsonSetter_Value:(ComFasterxmlJacksonAnnotationJsonSetter_Value *)overrides;

- (ComFasterxmlJacksonAnnotationJsonSetter_Value *)withValueNullsWithComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)nulls;

- (ComFasterxmlJacksonAnnotationJsonSetter_Value *)withValueNullsWithComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)valueNulls
                                                                 withComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)contentNulls;

#pragma mark Protected

- (instancetype __nonnull)initWithComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)nulls
                              withComFasterxmlJacksonAnnotationNulls:(ComFasterxmlJacksonAnnotationNulls *)contentNulls;

- (id)readResolve;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(ComFasterxmlJacksonAnnotationJsonSetter_Value)

/*!
 @brief Default instance used in place of "default settings".
 */
inline ComFasterxmlJacksonAnnotationJsonSetter_Value *ComFasterxmlJacksonAnnotationJsonSetter_Value_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *ComFasterxmlJacksonAnnotationJsonSetter_Value_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComFasterxmlJacksonAnnotationJsonSetter_Value, EMPTY, ComFasterxmlJacksonAnnotationJsonSetter_Value *)

FOUNDATION_EXPORT void ComFasterxmlJacksonAnnotationJsonSetter_Value_initWithComFasterxmlJacksonAnnotationNulls_withComFasterxmlJacksonAnnotationNulls_(ComFasterxmlJacksonAnnotationJsonSetter_Value *self, ComFasterxmlJacksonAnnotationNulls *nulls, ComFasterxmlJacksonAnnotationNulls *contentNulls);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *new_ComFasterxmlJacksonAnnotationJsonSetter_Value_initWithComFasterxmlJacksonAnnotationNulls_withComFasterxmlJacksonAnnotationNulls_(ComFasterxmlJacksonAnnotationNulls *nulls, ComFasterxmlJacksonAnnotationNulls *contentNulls) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *create_ComFasterxmlJacksonAnnotationJsonSetter_Value_initWithComFasterxmlJacksonAnnotationNulls_withComFasterxmlJacksonAnnotationNulls_(ComFasterxmlJacksonAnnotationNulls *nulls, ComFasterxmlJacksonAnnotationNulls *contentNulls);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *ComFasterxmlJacksonAnnotationJsonSetter_Value_fromWithComFasterxmlJacksonAnnotationJsonSetter_(id<ComFasterxmlJacksonAnnotationJsonSetter> src);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *ComFasterxmlJacksonAnnotationJsonSetter_Value_constructWithComFasterxmlJacksonAnnotationNulls_withComFasterxmlJacksonAnnotationNulls_(ComFasterxmlJacksonAnnotationNulls *nulls, ComFasterxmlJacksonAnnotationNulls *contentNulls);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *ComFasterxmlJacksonAnnotationJsonSetter_Value_empty(void);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *ComFasterxmlJacksonAnnotationJsonSetter_Value_mergeWithComFasterxmlJacksonAnnotationJsonSetter_Value_withComFasterxmlJacksonAnnotationJsonSetter_Value_(ComFasterxmlJacksonAnnotationJsonSetter_Value *base, ComFasterxmlJacksonAnnotationJsonSetter_Value *overrides);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *ComFasterxmlJacksonAnnotationJsonSetter_Value_forValueNullsWithComFasterxmlJacksonAnnotationNulls_(ComFasterxmlJacksonAnnotationNulls *nulls);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *ComFasterxmlJacksonAnnotationJsonSetter_Value_forValueNullsWithComFasterxmlJacksonAnnotationNulls_withComFasterxmlJacksonAnnotationNulls_(ComFasterxmlJacksonAnnotationNulls *nulls, ComFasterxmlJacksonAnnotationNulls *contentNulls);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationJsonSetter_Value *ComFasterxmlJacksonAnnotationJsonSetter_Value_forContentNullsWithComFasterxmlJacksonAnnotationNulls_(ComFasterxmlJacksonAnnotationNulls *nulls);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationJsonSetter_Value)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonSetter")
