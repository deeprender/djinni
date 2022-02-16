// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from multiple_inheritance.djinni

#pragma once

#include "djinni_wasm.hpp"
#include "return_one.hpp"

namespace djinni_generated {

struct NativeReturnOne : ::djinni::JsInterface<::testsuite::ReturnOne, NativeReturnOne> {
    using CppType = std::shared_ptr<::testsuite::ReturnOne>;
    using CppOptType = std::shared_ptr<::testsuite::ReturnOne>;
    using JsType = em::val;
    using Boxed = NativeReturnOne;

    static CppType toCpp(JsType j) { return _fromJs(j); }
    static JsType fromCppOpt(const CppOptType& c) { return {_toJs(c)}; }
    static JsType fromCpp(const CppType& c) {
        djinni::checkForNull(c.get(), "NativeReturnOne::fromCpp");
        return fromCppOpt(c);
    }

    static em::val cppProxyMethods();

    static em::val get_instance();
    static int8_t return_one(const CppType& self);

};

}  // namespace djinni_generated
