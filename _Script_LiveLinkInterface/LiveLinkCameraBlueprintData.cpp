#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseBlueprintData.hpp"
#include "LiveLinkCameraBlueprintData.hpp"
void* _Script_LiveLinkInterface::LiveLinkCameraBlueprintData::get_StaticData() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_LiveLinkInterface::LiveLinkCameraBlueprintData::get_FrameData() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkCameraBlueprintData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkCameraBlueprintData");
    return result;
}
