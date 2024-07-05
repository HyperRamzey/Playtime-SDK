#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LiveLinkRetargetAsset.hpp"
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkRetargetAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkRetargetAsset");
    return result;
}
