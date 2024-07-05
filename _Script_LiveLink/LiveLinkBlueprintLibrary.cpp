#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Timecode.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "LiveLinkBlueprintLibrary.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkAnimationFrameData.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkBaseBlueprintData.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkBasicBlueprintData.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSkeletonStaticData.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSourceHandle.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSubjectKey.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSubjectName.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSubjectRepresentation.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkTransform.hpp"
#include "..\_Script_LiveLinkInterface\SubjectFrameHandle.hpp"
#include "..\_Script_LiveLinkInterface\SubjectMetadata.hpp"
_Script_CoreUObject::Class* _Script_LiveLink::LiveLinkBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LiveLink.LiveLinkBlueprintLibrary");
    return result;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::ParentBoneSpaceTransform(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, _Script_CoreUObject::Transform& Transform) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::TransformName(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, void*& Name) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::TransformNames(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, void*& TransformNames) {
    return;
}
int32_t _Script_LiveLink::LiveLinkBlueprintLibrary::NumberOfTransforms(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::RemoveSource(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(_Script_LiveLinkInterface::LiveLinkSubjectKey SubjectKey, bool bEnabled) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(_Script_LiveLinkInterface::LiveLinkSubjectKey SubjectKey, bool bForThisFrame) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::IsSourceStillValid(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::HasParent(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::GetTransformByName(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, void* TransformName, _Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::GetTransformByIndex(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, _Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform) {
    return;
}
void* _Script_LiveLink::LiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(_Script_LiveLinkInterface::LiveLinkSubjectKey SubjectKey) {
    return;
}
void* _Script_LiveLink::LiveLinkBlueprintLibrary::GetSourceType(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle) {
    return;
}
void* _Script_LiveLink::LiveLinkBlueprintLibrary::GetSourceStatus(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName, void* Role, _Script_CoreUObject::Timecode SceneTime, _Script_LiveLinkInterface::LiveLinkBaseBlueprintData& OutBlueprintData) {
    return;
}
void* _Script_LiveLink::LiveLinkBlueprintLibrary::GetSourceMachineName(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::GetRootTransform(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName, void* Role, float WorldTimeOffset, _Script_LiveLinkInterface::LiveLinkBaseBlueprintData& OutBlueprintData) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::GetPropertyValue(_Script_LiveLinkInterface::LiveLinkBasicBlueprintData& BasicData, void* PropertyName, float& Value) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::EvaluateLiveLinkFrame(_Script_LiveLinkInterface::LiveLinkSubjectRepresentation SubjectRepresentation, _Script_LiveLinkInterface::LiveLinkBaseBlueprintData& OutBlueprintData) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::GetParent(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, _Script_LiveLinkInterface::LiveLinkTransform& Parent) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::GetMetadata(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::SubjectMetadata& MetaData) {
    return;
}
void* _Script_LiveLink::LiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject) {
    return;
}
void* _Script_LiveLink::LiveLinkBlueprintLibrary::GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject) {
    return;
}
void* _Script_LiveLink::LiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::GetAnimationStaticData(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::LiveLinkSkeletonStaticData& AnimationStaticData) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::GetCurves(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, void*& Curves) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::GetChildren(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, void*& Children) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::GetBasicData(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::LiveLinkBasicBlueprintData& BasicBlueprintData) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::GetAnimationFrameData(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::LiveLinkAnimationFrameData& AnimationFrameData) {
    return;
}
bool _Script_LiveLink::LiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName, void* Role, _Script_LiveLinkInterface::LiveLinkBaseBlueprintData& OutBlueprintData) {
    return;
}
void _Script_LiveLink::LiveLinkBlueprintLibrary::ComponentSpaceTransform(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, _Script_CoreUObject::Transform& Transform) {
    return;
}
int32_t _Script_LiveLink::LiveLinkBlueprintLibrary::ChildCount(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform) {
    return;
}
