//
// Created by Giovanni on 30/12/2022.
//
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jint JNICALL
Java_com_giovanni_example_hellofromc_MainActivity_helloFromC(JNIEnv *env, jobject thiz) {
    return 515;
}
