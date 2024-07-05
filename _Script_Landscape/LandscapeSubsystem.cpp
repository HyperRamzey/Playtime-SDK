#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TickableWorldSubsystem.hpp"
#include "LandscapeSubsystem.hpp"
_Script_CoreUObject::Class* _Script_Landscape::LandscapeSubsystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeSubsystem");
    return result;
}
