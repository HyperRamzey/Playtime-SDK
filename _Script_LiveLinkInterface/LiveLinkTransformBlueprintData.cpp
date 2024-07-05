#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseBlueprintData.hpp"
#include "LiveLinkTransformBlueprintData.hpp"
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkTransformBlueprintData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkTransformBlueprintData");
    return result;
}
void* _Script_LiveLinkInterface::LiveLinkTransformBlueprintData::get_StaticData() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_LiveLinkInterface::LiveLinkTransformBlueprintData::get_FrameData() {
    return (void*)((uintptr_t)this + 0x20);
}
