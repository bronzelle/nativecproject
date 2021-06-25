//
// Created by bronz on 24/06/2021.
//

#include <jni.h>

#include "device.h"

static JNIEnv *gEnv;
static jclass ghDeviceClass;
static jmethodID gDeviceNextID;

static void setEnv(JNIEnv *env)
{
    gEnv = env;
}

static void getDeviceClass()
{
    ghDeviceClass = (*gEnv)->FindClass(gEnv, "br/com/setis/nativecproject/out/Device");
}

static void getDeviceFibonacciMethodID()
{
    gDeviceNextID = (*gEnv)->GetStaticMethodID(gEnv, ghDeviceClass, "getFibonacciAt", "(I)I");
}

static int callDeviceNext(int position)
{
    return (*gEnv)->CallStaticIntMethod(gEnv, ghDeviceClass, gDeviceNextID, position);
}

void init(JNIEnv *env)
{
    setEnv(env);
    getDeviceClass();
    getDeviceFibonacciMethodID();
}

int getFibonacci (int i)
{
    return callDeviceNext(i);
}