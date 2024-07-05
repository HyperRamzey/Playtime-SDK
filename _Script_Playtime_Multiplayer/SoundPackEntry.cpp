#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "SoundPack.hpp"
#include "SoundPackEntry.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::SoundPackEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.SoundPackEntry");
    return result;
}
void* _Script_Playtime_Multiplayer::SoundPackEntry::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Playtime_Multiplayer::SoundPack*& _Script_Playtime_Multiplayer::SoundPackEntry::get_SoundPack() {
    return *(_Script_Playtime_Multiplayer::SoundPack**)((uintptr_t)this + 0x28);
}
void* _Script_Playtime_Multiplayer::SoundPackEntry::get_Type() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Playtime_Multiplayer::SoundPackEntry::get_Description() {
    return (void*)((uintptr_t)this + 0x30);
}
