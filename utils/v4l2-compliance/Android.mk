LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := v4l2-compliance
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

LOCAL_CFLAGS := \
    -Wno-missing-braces \
    -Wno-missing-field-initializers \
    -Wno-unused-parameter \
    -DNO_LIBV4L2

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../.. \
    $(LOCAL_PATH)/../../include \
    $(LOCAL_PATH)/../common

LOCAL_SRC_FILES := \
    media-info.cpp \
    v4l2-compliance.cpp \
    v4l2-info.cpp \
    v4l2-test-buffers.cpp \
    v4l2-test-codecs.cpp \
    v4l2-test-colors.cpp \
    v4l2-test-controls.cpp \
    v4l2-test-debug.cpp \
    v4l2-test-formats.cpp \
    v4l2-test-input-output.cpp \
    v4l2-test-io-config.cpp \
    v4l2-test-media.cpp \
    v4l2-test-subdevs.cpp

include $(BUILD_EXECUTABLE)
