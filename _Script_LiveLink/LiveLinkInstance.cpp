#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "LiveLinkInstance.hpp"
#include "LiveLinkRetargetAsset.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSubjectName.hpp"
_Script_LiveLink::LiveLinkRetargetAsset*& _Script_LiveLink::LiveLinkInstance::get_CurrentRetargetAsset() {
    return *(_Script_LiveLink::LiveLinkRetargetAsset**)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkInstance");
    return result;
}
void _Script_LiveLink::LiveLinkInstance::SetRetargetAsset(void* RetargetAsset) {
    return;
}
void _Script_LiveLink::LiveLinkInstance::SetSubject(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName) {
    return;
}
