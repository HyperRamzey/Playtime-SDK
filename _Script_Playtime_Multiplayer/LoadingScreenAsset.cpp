#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ItemAsset.hpp"
#include "LoadingScreenAsset.hpp"
void* _Script_Playtime_Multiplayer::LoadingScreenAsset::get_LoadingScreenImage() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::LoadingScreenAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.LoadingScreenAsset");
    return result;
}
