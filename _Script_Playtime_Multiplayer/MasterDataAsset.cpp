#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "MasterDataAsset.hpp"
void* _Script_Playtime_Multiplayer::MasterDataAsset::get_SoundClasses() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Playtime_Multiplayer::MasterDataAsset::get_SoundMixes() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Playtime_Multiplayer::MasterDataAsset::get_DataTables() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Playtime_Multiplayer::MasterDataAsset::get_Levels() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::MasterDataAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.MasterDataAsset");
    return result;
}
