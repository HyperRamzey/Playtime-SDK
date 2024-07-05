#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ItemAsset.hpp"
#include "SoundPack.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::SoundPack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.SoundPack");
    return result;
}
