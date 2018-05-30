//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Salton/Documents/Projects/jackson-annotations/src/main/java/com/fasterxml/jackson/annotation/JsonFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonFilter")
#ifdef RESTRICT_ComFasterxmlJacksonAnnotationJsonFilter
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonFilter 0
#else
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonFilter 1
#endif
#undef RESTRICT_ComFasterxmlJacksonAnnotationJsonFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComFasterxmlJacksonAnnotationJsonFilter_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonFilter || defined(INCLUDE_ComFasterxmlJacksonAnnotationJsonFilter))
#define ComFasterxmlJacksonAnnotationJsonFilter_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Annotation used to indicate which logical filter is to be used
  for filtering out properties of type (class) annotated;
  association made by this annotation declaring ids of filters,
  and  <code>com.fasterxml.jackson.databind.ObjectMapper</code> (or objects
  it delegates to) providing matching filters by id.
 <p>
  Filters to use are usually of type 
 <code>com.fasterxml.jackson.databind.ser.BeanPropertyFilter</code> and
  are registered through <code>com.fasterxml.jackson.databind.ObjectMapper</code>
 <p>
  Since 2.3, this annotation can also be used on properties (fields, methods,
  constructor parameters).
 */
@protocol ComFasterxmlJacksonAnnotationJsonFilter < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComFasterxmlJacksonAnnotationJsonFilter : NSObject < ComFasterxmlJacksonAnnotationJsonFilter > {
 @public
  NSString *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationJsonFilter)

FOUNDATION_EXPORT id<ComFasterxmlJacksonAnnotationJsonFilter> create_ComFasterxmlJacksonAnnotationJsonFilter(NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationJsonFilter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonFilter")
