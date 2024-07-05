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
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_AdvancedSessions {
#pragma pack(push, 1)
struct FindSessionsCallbackProxyAdvanced : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_30[0xa0]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_AdvancedSessions::FindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, void* ServerTypeToSearch, void*& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int32_t MinSlotsAvailable);
    void FilterSessionResults(void*& SessionResults, void*& Filters, void*& FilteredResults);
}; // Size: 0xd0
#pragma pack(pop)
}
