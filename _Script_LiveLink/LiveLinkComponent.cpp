#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Timecode.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "LiveLinkComponent.hpp"
#include "..\_Script_LiveLinkInterface\SubjectFrameHandle.hpp"
void _Script_LiveLink::LiveLinkComponent::GetSubjectDataAtWorldTime(void* SubjectName, float WorldTime, bool& bSuccess, _Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle) {
    return;
}
void* _Script_LiveLink::LiveLinkComponent::get_OnLiveLinkUpdated() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkComponent");
    return result;
}
void _Script_LiveLink::LiveLinkComponent::GetSubjectDataAtSceneTime(void* SubjectName, _Script_CoreUObject::Timecode& SceneTime, bool& bSuccess, _Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle) {
    return;
}
void _Script_LiveLink::LiveLinkComponent::GetSubjectData(void* SubjectName, bool& bSuccess, _Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle) {
    return;
}
void _Script_LiveLink::LiveLinkComponent::GetAvailableSubjectNames(void*& SubjectNames) {
    return;
}
