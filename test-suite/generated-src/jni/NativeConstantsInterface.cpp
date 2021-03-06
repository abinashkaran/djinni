// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#include "NativeConstantsInterface.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeConstantsInterface::NativeConstantsInterface() : ::djinni::JniInterface<::ConstantsInterface, NativeConstantsInterface>("com/dropbox/djinni/test/ConstantsInterface$CppProxy") {}

NativeConstantsInterface::~NativeConstantsInterface() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_ConstantsInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::ConstantsInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_ConstantsInterface_00024CppProxy_native_1dummy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::CppProxyHandle<::ConstantsInterface>::get(nativeRef);
        ref->dummy();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
