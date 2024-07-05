#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "VaRestURL.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_VaRest {
struct VaRestSettings;
}
namespace _Script_VaRest {
#pragma pack(push, 1)
struct VaRestLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void* StringToSha1(void* StringToHash);
    void* StringToMd5(void* StringToHash);
    void* PercentEncode(void* Source);
    void* HTTPStatusIntToEnum(int32_t StatusCode);
    _Script_VaRest::VaRestURL GetWorldURL(_Script_CoreUObject::Object* WorldContextObject);
    void* GetVaRestVersion();
    _Script_VaRest::VaRestSettings* GetVaRestSettings();
    bool Base64EncodeData(void*& Data, void*& Dest);
    void* Base64Encode(void* Source);
    bool Base64DecodeData(void* Source, void*& Dest);
    bool Base64Decode(void* Source, void*& Dest);
}; // Size: 0x28
#pragma pack(pop)
}
