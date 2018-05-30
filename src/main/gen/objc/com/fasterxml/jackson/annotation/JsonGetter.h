//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Salton/Documents/Projects/jackson-annotations/src/main/java/com/fasterxml/jackson/annotation/JsonGetter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonGetter")
#ifdef RESTRICT_ComFasterxmlJacksonAnnotationJsonGetter
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonGetter 0
#else
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonGetter 1
#endif
#undef RESTRICT_ComFasterxmlJacksonAnnotationJsonGetter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComFasterxmlJacksonAnnotationJsonGetter_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonGetter || defined(INCLUDE_ComFasterxmlJacksonAnnotationJsonGetter))
#define ComFasterxmlJacksonAnnotationJsonGetter_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Marker annotation that can be used to define a non-static,
  no-argument value-returning (non-void) method to be used as a "getter"
  for a logical property.
 It can be used as an alternative to more general 
 <code>JsonProperty</code> annotation (which is the recommended choice in
  general case).
 <p>
  Getter means that when serializing Object instance of class that has
  this method (possibly inherited from a super class), a call is made
  through the method, and return value will be serialized as value of
  the property.
 */
@protocol ComFasterxmlJacksonAnnotationJsonGetter < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComFasterxmlJacksonAnnotationJsonGetter : NSObject < ComFasterxmlJacksonAnnotationJsonGetter > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationJsonGetter)

FOUNDATION_EXPORT id<ComFasterxmlJacksonAnnotationJsonGetter> create_ComFasterxmlJacksonAnnotationJsonGetter(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationJsonGetter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonGetter")
