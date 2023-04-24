#pragma once
#include <android/log.h>
#define  ANDROID_JNI_LOG_D(TAG, ...) __android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__)
#define  ANDROID_JNI_LOG_W(TAG, ...) __android_log_print(ANDROID_LOG_WARN, TAG, __VA_ARGS__)
#define  ANDROID_JNI_LOG_I(TAG, ...) __android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__)
#define  ANDROID_JNI_LOG_E(TAG, ...) __android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__)

