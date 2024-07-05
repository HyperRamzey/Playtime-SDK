#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "AvatarImageLoaded.hpp"
void* _Script_SteamCore::AvatarImageLoaded::get_SteamID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::Texture2D*& _Script_SteamCore::AvatarImageLoaded::get_Image() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SteamCore::AvatarImageLoaded::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.AvatarImageLoaded");
    return result;
}
