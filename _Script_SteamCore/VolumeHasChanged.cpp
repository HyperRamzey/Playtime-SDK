#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VolumeHasChanged.hpp"
float& _Script_SteamCore::VolumeHasChanged::get_Volume() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SteamCore::VolumeHasChanged::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.VolumeHasChanged");
    return result;
}
