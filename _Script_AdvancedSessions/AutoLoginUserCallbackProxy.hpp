#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct AutoLoginUserCallbackProxy : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_30[0x48]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_AdvancedSessions::AutoLoginUserCallbackProxy* AutoLoginUser(_Script_CoreUObject::Object* WorldContextObject, int32_t LocalUserNum);
}; // Size: 0x78
#pragma pack(pop)
}
