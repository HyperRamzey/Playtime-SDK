#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SteamCoreAsyncAction.hpp"
#include "UGCUpdateHandle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SteamCore {
struct SubmitItemUpdateResult;
}
namespace _Script_SteamCore {
#pragma pack(push, 1)
struct SteamCoreUGCAsyncActionSubmitItemUpdate : public SteamCoreAsyncAction {
    private: char pad_38[0x10]; public:
    void* get_OnCallback();
    static _Script_CoreUObject::Class* static_class();
    _Script_SteamCore::SteamCoreUGCAsyncActionSubmitItemUpdate* SubmitItemUpdateAsync(_Script_CoreUObject::Object* WorldContextObject, _Script_SteamCore::UGCUpdateHandle Handle, void* ChangeNote, float Timeout);
    void HandleCallback(_Script_SteamCore::SubmitItemUpdateResult& Data, bool bWasSuccessful);
}; // Size: 0x48
#pragma pack(pop)
}
