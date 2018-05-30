//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Salton/Documents/Projects/jackson-annotations/src/main/java/com/fasterxml/jackson/annotation/OptBoolean.java
//

#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "com/fasterxml/jackson/annotation/OptBoolean.h"
#include "java/lang/Boolean.h"
#include "java/lang/Enum.h"
#include "java/lang/IllegalArgumentException.h"

__attribute__((unused)) static void ComFasterxmlJacksonAnnotationOptBoolean_initWithNSString_withInt_(ComFasterxmlJacksonAnnotationOptBoolean *self, NSString *__name, jint __ordinal);

J2OBJC_INITIALIZED_DEFN(ComFasterxmlJacksonAnnotationOptBoolean)

ComFasterxmlJacksonAnnotationOptBoolean *ComFasterxmlJacksonAnnotationOptBoolean_values_[3];

@implementation ComFasterxmlJacksonAnnotationOptBoolean

- (JavaLangBoolean *)asBoolean {
  if (self == JreEnum(ComFasterxmlJacksonAnnotationOptBoolean, DEFAULT)) return nil;
  return (self == JreEnum(ComFasterxmlJacksonAnnotationOptBoolean, TRUE)) ? JreLoadStatic(JavaLangBoolean, TRUE) : JreLoadStatic(JavaLangBoolean, FALSE);
}

- (jboolean)asPrimitive {
  return self == JreEnum(ComFasterxmlJacksonAnnotationOptBoolean, TRUE);
}

+ (ComFasterxmlJacksonAnnotationOptBoolean *)fromBooleanWithJavaLangBoolean:(JavaLangBoolean *)b {
  return ComFasterxmlJacksonAnnotationOptBoolean_fromBooleanWithJavaLangBoolean_(b);
}

+ (jboolean)equalsWithJavaLangBoolean:(JavaLangBoolean *)b1
                  withJavaLangBoolean:(JavaLangBoolean *)b2 {
  return ComFasterxmlJacksonAnnotationOptBoolean_equalsWithJavaLangBoolean_withJavaLangBoolean_(b1, b2);
}

+ (IOSObjectArray *)values {
  return ComFasterxmlJacksonAnnotationOptBoolean_values();
}

+ (ComFasterxmlJacksonAnnotationOptBoolean *)valueOfWithNSString:(NSString *)name {
  return ComFasterxmlJacksonAnnotationOptBoolean_valueOfWithNSString_(name);
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LJavaLangBoolean;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "Z", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LComFasterxmlJacksonAnnotationOptBoolean;", 0x9, 0, 1, -1, -1, -1, -1 },
    { NULL, "Z", 0x9, 2, 3, -1, -1, -1, -1 },
    { NULL, "[LComFasterxmlJacksonAnnotationOptBoolean;", 0x9, -1, -1, -1, -1, -1, -1 },
    { NULL, "LComFasterxmlJacksonAnnotationOptBoolean;", 0x9, 4, 5, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(asBoolean);
  methods[1].selector = @selector(asPrimitive);
  methods[2].selector = @selector(fromBooleanWithJavaLangBoolean:);
  methods[3].selector = @selector(equalsWithJavaLangBoolean:withJavaLangBoolean:);
  methods[4].selector = @selector(values);
  methods[5].selector = @selector(valueOfWithNSString:);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "TRUE", "LComFasterxmlJacksonAnnotationOptBoolean;", .constantValue.asLong = 0, 0x4019, -1, 6, -1, -1 },
    { "FALSE", "LComFasterxmlJacksonAnnotationOptBoolean;", .constantValue.asLong = 0, 0x4019, -1, 7, -1, -1 },
    { "DEFAULT", "LComFasterxmlJacksonAnnotationOptBoolean;", .constantValue.asLong = 0, 0x4019, -1, 8, -1, -1 },
  };
  static const void *ptrTable[] = { "fromBoolean", "LJavaLangBoolean;", "equals", "LJavaLangBoolean;LJavaLangBoolean;", "valueOf", "LNSString;", &JreEnum(ComFasterxmlJacksonAnnotationOptBoolean, TRUE), &JreEnum(ComFasterxmlJacksonAnnotationOptBoolean, FALSE), &JreEnum(ComFasterxmlJacksonAnnotationOptBoolean, DEFAULT), "Ljava/lang/Enum<Lcom/fasterxml/jackson/annotation/OptBoolean;>;" };
  static const J2ObjcClassInfo _ComFasterxmlJacksonAnnotationOptBoolean = { "OptBoolean", "com.fasterxml.jackson.annotation", ptrTable, methods, fields, 7, 0x4011, 6, 3, -1, -1, -1, 9, -1 };
  return &_ComFasterxmlJacksonAnnotationOptBoolean;
}

+ (void)initialize {
  if (self == [ComFasterxmlJacksonAnnotationOptBoolean class]) {
    size_t objSize = class_getInstanceSize(self);
    size_t allocSize = 3 * objSize;
    uintptr_t ptr = (uintptr_t)calloc(allocSize, 1);
    id e;
    for (jint i = 0; i < 3; i++) {
      ((void)(ComFasterxmlJacksonAnnotationOptBoolean_values_[i] = e = objc_constructInstance(self, (void *)ptr)), ptr += objSize);
      ComFasterxmlJacksonAnnotationOptBoolean_initWithNSString_withInt_(e, JreEnumConstantName(ComFasterxmlJacksonAnnotationOptBoolean_class_(), i), i);
    }
    J2OBJC_SET_INITIALIZED(ComFasterxmlJacksonAnnotationOptBoolean)
  }
}

@end

void ComFasterxmlJacksonAnnotationOptBoolean_initWithNSString_withInt_(ComFasterxmlJacksonAnnotationOptBoolean *self, NSString *__name, jint __ordinal) {
  JavaLangEnum_initWithNSString_withInt_(self, __name, __ordinal);
}

ComFasterxmlJacksonAnnotationOptBoolean *ComFasterxmlJacksonAnnotationOptBoolean_fromBooleanWithJavaLangBoolean_(JavaLangBoolean *b) {
  ComFasterxmlJacksonAnnotationOptBoolean_initialize();
  if (b == nil) {
    return JreEnum(ComFasterxmlJacksonAnnotationOptBoolean, DEFAULT);
  }
  return [b booleanValue] ? JreEnum(ComFasterxmlJacksonAnnotationOptBoolean, TRUE) : JreEnum(ComFasterxmlJacksonAnnotationOptBoolean, FALSE);
}

jboolean ComFasterxmlJacksonAnnotationOptBoolean_equalsWithJavaLangBoolean_withJavaLangBoolean_(JavaLangBoolean *b1, JavaLangBoolean *b2) {
  ComFasterxmlJacksonAnnotationOptBoolean_initialize();
  if (b1 == nil) {
    return b2 == nil;
  }
  return [b1 isEqual:b2];
}

IOSObjectArray *ComFasterxmlJacksonAnnotationOptBoolean_values() {
  ComFasterxmlJacksonAnnotationOptBoolean_initialize();
  return [IOSObjectArray arrayWithObjects:ComFasterxmlJacksonAnnotationOptBoolean_values_ count:3 type:ComFasterxmlJacksonAnnotationOptBoolean_class_()];
}

ComFasterxmlJacksonAnnotationOptBoolean *ComFasterxmlJacksonAnnotationOptBoolean_valueOfWithNSString_(NSString *name) {
  ComFasterxmlJacksonAnnotationOptBoolean_initialize();
  for (int i = 0; i < 3; i++) {
    ComFasterxmlJacksonAnnotationOptBoolean *e = ComFasterxmlJacksonAnnotationOptBoolean_values_[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw create_JavaLangIllegalArgumentException_initWithNSString_(name);
  return nil;
}

ComFasterxmlJacksonAnnotationOptBoolean *ComFasterxmlJacksonAnnotationOptBoolean_fromOrdinal(NSUInteger ordinal) {
  ComFasterxmlJacksonAnnotationOptBoolean_initialize();
  if (ordinal >= 3) {
    return nil;
  }
  return ComFasterxmlJacksonAnnotationOptBoolean_values_[ordinal];
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ComFasterxmlJacksonAnnotationOptBoolean)
