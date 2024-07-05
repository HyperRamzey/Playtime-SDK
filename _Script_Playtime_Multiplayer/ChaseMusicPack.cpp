#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundBase.hpp"
#include "ChaseMusicPack.hpp"
#include "SoundPack.hpp"
_Script_Engine::SoundBase*& _Script_Playtime_Multiplayer::ChaseMusicPack::get_ChaseMusic() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::ChaseMusicPack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.ChaseMusicPack");
    return result;
}
