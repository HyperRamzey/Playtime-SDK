#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DebugTrainSettings.hpp"
int32_t& _Script_Playtime_Multiplayer::DebugTrainSettings::get_PassengerCartCount() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
float& _Script_Playtime_Multiplayer::DebugTrainSettings::get_CartOffset() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::DebugTrainSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.DebugTrainSettings");
    return result;
}
