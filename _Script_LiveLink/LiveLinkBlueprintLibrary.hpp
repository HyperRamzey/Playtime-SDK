#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Timecode.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSubjectKey.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSubjectName.hpp"
#include "..\_Script_LiveLinkInterface\LiveLinkSubjectRepresentation.hpp"
namespace _Script_LiveLinkInterface {
struct SubjectFrameHandle;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkTransform;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkSourceHandle;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkBasicBlueprintData;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkSkeletonStaticData;
}
namespace _Script_LiveLinkInterface {
struct SubjectMetadata;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkAnimationFrameData;
}
namespace _Script_LiveLinkInterface {
struct LiveLinkBaseBlueprintData;
}
namespace _Script_LiveLink {
#pragma pack(push, 1)
struct LiveLinkBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void TransformNames(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, void*& TransformNames);
    void TransformName(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, void*& Name);
    void SetLiveLinkSubjectEnabled(_Script_LiveLinkInterface::LiveLinkSubjectKey SubjectKey, bool bEnabled);
    bool RemoveSource(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle);
    void ParentBoneSpaceTransform(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, _Script_CoreUObject::Transform& Transform);
    int32_t NumberOfTransforms(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle);
    bool IsSpecificLiveLinkSubjectEnabled(_Script_LiveLinkInterface::LiveLinkSubjectKey SubjectKey, bool bForThisFrame);
    bool IsSourceStillValid(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle);
    bool IsLiveLinkSubjectEnabled(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName);
    bool HasParent(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform);
    void GetTransformByName(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, void* TransformName, _Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform);
    void GetTransformByIndex(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, _Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform);
    void* GetSpecificLiveLinkSubjectRole(_Script_LiveLinkInterface::LiveLinkSubjectKey SubjectKey);
    void* GetSourceType(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle);
    void* GetSourceStatus(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle);
    void* GetSourceMachineName(_Script_LiveLinkInterface::LiveLinkSourceHandle& SourceHandle);
    void GetRootTransform(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform);
    bool GetPropertyValue(_Script_LiveLinkInterface::LiveLinkBasicBlueprintData& BasicData, void* PropertyName, float& Value);
    void GetParent(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, _Script_LiveLinkInterface::LiveLinkTransform& Parent);
    void GetMetadata(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::SubjectMetadata& MetaData);
    void* GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);
    void* GetLiveLinkSubjectRole(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName);
    void* GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
    void GetCurves(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, void*& Curves);
    void GetChildren(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, void*& Children);
    void GetBasicData(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::LiveLinkBasicBlueprintData& BasicBlueprintData);
    bool GetAnimationStaticData(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::LiveLinkSkeletonStaticData& AnimationStaticData);
    bool GetAnimationFrameData(_Script_LiveLinkInterface::SubjectFrameHandle& SubjectFrameHandle, _Script_LiveLinkInterface::LiveLinkAnimationFrameData& AnimationFrameData);
    bool EvaluateLiveLinkFrameWithSpecificRole(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName, void* Role, _Script_LiveLinkInterface::LiveLinkBaseBlueprintData& OutBlueprintData);
    bool EvaluateLiveLinkFrameAtWorldTimeOffset(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName, void* Role, float WorldTimeOffset, _Script_LiveLinkInterface::LiveLinkBaseBlueprintData& OutBlueprintData);
    bool EvaluateLiveLinkFrameAtSceneTime(_Script_LiveLinkInterface::LiveLinkSubjectName SubjectName, void* Role, _Script_CoreUObject::Timecode SceneTime, _Script_LiveLinkInterface::LiveLinkBaseBlueprintData& OutBlueprintData);
    bool EvaluateLiveLinkFrame(_Script_LiveLinkInterface::LiveLinkSubjectRepresentation SubjectRepresentation, _Script_LiveLinkInterface::LiveLinkBaseBlueprintData& OutBlueprintData);
    void ComponentSpaceTransform(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform, _Script_CoreUObject::Transform& Transform);
    int32_t ChildCount(_Script_LiveLinkInterface::LiveLinkTransform& LiveLinkTransform);
}; // Size: 0x28
#pragma pack(pop)
}
