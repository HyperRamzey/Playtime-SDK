#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PuzzleBase.hpp"
#include "PuzzleClaw.hpp"
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::PuzzleClaw::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.PuzzleClaw");
    return result;
}
