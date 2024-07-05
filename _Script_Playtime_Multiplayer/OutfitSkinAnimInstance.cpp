#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "OutfitSkinAnimInstance.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::OutfitSkinAnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.OutfitSkinAnimInstance");
    return result;
}
void* _Script_Playtime_Multiplayer::OutfitSkinAnimInstance::get_SkinType() {
    return (void*)((uintptr_t)this + 0x2b8);
}
