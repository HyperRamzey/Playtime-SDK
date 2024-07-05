#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "NavigatorIndicatorSorter.hpp"
void* _Script_Playtime_Multiplayer::NavigatorIndicatorSorter::SortArray(void* ElementArray) {
    return;
}
_Script_CoreUObject::Class* _Script_Playtime_Multiplayer::NavigatorIndicatorSorter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Playtime_Multiplayer.NavigatorIndicatorSorter");
    return result;
}
