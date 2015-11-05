LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := hellojni
LOCAL_SRC_FILES := HelloJNI.cpp
LOCAL_C_INCLUDES := $(JNI_H_INCLUDE)
LOCAL_LDLIBS := -L$(SYSROOT)/usr/lib -llog
LOCAL_MODULE_TAGS :=optional
LOCAL_PRELINK_MODULE := false
LOCAL_SHARED_LIBRARIES := libutils

include $(BUILD_SHARED_LIBRARY)
