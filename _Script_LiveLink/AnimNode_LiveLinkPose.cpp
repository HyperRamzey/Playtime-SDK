#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
#include "AnimNode_LiveLinkPose.hpp"
#include "LiveLinkRetargetAsset.hpp"
void* _Script_LiveLink::AnimNode_LiveLinkPose::get_InputPose() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_LiveLink::AnimNode_LiveLinkPose::get_LiveLinkSubjectName() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_LiveLink::AnimNode_LiveLinkPose::get_RetargetAsset() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_LiveLink::AnimNode_LiveLinkPose::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LiveLink.AnimNode_LiveLinkPose");
    return result;
}
_Script_LiveLink::LiveLinkRetargetAsset*& _Script_LiveLink::AnimNode_LiveLinkPose::get_CurrentRetargetAsset() {
    return *(_Script_LiveLink::LiveLinkRetargetAsset**)((uintptr_t)this + 0x30);
}
