//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Salton/Documents/Projects/jackson-annotations/src/main/java/com/fasterxml/jackson/annotation/JsonView.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonView")
#ifdef RESTRICT_ComFasterxmlJacksonAnnotationJsonView
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonView 0
#else
#define INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonView 1
#endif
#undef RESTRICT_ComFasterxmlJacksonAnnotationJsonView

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (ComFasterxmlJacksonAnnotationJsonView_) && (INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonView || defined(INCLUDE_ComFasterxmlJacksonAnnotationJsonView))
#define ComFasterxmlJacksonAnnotationJsonView_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief Annotation used for indicating view(s) that the property
  that is defined by method or field annotated is part of.
 <p>
  An example annotation would be:
 @code

    &#064;JsonView(BasicView.class)
 
@endcode
  which would specify that property annotated would be included
  when processing (serializing, deserializing) View identified
  by <code>BasicView.class</code> (or its sub-class).
  If multiple View class identifiers are included, property will
  be part of all of them.
 <p>
  Starting with 2.9, it is also possible to use this annotation on
  POJO classes to indicate the default view(s) for properties of the
  type, unless overridden by per-property annotation.
 */
@protocol ComFasterxmlJacksonAnnotationJsonView < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface ComFasterxmlJacksonAnnotationJsonView : NSObject < ComFasterxmlJacksonAnnotationJsonView > {
 @public
  IOSObjectArray *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(ComFasterxmlJacksonAnnotationJsonView)

FOUNDATION_EXPORT id<ComFasterxmlJacksonAnnotationJsonView> create_ComFasterxmlJacksonAnnotationJsonView(IOSObjectArray *value);

J2OBJC_TYPE_LITERAL_HEADER(ComFasterxmlJacksonAnnotationJsonView)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComFasterxmlJacksonAnnotationJsonView")
