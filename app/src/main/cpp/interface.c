//
// Created by bronz on 24/06/2021.
//

#include <jni.h>

#include "device.h"

JNIEXPORT jint JNICALL
Java_br_com_setis_nativecproject_in_Native_majorVersion(
        JNIEnv* env,
        jobject this) {
    return 1;
}

JNIEXPORT jint JNICALL
Java_br_com_setis_nativecproject_in_Native_getFibonacci(
        JNIEnv* env,
        jobject this,
        jint i) {
    init(env);
    return getFibonacci(i);
}