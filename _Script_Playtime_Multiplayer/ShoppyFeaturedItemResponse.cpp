#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ShoppyFeaturedItemResponse.hpp"
void* _Script_Playtime_Multiplayer::ShoppyFeaturedItemResponse::get_Rarity() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_Playtime_Multiplayer::ShoppyFeaturedItemResponse::get_ID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Playtime_Multiplayer::ShoppyFeaturedItemResponse::get_PriceInCoins() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Playtime_Multiplayer::ShoppyFeaturedItemResponse::get_PriceInTickets() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ShoppyFeaturedItemResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Playtime_Multiplayer.ShoppyFeaturedItemResponse");
    return result;
}
