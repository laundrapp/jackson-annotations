//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Salton/Documents/Projects/jackson-annotations/src/main/java/com/fasterxml/jackson/annotation/JsonRootName.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "com/fasterxml/jackson/annotation/JacksonAnnotation.h"
#include "com/fasterxml/jackson/annotation/JsonRootName.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/annotation/ElementType.h"
#include "java/lang/annotation/Retention.h"
#include "java/lang/annotation/RetentionPolicy.h"
#include "java/lang/annotation/Target.h"

__attribute__((unused)) static IOSObjectArray *ComFasterxmlJacksonAnnotationJsonRootName__Annotations$0(void);

@implementation ComFasterxmlJacksonAnnotationJsonRootName

@synthesize value = value_;
@synthesize namespace__ = namespace___;

+ (NSString *)namespace__Default {
  return @"";
}

- (IOSClass *)annotationType {
  return ComFasterxmlJacksonAnnotationJsonRootName_class_();
}

- (NSString *)description {
  return [NSString stringWithFormat:@"@com.fasterxml.jackson.annotation.JsonRootName(value=%@, namespace__=%@)", value_, namespace___];
}

- (jboolean)isEqual:(id)obj {
  return JreAnnotationEquals(self, obj);
}

- (NSUInteger)hash {
  return JreAnnotationHashCode(self);
}

- (void)dealloc {
  RELEASE_(value_);
  RELEASE_(namespace___);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LNSString;", 0x401, -1, -1, -1, -1, -1, -1 },
    { NULL, "LNSString;", 0x401, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(value);
  methods[1].selector = @selector(namespace);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "value_", "LNSString;", .constantValue.asLong = 0, 0x1000, -1, -1, -1, -1 },
    { "namespace___", "LNSString;", .constantValue.asLong = 0, 0x1000, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { (void *)&ComFasterxmlJacksonAnnotationJsonRootName__Annotations$0 };
  static const J2ObjcClassInfo _ComFasterxmlJacksonAnnotationJsonRootName = { "JsonRootName", "com.fasterxml.jackson.annotation", ptrTable, methods, fields, 7, 0x2609, 2, 2, -1, -1, -1, -1, 0 };
  return &_ComFasterxmlJacksonAnnotationJsonRootName;
}

@end

id<ComFasterxmlJacksonAnnotationJsonRootName> create_ComFasterxmlJacksonAnnotationJsonRootName(NSString *namespace__, NSString *value) {
  ComFasterxmlJacksonAnnotationJsonRootName *self = AUTORELEASE([[ComFasterxmlJacksonAnnotationJsonRootName alloc] init]);
  self->namespace___ = RETAIN_(namespace__);
  self->value_ = RETAIN_(value);
  return self;
}

IOSObjectArray *ComFasterxmlJacksonAnnotationJsonRootName__Annotations$0() {
  return [IOSObjectArray arrayWithObjects:(id[]){ create_JavaLangAnnotationTarget([IOSObjectArray arrayWithObjects:(id[]){ JreLoadEnum(JavaLangAnnotationElementType, ANNOTATION_TYPE), JreLoadEnum(JavaLangAnnotationElementType, TYPE) } count:2 type:JavaLangAnnotationElementType_class_()]), create_JavaLangAnnotationRetention(JreLoadEnum(JavaLangAnnotationRetentionPolicy, RUNTIME)), create_ComFasterxmlJacksonAnnotationJacksonAnnotation() } count:3 type:JavaLangAnnotationAnnotation_class_()];
}

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(ComFasterxmlJacksonAnnotationJsonRootName)
