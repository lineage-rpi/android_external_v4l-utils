LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libv4l2
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

LOCAL_CFLAGS := \
    -Wno-missing-field-initializers \
    -Wno-sign-compare \
    -Wno-unused-parameter \
    -DHAVE_V4L_PLUGINS

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../.. \
    $(LOCAL_PATH)/../include \
    $(LOCAL_PATH)/../../include

LOCAL_SRC_FILES := \
    log.c \
    libv4l2.c \
    v4l2convert.c \
    v4l2-plugin-android.c

LOCAL_SHARED_LIBRARIES := \
    libcutils \
    libdl \
    libssl \
    libutils \
    libz

LOCAL_STATIC_LIBRARIES := libv4l_convert

include $(BUILD_SHARED_LIBRARY)
