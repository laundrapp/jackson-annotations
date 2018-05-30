//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Salton/Documents/Projects/jackson-annotations/src/main/java/com/fasterxml/jackson/annotation/ObjectIdGenerators.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators")
#ifdef RESTRICT_ComFasterxmlJacksonAnnotationObjectIdGenerators
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators 0
#else
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators 1
#endif
#undef RESTRICT_ComFasterxmlJacksonAnnotationObjectIdGenerators
#ifdef INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator
#define INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_Base 1
#endif
#ifdef INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator
#define INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_Base 1
#endif
#ifdef INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator
#define INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_Base 1
#endif
#ifdef INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_PropertyGenerator
#define INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_Base 1
#endif

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComFasterxmlJacksonAnnotationObjectIdGenerators_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators || defined(INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators))
#define ComFasterxmlJacksonAnnotationObjectIdGenerators_

/*!
 @brief Container class for standard <code>ObjectIdGenerator</code> implementations:
 <ul>
   <li><code>IntSequenceGenerator</code>
   <li><code>PropertyGenerator</code>
   <li><code>StringIdGenerator</code> (since 2.7)
   <li><code>UUIDGenerator</code>
 </ul>
 <p>
  NOTE: <code>PropertyGenerator</code> applicability is limited in one case: it can only
  be used on polymorphic base types (ones indicated using <code>JsonTypeInfo</code> or
  default typing) via class annotations: property annotation will fail due to lack
  of access to property, needed to determine type of Object Id for deserialization.
 This limitation may be lifted in future versions but it is the limitation at least
  up to and including Jackson 2.9.
 */
@interface ComFasterxmlJacksonAnnotationObjectIdGenerators : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationObjectIdGenerators)

FOUNDATION_EXPORT void ComFasterxmlJacksonAnnotationObjectIdGenerators_init(ComFasterxmlJacksonAnnotationObjectIdGenerators *self);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators *new_ComFasterxmlJacksonAnnotationObjectIdGenerators_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators *create_ComFasterxmlJacksonAnnotationObjectIdGenerators_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationObjectIdGenerators)

#endif

#if !defined (ComFasterxmlJacksonAnnotationObjectIdGenerators_Base_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators || defined(INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_Base))
#define ComFasterxmlJacksonAnnotationObjectIdGenerators_Base_

#define RESTRICT_ComFasterxmlJacksonAnnotationObjectIdGenerator 1
#define INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerator 1
#include "com/fasterxml/jackson/annotation/ObjectIdGenerator.h"

@class IOSClass;

/*!
 @brief Shared base class for concrete implementations.
 */
@interface ComFasterxmlJacksonAnnotationObjectIdGenerators_Base : ComFasterxmlJacksonAnnotationObjectIdGenerator {
 @public
  IOSClass *_scope_;
}

#pragma mark Public

- (jboolean)canUseForWithComFasterxmlJacksonAnnotationObjectIdGenerator:(ComFasterxmlJacksonAnnotationObjectIdGenerator *)gen;

- (id)generateIdWithId:(id)forPojo;

- (IOSClass *)getScope;

#pragma mark Protected

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)scope;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationObjectIdGenerators_Base)

J2OBJC_FIELD_SETTER(ComFasterxmlJacksonAnnotationObjectIdGenerators_Base, _scope_, IOSClass *)

FOUNDATION_EXPORT void ComFasterxmlJacksonAnnotationObjectIdGenerators_Base_initWithIOSClass_(ComFasterxmlJacksonAnnotationObjectIdGenerators_Base *self, IOSClass *scope);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationObjectIdGenerators_Base)

#endif

#if !defined (ComFasterxmlJacksonAnnotationObjectIdGenerators_None_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators || defined(INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_None))
#define ComFasterxmlJacksonAnnotationObjectIdGenerators_None_

#define RESTRICT_ComFasterxmlJacksonAnnotationObjectIdGenerator 1
#define INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerator 1
#include "com/fasterxml/jackson/annotation/ObjectIdGenerator.h"

/*!
 @brief Abstract marker class used to allow explicitly specifying
  that no generator is used; which also implies that no
  Object Id is to be included or used.
 */
@interface ComFasterxmlJacksonAnnotationObjectIdGenerators_None : ComFasterxmlJacksonAnnotationObjectIdGenerator

#pragma mark Public

- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationObjectIdGenerators_None)

FOUNDATION_EXPORT void ComFasterxmlJacksonAnnotationObjectIdGenerators_None_init(ComFasterxmlJacksonAnnotationObjectIdGenerators_None *self);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationObjectIdGenerators_None)

#endif

#if !defined (ComFasterxmlJacksonAnnotationObjectIdGenerators_PropertyGenerator_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators || defined(INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_PropertyGenerator))
#define ComFasterxmlJacksonAnnotationObjectIdGenerators_PropertyGenerator_

@class IOSClass;

/*!
 @brief Abstract place-holder class which is used to denote case
  where Object Identifier to use comes from a POJO property
  (getter method or field).If so, value is written directly
  during serialization, and used as-is during deserialization.
 <p>
  Actual implementation class is part of <code>databind</code>
  package.
 */
@interface ComFasterxmlJacksonAnnotationObjectIdGenerators_PropertyGenerator : ComFasterxmlJacksonAnnotationObjectIdGenerators_Base

#pragma mark Protected

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)scope;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationObjectIdGenerators_PropertyGenerator)

FOUNDATION_EXPORT void ComFasterxmlJacksonAnnotationObjectIdGenerators_PropertyGenerator_initWithIOSClass_(ComFasterxmlJacksonAnnotationObjectIdGenerators_PropertyGenerator *self, IOSClass *scope);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationObjectIdGenerators_PropertyGenerator)

#endif

#if !defined (ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators || defined(INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator))
#define ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator_

@class ComFasterxmlJacksonAnnotationObjectIdGenerator;
@class ComFasterxmlJacksonAnnotationObjectIdGenerator_IdKey;
@class IOSClass;
@class JavaLangInteger;

/*!
 @brief Simple sequence-number based generator, which uses basic Java 
 <code>int</code>s (starting with value 1) as Object Identifiers.
 */
@interface ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator : ComFasterxmlJacksonAnnotationObjectIdGenerators_Base {
 @public
  jint _nextValue_;
}

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)scope
                                   withInt:(jint)fv;

- (ComFasterxmlJacksonAnnotationObjectIdGenerator *)forScopeWithIOSClass:(IOSClass *)scope;

- (JavaLangInteger *)generateIdWithId:(id)forPojo;

- (ComFasterxmlJacksonAnnotationObjectIdGenerator_IdKey *)keyWithId:(id)key;

- (ComFasterxmlJacksonAnnotationObjectIdGenerator *)newForSerializationWithId:(id)context OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

- (jint)initialValue OBJC_METHOD_FAMILY_NONE;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithIOSClass:(IOSClass *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator)

FOUNDATION_EXPORT void ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator_init(ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator *self);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator *new_ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator *create_ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator_init(void);

FOUNDATION_EXPORT void ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator_initWithIOSClass_withInt_(ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator *self, IOSClass *scope, jint fv);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator *new_ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator_initWithIOSClass_withInt_(IOSClass *scope, jint fv) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator *create_ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator_initWithIOSClass_withInt_(IOSClass *scope, jint fv);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationObjectIdGenerators_IntSequenceGenerator)

#endif

#if !defined (ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators || defined(INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator))
#define ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator_

@class ComFasterxmlJacksonAnnotationObjectIdGenerator;
@class ComFasterxmlJacksonAnnotationObjectIdGenerator_IdKey;
@class IOSClass;
@class JavaUtilUUID;

/*!
 @brief Implementation that just uses <code>java.util.UUID</code>s as reliably
  unique identifiers: downside is that resulting String is
  36 characters long.
 <p>
  One difference to other generators is that scope is always
  set as <code>Object.class</code> (regardless of arguments): this
  because UUIDs are globally unique, and scope has no meaning.
 */
@interface ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator : ComFasterxmlJacksonAnnotationObjectIdGenerators_Base

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Since UUIDs are always unique, let's fully ignore scope definition
 */
- (jboolean)canUseForWithComFasterxmlJacksonAnnotationObjectIdGenerator:(ComFasterxmlJacksonAnnotationObjectIdGenerator *)gen;

/*!
 @brief Can just return base instance since this is essentially scopeless
 */
- (ComFasterxmlJacksonAnnotationObjectIdGenerator *)forScopeWithIOSClass:(IOSClass *)scope;

- (JavaUtilUUID *)generateIdWithId:(id)forPojo;

- (ComFasterxmlJacksonAnnotationObjectIdGenerator_IdKey *)keyWithId:(id)key;

/*!
 @brief Can just return base instance since this is essentially scopeless
 */
- (ComFasterxmlJacksonAnnotationObjectIdGenerator *)newForSerializationWithId:(id)context OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator)

FOUNDATION_EXPORT void ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator_init(ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator *self);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator *new_ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator *create_ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationObjectIdGenerators_UUIDGenerator)

#endif

#if !defined (ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators || defined(INCLUDE_ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator))
#define ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator_

@class ComFasterxmlJacksonAnnotationObjectIdGenerator;
@class ComFasterxmlJacksonAnnotationObjectIdGenerator_IdKey;
@class IOSClass;

/*!
 @brief Implementation that will accept arbitrary (but unique) String Ids on
  deserialization, and (by default) use random UUID generation similar
  to <code>UUIDGenerator</code> for generation ids.
 <p>
  This generator is most useful for cases where another system creates
  String Ids (of arbitrary structure, if any), and Jackson only needs to
  keep track of id-to-Object mapping. Generation also works, although if
  UUIDs are always used, <code>UUIDGenerator</code> is a better match as it
  will also validate ids being used.
 @since 2.7
 */
@interface ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator : ComFasterxmlJacksonAnnotationObjectIdGenerators_Base

#pragma mark Public

- (instancetype __nonnull)init;

- (jboolean)canUseForWithComFasterxmlJacksonAnnotationObjectIdGenerator:(ComFasterxmlJacksonAnnotationObjectIdGenerator *)gen;

- (ComFasterxmlJacksonAnnotationObjectIdGenerator *)forScopeWithIOSClass:(IOSClass *)scope;

- (NSString *)generateIdWithId:(id)forPojo;

- (ComFasterxmlJacksonAnnotationObjectIdGenerator_IdKey *)keyWithId:(id)key;

- (ComFasterxmlJacksonAnnotationObjectIdGenerator *)newForSerializationWithId:(id)context OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator)

FOUNDATION_EXPORT void ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator_init(ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator *self);

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator *new_ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator *create_ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator_init(void);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationObjectIdGenerators_StringIdGenerator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationObjectIdGenerators")
