LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libcecutil
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

LOCAL_CFLAGS := \
    -Wno-missing-field-initializers \
    -Wno-unused-parameter

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../../include

LOCAL_SRC_FILES := \
    cec-info.cpp \
    cec-log.cpp \
    cec-parse.cpp

include $(BUILD_STATIC_LIBRARY)
