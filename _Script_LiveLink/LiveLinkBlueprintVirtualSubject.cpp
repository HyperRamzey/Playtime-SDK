#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LiveLinkBlueprintVirtualSubject.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkBaseFrameData.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkBaseStaticData.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkVirtualSubject.hpp"
bool _Script_LiveLink::LiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal(_Script_LiveLinkInterface::LiveLinkBaseStaticData& InStruct) {
    return;
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkBlueprintVirtualSubject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkBlueprintVirtualSubject");
    return result;
}
bool _Script_LiveLink::LiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal(_Script_LiveLinkInterface::LiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintVirtualSubject::OnUpdate() {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintVirtualSubject::OnInitialize() {
    return;
}
