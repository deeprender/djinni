// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from static_method_language.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "test_static_method_language.hpp"

namespace djinni_generated {

struct NativeTestStaticMethodLanguage : ::djinni::JsInterface<::testsuite::TestStaticMethodLanguage, NativeTestStaticMethodLanguage> {
    using CppType = std::shared_ptr<::testsuite::TestStaticMethodLanguage>;
    using CppOptType = std::shared_ptr<::testsuite::TestStaticMethodLanguage>;
    using JsType = em::val;
    using Boxed = NativeTestStaticMethodLanguage;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        djinni::checkForNull(c.get(), "NativeTestStaticMethodLanguage::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();


};

}  // namespace djinni_generated
