#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScreenshotReady.hpp"
void* _Script_SteamCore::ScreenshotReady::get_Handle() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_SteamCore::ScreenshotReady::get_Result() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_SteamCore::ScreenshotReady::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.ScreenshotReady");
    return result;
}
