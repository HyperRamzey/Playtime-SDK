#include "..\FUObjectArray.hpp"
#include "ARCandidateImage.hpp"
#include "ARTrackedGeometry.hpp"
#include "ARTrackedImage.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
_Script_CoreUObject::Vector2D _Script_AugmentedReality::ARTrackedImage::GetEstimateSize() {
    return;
}
_Script_AugmentedReality::ARCandidateImage*& _Script_AugmentedReality::ARTrackedImage::get_DetectedImage() {
    return *(_Script_AugmentedReality::ARCandidateImage**)((uintptr_t)this + 0xf8);
}
void* _Script_AugmentedReality::ARTrackedImage::get_EstimatedSize() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARTrackedImage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AugmentedReality.ARTrackedImage");
    return result;
}
_Script_AugmentedReality::ARCandidateImage* _Script_AugmentedReality::ARTrackedImage::GetDetectedImage() {
    return;
}
