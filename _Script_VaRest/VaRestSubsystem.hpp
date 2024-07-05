#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\EngineSubsystem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VaRest {
struct VaRestJsonObject;
}
namespace _Script_VaRest {
struct VaRestJsonValue;
}
namespace _Script_VaRest {
struct VaRestRequestJSON;
}
namespace _Script_VaRest {
#pragma pack(push, 1)
struct VaRestSubsystem : public _Script_Engine::EngineSubsystem {
    private: char pad_30[0x50]; public:
    void* get_RequestMap();
    static _Script_CoreUObject::Class* static_class();
    _Script_VaRest::VaRestJsonObject* StaticConstructVaRestJsonObject();
    _Script_VaRest::VaRestJsonObject* LoadJsonFromFile(void* Path, bool bIsRelativeToContentDir);
    _Script_VaRest::VaRestJsonValue* DecodeJsonValue(void* JsonString);
    _Script_VaRest::VaRestJsonObject* DecodeJsonObject(void* JsonString);
    _Script_VaRest::VaRestRequestJSON* ConstructVaRestRequestExt(void* Verb, void* ContentType);
    _Script_VaRest::VaRestRequestJSON* ConstructVaRestRequest();
    _Script_VaRest::VaRestJsonObject* ConstructVaRestJsonObject();
    _Script_VaRest::VaRestJsonValue* ConstructJsonValueString(void* StringValue);
    _Script_VaRest::VaRestJsonValue* ConstructJsonValueObject(_Script_VaRest::VaRestJsonObject* JsonObject);
    _Script_VaRest::VaRestJsonValue* ConstructJsonValueNumber(float Number);
    _Script_VaRest::VaRestJsonValue* ConstructJsonValueBool(bool InValue);
    _Script_VaRest::VaRestJsonValue* ConstructJsonValueArray(void*& inArray);
    void CallURL(void* URL, void* Verb, void* ContentType, _Script_VaRest::VaRestJsonObject* VaRestJson, void*& Callback);
}; // Size: 0x80
#pragma pack(pop)
}
