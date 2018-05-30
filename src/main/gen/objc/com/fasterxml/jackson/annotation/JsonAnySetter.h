//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Salton/Documents/Projects/jackson-annotations/src/main/java/com/fasterxml/jackson/annotation/JsonAnySetter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonAnySetter")
#ifdef RESTRICT_ComFasterxmlJacksonAnnotationJsonAnySetter
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonAnySetter 0
#else
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonAnySetter 1
#endif
#undef RESTRICT_ComFasterxmlJacksonAnnotationJsonAnySetter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComFasterxmlJacksonAnnotationJsonAnySetter_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonAnySetter || defined(INCLUDE_ComFasterxmlJacksonAnnotationJsonAnySetter))
#define ComFasterxmlJacksonAnnotationJsonAnySetter_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Marker annotation that can be used to define a logical "any setter" mutator --
  either using non-static
  two-argument method (first argument name of property, second value
  to set) or a field (of type <code>java.util.Map</code> or POJO) -
  to be used as a "fallback" handler
  for all otherwise unrecognized properties found from JSON content.
 It is similar to <code>javax.xml.bind.annotation.XmlAnyElement</code>
  in behavior; and can only be used to denote a single property
  per type.
 <p>
  If used, all otherwise unmapped key-value pairs from JSON Object values
  are added using mutator.
 <p>
  NOTE: ability to annotated fields was added in version 2.8; earlier only
  methods could be annotated.
 */
@protocol ComFasterxmlJacksonAnnotationJsonAnySetter < JavaLangAnnotationAnnotation >

@property (readonly) jboolean enabled;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComFasterxmlJacksonAnnotationJsonAnySetter : NSObject < ComFasterxmlJacksonAnnotationJsonAnySetter > {
 @public
  jboolean enabled_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationJsonAnySetter)

FOUNDATION_EXPORT id<ComFasterxmlJacksonAnnotationJsonAnySetter> create_ComFasterxmlJacksonAnnotationJsonAnySetter(jboolean enabled);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationJsonAnySetter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonAnySetter")
