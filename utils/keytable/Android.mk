LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := ir-keytable
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

LOCAL_CFLAGS := \
    -Wno-missing-field-initializers \
    -Wno-unused-parameter

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../.. \
    $(LOCAL_PATH)/../../include

LOCAL_SRC_FILES := \
    ir-encode.c \
    keymap.c \
    keytable.c \
    toml.c

include $(BUILD_EXECUTABLE)
