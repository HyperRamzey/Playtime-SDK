#include "..\FUObjectArray.hpp"
#include "..\_Script_AugmentedReality\ARSessionConfig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Texture2D.hpp"
#include "LuminARCandidateImage.hpp"
#include "LuminARImageTrackingFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_MagicLeapAR::LuminARImageTrackingFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MagicLeapAR.LuminARImageTrackingFunctionLibrary");
    return result;
}
_Script_MagicLeapAR::LuminARCandidateImage* _Script_MagicLeapAR::LuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImageEx(_Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::Texture2D* CandidateTexture, void* FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary, void* InAxisOrientation) {
    return;
}
_Script_MagicLeapAR::LuminARCandidateImage* _Script_MagicLeapAR::LuminARImageTrackingFunctionLibrary::AddLuminRuntimeCandidateImage(_Script_AugmentedReality::ARSessionConfig* SessionConfig, _Script_Engine::Texture2D* CandidateTexture, void* FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary) {
    return;
}
