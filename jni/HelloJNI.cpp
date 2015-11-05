#include <string.h>
#include <jni.h>
#include <android/log.h>
#include "com_sai628_hellojni_MainActivity.h"

#define LOG_TAG "HelloJNI"

jstring Java_com_sai628_hellojni_MainActivity_printJNI(JNIEnv *env, jobject thiz,
		jstring inputStr) {

	__android_log_write(ANDROID_LOG_ERROR, LOG_TAG, "begin");
	const char *str = env->GetStringUTFChars(inputStr, JNI_FALSE);
	__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "inputStr:%s", str);
	__android_log_print(ANDROID_LOG_ERROR, LOG_TAG, "end");

	env->ReleaseStringUTFChars(inputStr, str);

	return env->NewStringUTF("Hello world! I am native interface2!");
}
