LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := cec-ctl
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

LOCAL_CFLAGS := \
    -Wno-missing-field-initializers \
    -Wno-unused-parameter

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../.. \
    $(LOCAL_PATH)/../../include \
    $(LOCAL_PATH)/../libcecutil

LOCAL_SRC_FILES := \
    cec-ctl.cpp \
    cec-pin.cpp

LOCAL_STATIC_LIBRARIES := libcecutil

include $(BUILD_EXECUTABLE)
