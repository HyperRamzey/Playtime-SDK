#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "WebJSCallbackBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_WebBrowser {
#pragma pack(push, 1)
struct WebJSResponse : public WebJSCallbackBase {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
