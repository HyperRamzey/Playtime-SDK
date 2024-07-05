#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseBlueprintData.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkBaseBlueprintData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkBaseBlueprintData");
    return result;
}
