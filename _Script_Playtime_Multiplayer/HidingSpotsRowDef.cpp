#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "HidingSpotsRowDef.hpp"
void* _Script_Playtime_Multiplayer::HidingSpotsRowDef::get_EnterPose() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Playtime_Multiplayer::HidingSpotsRowDef::get_ExitPose() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Playtime_Multiplayer::HidingSpotsRowDef::get_HidePose() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::HidingSpotsRowDef::get_ObjectOpen() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Playtime_Multiplayer::HidingSpotsRowDef::get_ObjectClose() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::HidingSpotsRowDef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.HidingSpotsRowDef");
    return result;
}
