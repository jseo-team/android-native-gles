LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := Dyper
LOCAL_SRC_FILES := main.cpp shader_utils.c android_native_app_glue.c
LOCAL_LDLIBS := -llog -landroid -lEGL -lGLESv2 -lm -ldl
include $(BUILD_SHARED_LIBRARY)
$(call import-module,android/native_app_glue)
