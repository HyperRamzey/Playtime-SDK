#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseBlueprintData.hpp"
#include "LiveLinkLightBlueprintData.hpp"
void* _Script_LiveLinkInterface::LiveLinkLightBlueprintData::get_StaticData() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_LiveLinkInterface::LiveLinkLightBlueprintData::get_FrameData() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkLightBlueprintData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkLightBlueprintData");
    return result;
}
