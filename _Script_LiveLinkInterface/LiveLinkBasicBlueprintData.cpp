#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBaseBlueprintData.hpp"
#include "LiveLinkBasicBlueprintData.hpp"
void* _Script_LiveLinkInterface::LiveLinkBasicBlueprintData::get_StaticData() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_LiveLinkInterface::LiveLinkBasicBlueprintData::get_FrameData() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_LiveLinkInterface::LiveLinkBasicBlueprintData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLinkInterface.LiveLinkBasicBlueprintData");
    return result;
}
