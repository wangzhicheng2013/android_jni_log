#include <jni.h>
#include <string>
#include "android_jni_log.hpp"
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_jnilog_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    ANDROID_JNI_LOG_D("BBB", "[%d:%s]-->%s:%d", __LINE__, __FUNCTION__, "1111", 111);
    return env->NewStringUTF(hello.c_str());
}