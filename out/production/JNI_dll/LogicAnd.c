#include <jni.h>        // JNI header provided by JDK
#include <stdio.h>      // C Standard IO Header
#include "LogicalAnd.h"   // Generated

JNIEXPORT jint JNICALL Java_LogicalAnd_logAnd
  (JNIEnv *env, jobject thisObj, jint a, jint b){
  return a&b;
  }