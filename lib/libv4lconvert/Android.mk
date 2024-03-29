LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libv4l_convert
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true

LOCAL_CFLAGS := \
    -Wno-missing-field-initializers \
    -Wno-sign-compare \
    -Wno-unused-function \
    -Wno-unused-parameter \
    -Wno-unused-variable

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../.. \
    $(LOCAL_PATH)/../include \
    $(LOCAL_PATH)/../../include

LOCAL_SRC_FILES := \
    bayer.c \
    cpia1.c \
    crop.c \
    flip.c \
    helper.c \
    hm12.c \
    jidctflt.c \
    jl2005bcd.c \
    jpeg.c \
    jpeg_memsrcdest.c \
    jpgl.c \
    libv4lconvert.c \
    mr97310a.c \
    pac207.c \
    rgbyuv.c \
    se401.c \
    sn9c10x.c \
    sn9c2028-decomp.c \
    sn9c20x.c \
    spca501.c \
    spca561-decompress.c \
    sq905c.c \
    stv0680.c \
    tinyjpeg.c \
    control/libv4lcontrol.c \
    processing/autogain.c \
    processing/gamma.c \
    processing/libv4lprocessing.c \
    processing/whitebalance.c

LOCAL_SHARED_LIBRARIES := \
    libcutils \
    libdl \
    libutils \
    libz

include $(BUILD_STATIC_LIBRARY)
